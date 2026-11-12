#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"

#define RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDECATCHUPIMPL_CTOR_OFFSET UNITYSDK_OFFSET(0xCD95980)
#define RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDECATCHUPIMPL_GETFAILHINTTEXT_OFFSET UNITYSDK_OFFSET(0xCD95990)
#define RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDECATCHUPIMPL_HASTRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xCD95A90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDECATCHUPIMPL_ONTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD95AD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDECATCHUPIMPL_SHOULDTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD95A40)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int FailGuideCatchUpImpl_TypeDefinitionIndex = 77708;

	class FailGuideCatchUpImpl : public ::System::Object
	{
	public:
		::System::UInt64 _TotalGotCrystalNum; // 0x10
		::System::UInt64 _RecommendGotCrystalNum; // 0x18
		::System::Void _ctor(::System::UInt64 a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDECATCHUPIMPL_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID GetFailHintText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDECATCHUPIMPL_GETFAILHINTTEXT_OFFSET))(this);
		}

		::System::Boolean ShouldTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDECATCHUPIMPL_SHOULDTRIGGER_OFFSET))(this);
		}

		::System::Boolean HasTriggerAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDECATCHUPIMPL_HASTRIGGERACTION_OFFSET))(this);
		}

		::System::Void OnTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDECATCHUPIMPL_ONTRIGGER_OFFSET))(this);
		}

	};
}
