# PspVariableIssue
 
When variables are globals or statics, some types are not initiated like std::string, std::map, std::mutex...

Expected result (code without global variable):
![good result](https://github.com/Fewnity/PspVariableIssue/assets/39272935/6e7fad81-53d9-45b3-a043-85fd9e23074b)

On emulator:
![bad result](https://github.com/Fewnity/PspVariableIssue/assets/39272935/7017d171-5353-4e3d-b55b-bc61d5f7bf3d)

On real hardware:<br>
Crash...
