#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleValueGetter.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleValueGetter_Pure; }

#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_PURE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D55C300)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_PURE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D55C310)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_PURE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D55C1F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleValueGetter_Pure_TypeDefinitionIndex = 15800;

	class ChenLingBattleValueGetter_Pure : public ::RPG::GameCore::BaseChenLingBattleValueGetter
	{
	public:
		::RPG::GameCore::FixPoint Value; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_PURE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleValueGetter_Pure* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleValueGetter_Pure*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_PURE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleValueGetter_Pure* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleValueGetter_Pure*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_PURE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
