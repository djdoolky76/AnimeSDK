#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_LOGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CACE590)
#define HOUDINIENGINEUNITY_HEU_LOGGER_LOGASSERTIONFORMAT_OFFSET UNITYSDK_OFFSET(0x1CACE4D0)
#define HOUDINIENGINEUNITY_HEU_LOGGER_LOGASSERTION_OFFSET UNITYSDK_OFFSET(0x1CACE420)
#define HOUDINIENGINEUNITY_HEU_LOGGER_LOGERRORFORMAT_OFFSET UNITYSDK_OFFSET(0x1CA91290)
#define HOUDINIENGINEUNITY_HEU_LOGGER_LOGERROR_1_OFFSET UNITYSDK_OFFSET(0x1CACE1E0)
#define HOUDINIENGINEUNITY_HEU_LOGGER_LOGERROR_OFFSET UNITYSDK_OFFSET(0x1CA96680)
#define HOUDINIENGINEUNITY_HEU_LOGGER_LOGFORMAT_OFFSET UNITYSDK_OFFSET(0x1CA90EA0)
#define HOUDINIENGINEUNITY_HEU_LOGGER_LOGTOCOOKLOGSIFONFORMAT_OFFSET UNITYSDK_OFFSET(0x1CACE120)
#define HOUDINIENGINEUNITY_HEU_LOGGER_LOGTOCOOKLOGSIFON_OFFSET UNITYSDK_OFFSET(0x1CACE070)
#define HOUDINIENGINEUNITY_HEU_LOGGER_LOGWARNINGFORMAT_OFFSET UNITYSDK_OFFSET(0x1CA92DF0)
#define HOUDINIENGINEUNITY_HEU_LOGGER_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1CA9D410)
#define HOUDINIENGINEUNITY_HEU_LOGGER_LOG_OFFSET UNITYSDK_OFFSET(0x1CACDFF0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_Logger_TypeDefinitionIndex = 41630;

	class HEU_Logger : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_LOGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void Log(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_LOGGER_LOG_OFFSET))(a1);
		}

		static ::System::Void LogFormat(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_LOGGER_LOGFORMAT_OFFSET))(a1, a2);
		}

		static ::System::Void LogWarning(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_LOGGER_LOGWARNING_OFFSET))(a1);
		}

		static ::System::Void LogWarningFormat(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_LOGGER_LOGWARNINGFORMAT_OFFSET))(a1, a2);
		}

		static ::System::Void LogError(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_LOGGER_LOGERROR_OFFSET))(a1);
		}

		static ::System::Void LogErrorFormat(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_LOGGER_LOGERRORFORMAT_OFFSET))(a1, a2);
		}

		static ::System::Void LogError_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::System::Exception*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_LOGGER_LOGERROR_1_OFFSET))(a1);
		}

		static ::System::Void LogAssertion(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_LOGGER_LOGASSERTION_OFFSET))(a1);
		}

		static ::System::Void LogAssertionFormat(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_LOGGER_LOGASSERTIONFORMAT_OFFSET))(a1, a2);
		}

		static ::System::Void LogToCookLogsIfOn(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_LOGGER_LOGTOCOOKLOGSIFON_OFFSET))(a1);
		}

		static ::System::Void LogToCookLogsIfOnFormat(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_LOGGER_LOGTOCOOKLOGSIFONFORMAT_OFFSET))(a1, a2);
		}

	};
}
