# ExplorerUACStealer
 ExplorerUACStealer it's a malware that steal credentials provided by users in UAC Auth in explorer using API Hooking with Detours in C++ 

Let's store de DLL into: C:\\Users\\berna\\source\\repos\\EdgeCredStealer\\x64\\Release

You can modify this from source code.

Now i open a explorer.exe:

And let's execute the binary:

![imagen](https://github.com/S12cybersecurity/ExplorerUACStealer/assets/79543461/277152db-e0b3-42e2-b720-74799a06645d)

The DLL its injected into the process, and when i execute a executable as other user:

![imagen](https://github.com/S12cybersecurity/ExplorerUACStealer/assets/79543461/ff35f0ea-cc28-4ff5-924d-1236dabb1344)

Now i enter a credentials…

![imagen](https://github.com/S12cybersecurity/ExplorerUACStealer/assets/79543461/8eef800c-2d41-4e85-a5db-3649e7902b17)

The credentials are stored!
