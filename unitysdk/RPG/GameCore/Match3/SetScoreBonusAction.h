#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class SetScoreBonusAction; }

#define RPG_GAMECORE_MATCH3_SETSCOREBONUSACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D823120)
#define RPG_GAMECORE_MATCH3_SETSCOREBONUSACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D823130)
#define RPG_GAMECORE_MATCH3_SETSCOREBONUSACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8230D0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int SetScoreBonusAction_TypeDefinitionIndex = 24911;

	class SetScoreBonusAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 StyleID; // 0x18
		::System::Boolean Enduring; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETSCOREBONUSACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::SetScoreBonusAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::SetScoreBonusAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETSCOREBONUSACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::SetScoreBonusAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::SetScoreBonusAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETSCOREBONUSACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
