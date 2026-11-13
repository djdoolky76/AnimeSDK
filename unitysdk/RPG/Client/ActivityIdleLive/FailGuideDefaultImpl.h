#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"

#define RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDEFAULTIMPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D137470)
#define RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDEFAULTIMPL_GETFAILHINTTEXT_OFFSET UNITYSDK_OFFSET(0x1D137300)
#define RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDEFAULTIMPL_HASTRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x1D1373F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDEFAULTIMPL_ONTRIGGER_OFFSET UNITYSDK_OFFSET(0x1D137430)
#define RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDEFAULTIMPL_SHOULDTRIGGER_OFFSET UNITYSDK_OFFSET(0x1D1373B0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int FailGuideDefaultImpl_TypeDefinitionIndex = 77708;

	class FailGuideDefaultImpl : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDEFAULTIMPL_CTOR_OFFSET))(this);
		}

		::RPG::Client::TextID GetFailHintText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDEFAULTIMPL_GETFAILHINTTEXT_OFFSET))(this);
		}

		::System::Boolean ShouldTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDEFAULTIMPL_SHOULDTRIGGER_OFFSET))(this);
		}

		::System::Boolean HasTriggerAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDEFAULTIMPL_HASTRIGGERACTION_OFFSET))(this);
		}

		::System::Void OnTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDEFAULTIMPL_ONTRIGGER_OFFSET))(this);
		}

	};
}
