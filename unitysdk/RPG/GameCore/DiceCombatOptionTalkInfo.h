#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OptionTalkInfo.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatOptionTalkInfo; }

#define RPG_GAMECORE_DICECOMBATOPTIONTALKINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D60A430)
#define RPG_GAMECORE_DICECOMBATOPTIONTALKINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D60A470)
#define RPG_GAMECORE_DICECOMBATOPTIONTALKINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D60A3D0)

namespace RPG::GameCore
{
	class DiceCombatOptionTalkInfo : public ::RPG::GameCore::OptionTalkInfo
	{
	public:
		::System::Boolean IsShowHardLevel; // 0x68
		::System::Byte _padding0[0x3];
		::System::UInt32 StageID; // 0x6C
		::System::Boolean IsForceShow; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATOPTIONTALKINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatOptionTalkInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatOptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATOPTIONTALKINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatOptionTalkInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatOptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATOPTIONTALKINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
