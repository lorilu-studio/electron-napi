{
  "targets": [
    {
      "target_name": "addon",
      "sources": ["module.cpp"],
	  'dependencies': [
		"<!(node -p \"require('node-addon-api').targets\"):node_addon_api_except",
	  ]
	}
  ]
}
