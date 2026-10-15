#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetMonsterPhasePointPrefab; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETMONSTERPHASEPOINTPREFAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABC690)
#define RPG_GAMECORE_SETMONSTERPHASEPOINTPREFAB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DABC6A0)
#define RPG_GAMECORE_SETMONSTERPHASEPOINTPREFAB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DABC660)

namespace RPG::GameCore
{
	class SetMonsterPhasePointPrefab : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::System::String*>* PrefabPathList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERPHASEPOINTPREFAB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMonsterPhasePointPrefab* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMonsterPhasePointPrefab*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERPHASEPOINTPREFAB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMonsterPhasePointPrefab* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMonsterPhasePointPrefab*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERPHASEPOINTPREFAB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
