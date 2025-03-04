//module.cpp

#include <napi.h>
#include <Windows.h>
#include <string>

Napi::Number Method(const Napi::CallbackInfo& info) {
	std::wstring str = L"Hello,World";
	MessageBoxW(NULL, str.c_str(), L"From addon.node", MB_OK);
	Napi::Env env = info.Env();
	return Napi::Number::New(env, 0);
}

Napi::Object Init(Napi::Env env, Napi::Object exports) {
	exports.Set(Napi::String::New(env, "msg"), Napi::Function::New(env, Method));
	return exports;
}

NODE_API_MODULE(NODE_GYP_MODULE_NAME, Init)
