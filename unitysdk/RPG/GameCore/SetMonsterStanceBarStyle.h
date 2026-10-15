#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonsterStanceBarStyle.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetMonsterStanceBarStyle; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETMONSTERSTANCEBARSTYLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA8EFA0)
#define RPG_GAMECORE_SETMONSTERSTANCEBARSTYLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA8EFB0)
#define RPG_GAMECORE_SETMONSTERSTANCEBARSTYLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA8EF70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMonsterStanceBarStyle_TypeDefinitionIndex = 22940;

	class SetMonsterStanceBarStyle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::MonsterStanceBarStyle Style; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERSTANCEBARSTYLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMonsterStanceBarStyle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMonsterStanceBarStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERSTANCEBARSTYLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMonsterStanceBarStyle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMonsterStanceBarStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERSTANCEBARSTYLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
