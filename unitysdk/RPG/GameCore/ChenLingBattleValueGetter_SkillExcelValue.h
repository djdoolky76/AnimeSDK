#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleValueGetter.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleValueGetter_SkillExcelValue; }

#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SKILLEXCELVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D55C4D0)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SKILLEXCELVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D55C4E0)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SKILLEXCELVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D55C3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleValueGetter_SkillExcelValue_TypeDefinitionIndex = 15801;

	class ChenLingBattleValueGetter_SkillExcelValue : public ::RPG::GameCore::BaseChenLingBattleValueGetter
	{
	public:
		::System::Int32 ValueIndex; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SKILLEXCELVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleValueGetter_SkillExcelValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleValueGetter_SkillExcelValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SKILLEXCELVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleValueGetter_SkillExcelValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleValueGetter_SkillExcelValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SKILLEXCELVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
