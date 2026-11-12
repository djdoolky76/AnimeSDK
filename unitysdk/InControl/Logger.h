#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/LogMessage.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define INCONTROL_LOGGER_ADD_ONLOGMESSAGE_OFFSET UNITYSDK_OFFSET(0x1CB76040)
#define INCONTROL_LOGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB89990)
#define INCONTROL_LOGGER_LOGERROR_OFFSET UNITYSDK_OFFSET(0x1CB853C0)
#define INCONTROL_LOGGER_LOGINFO_OFFSET UNITYSDK_OFFSET(0x1CB760D0)
#define INCONTROL_LOGGER_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1CB81740)
#define INCONTROL_LOGGER_REMOVE_ONLOGMESSAGE_OFFSET UNITYSDK_OFFSET(0x1CB75FB0)

namespace InControl
{
	inline static constexpr unsigned int Logger_TypeDefinitionIndex = 41809;

	class Logger : public ::System::Object
	{
	public:
		static ::System::Action_1<::InControl::LogMessage>** StaticGet_OnLogMessage()
		{
			return (::System::Action_1<::InControl::LogMessage>**)UnitySDK::FromName("InControl", "Logger")->GetStaticField(0x696F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_LOGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void add_OnLogMessage(::System::Action_1<::InControl::LogMessage>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::InControl::LogMessage>*))((::PBYTE)hIl2Cpp + INCONTROL_LOGGER_ADD_ONLOGMESSAGE_OFFSET))(a1);
		}

		static ::System::Void remove_OnLogMessage(::System::Action_1<::InControl::LogMessage>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::InControl::LogMessage>*))((::PBYTE)hIl2Cpp + INCONTROL_LOGGER_REMOVE_ONLOGMESSAGE_OFFSET))(a1);
		}

		static ::System::Void LogInfo(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_LOGGER_LOGINFO_OFFSET))(a1);
		}

		static ::System::Void LogWarning(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_LOGGER_LOGWARNING_OFFSET))(a1);
		}

		static ::System::Void LogError(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_LOGGER_LOGERROR_OFFSET))(a1);
		}

	};
}
