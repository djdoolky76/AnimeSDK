#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace HoudiniEngineUnity { class HEU_CookLogs; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define HOUDINIENGINEUNITY_HEU_COOKLOGS_APPENDCOOKLOG_OFFSET UNITYSDK_OFFSET(0x1B8B6170)
#define HOUDINIENGINEUNITY_HEU_COOKLOGS_CLEARCOOKLOG_OFFSET UNITYSDK_OFFSET(0x1B8B6670)
#define HOUDINIENGINEUNITY_HEU_COOKLOGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1B8B60C0)
#define HOUDINIENGINEUNITY_HEU_COOKLOGS_DELETECOOKINGFILE_OFFSET UNITYSDK_OFFSET(0x1B8B67A0)
#define HOUDINIENGINEUNITY_HEU_COOKLOGS_GETCOOKLOGFILEPATH_OFFSET UNITYSDK_OFFSET(0x1B8B66F0)
#define HOUDINIENGINEUNITY_HEU_COOKLOGS_GETCOOKLOGSTRING_OFFSET UNITYSDK_OFFSET(0x1B8B6150)
#define HOUDINIENGINEUNITY_HEU_COOKLOGS_GETFILESIZEOFLOGFILE_OFFSET UNITYSDK_OFFSET(0x1B8B6A20)
#define HOUDINIENGINEUNITY_HEU_COOKLOGS_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B8B5FC0)
#define HOUDINIENGINEUNITY_HEU_COOKLOGS_WRITETOLOGFILE_OFFSET UNITYSDK_OFFSET(0x1B8B63A0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_CookLogs_TypeDefinitionIndex = 40620;

	class HEU_CookLogs : public ::System::Object
	{
	public:
		::System::String* _lastLogStr; // 0x10
		::System::Text::StringBuilder* _cookLogs; // 0x18
		::System::Boolean _uniqueStrOnly; // 0x20
		::System::Byte _padding0[0x3];
		::System::Int32 _currentCookLogCount; // 0x24
		static ::HoudiniEngineUnity::HEU_CookLogs** StaticGet__instance()
		{
			return (::HoudiniEngineUnity::HEU_CookLogs**)UnitySDK::FromName("HoudiniEngineUnity", "HEU_CookLogs")->GetStaticField(0x5BA10);
		}

		// static const ::System::Object MAX_COOK_LOG_COUNT; // 0x0
		// static const ::System::Object MaxLogSize; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_COOKLOGS_CTOR_OFFSET))(this);
		}

		static ::HoudiniEngineUnity::HEU_CookLogs* get_Instance()
		{
			return ((::HoudiniEngineUnity::HEU_CookLogs*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_COOKLOGS_GET_INSTANCE_OFFSET))();
		}

		::System::String* GetCookLogString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_COOKLOGS_GETCOOKLOGSTRING_OFFSET))(this);
		}

		::System::Void AppendCookLog(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_COOKLOGS_APPENDCOOKLOG_OFFSET))(this, a1);
		}

		::System::Void ClearCookLog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_COOKLOGS_CLEARCOOKLOG_OFFSET))(this);
		}

		::System::String* GetCookLogFilePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_COOKLOGS_GETCOOKLOGFILEPATH_OFFSET))(this);
		}

		::System::Void DeleteCookingFile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_COOKLOGS_DELETECOOKINGFILE_OFFSET))(this);
		}

		::System::Void WriteToLogFile(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_COOKLOGS_WRITETOLOGFILE_OFFSET))(this, a1, a2);
		}

		::System::Int64 GetFileSizeOfLogFile()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_COOKLOGS_GETFILESIZEOFLOGFILE_OFFSET))(this);
		}

	};
}
