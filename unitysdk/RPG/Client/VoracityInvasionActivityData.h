#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_VORACITYINVASIONACTIVITYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC800D0)
#define RPG_CLIENT_VORACITYINVASIONACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x1BC800E0)
#define RPG_CLIENT_VORACITYINVASIONACTIVITYDATA__ISSHOWPERSONALREWARD_OFFSET UNITYSDK_OFFSET(0x1BC80140)
#define RPG_CLIENT_VORACITYINVASIONACTIVITYDATA__ISSHOWUNSEENCONTENT_OFFSET UNITYSDK_OFFSET(0x1BC802C0)

namespace RPG::Client
{
	inline static constexpr unsigned int VoracityInvasionActivityData_TypeDefinitionIndex = 63080;

	class VoracityInvasionActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONACTIVITYDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsShowPersonalReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONACTIVITYDATA__ISSHOWPERSONALREWARD_OFFSET))(this);
		}

		::System::Boolean _IsShowUnseenContent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONACTIVITYDATA__ISSHOWUNSEENCONTENT_OFFSET))(this);
		}

	};
}
