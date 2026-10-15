#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyGameplayShowMaskBG; }

#define RPG_GAMECORE_TRAINPARTYGAMEPLAYSHOWMASKBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC31350)
#define RPG_GAMECORE_TRAINPARTYGAMEPLAYSHOWMASKBG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC31360)
#define RPG_GAMECORE_TRAINPARTYGAMEPLAYSHOWMASKBG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC31320)

namespace RPG::GameCore
{
	class TrainPartyGameplayShowMaskBG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single TransitionTime; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYGAMEPLAYSHOWMASKBG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyGameplayShowMaskBG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyGameplayShowMaskBG*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYGAMEPLAYSHOWMASKBG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyGameplayShowMaskBG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyGameplayShowMaskBG*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYGAMEPLAYSHOWMASKBG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
