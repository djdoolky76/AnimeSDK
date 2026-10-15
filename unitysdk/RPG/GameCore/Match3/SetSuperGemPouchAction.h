#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class SetSuperGemPouchAction; }

#define RPG_GAMECORE_MATCH3_SETSUPERGEMPOUCHACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D850E40)
#define RPG_GAMECORE_MATCH3_SETSUPERGEMPOUCHACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D850E50)
#define RPG_GAMECORE_MATCH3_SETSUPERGEMPOUCHACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D850DF0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int SetSuperGemPouchAction_TypeDefinitionIndex = 24921;

	class SetSuperGemPouchAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 Count; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETSUPERGEMPOUCHACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::SetSuperGemPouchAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::SetSuperGemPouchAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETSUPERGEMPOUCHACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::SetSuperGemPouchAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::SetSuperGemPouchAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETSUPERGEMPOUCHACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
