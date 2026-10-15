#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/ActionRole.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class ShowCharacterCutInAction; }

#define RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D850F80)
#define RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D850F90)
#define RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D850F30)

namespace RPG::GameCore::Match3
{
	class ShowCharacterCutInAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 CutInID; // 0x18
		::RPG::GameCore::Match3::ActionRole Role; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::ShowCharacterCutInAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::ShowCharacterCutInAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::ShowCharacterCutInAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::ShowCharacterCutInAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
