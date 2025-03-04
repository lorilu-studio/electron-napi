<script setup>
// import Versions from './components/Versions.vue'

// const ipcHandle = () => window.electron.ipcRenderer.send('ping')
import { ref } from 'vue'

const num1 = ref(0)
const num2 = ref(0)
const count = ref(0)

const handleAdd = async () => {
  const result = await window.electron.ipcRenderer.invoke('add-fun', num1.value, num2.value)
  count.value = result
}
</script>

<template>
  <div>
    <input v-model="num1" type="text" /> + <input v-model="num2" type="text" />
    <button @click="handleAdd">计算</button>

    <div>{{ count }}</div>
  </div>
  <!-- <div class="actions">
    <div class="action">
      <a target="_blank" rel="noreferrer" @click="ipcHandle">Send IPC</a>
    </div>
  </div> -->
  <!-- <Versions /> -->

</template>
