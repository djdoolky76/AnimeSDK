#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/ActionRole.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class ShowCharacterCutInGroupAction; }

#define RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINGROUPACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D823770)
#define RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINGROUPACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D823780)
#define RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINGROUPACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D823720)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int ShowCharacterCutInGroupAction_TypeDefinitionIndex = 24915;

	class ShowCharacterCutInGroupAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::Il2CppArray<::System::UInt32>* CutInIDList; // 0x18
		::System::UInt32 CountLimit; // 0x20
		::RPG::GameCore::Match3::ActionRole Role; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINGROUPACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::ShowCharacterCutInGroupAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::ShowCharacterCutInGroupAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINGROUPACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::ShowCharacterCutInGroupAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::ShowCharacterCutInGroupAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINGROUPACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
