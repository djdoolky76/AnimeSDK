#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleEntitySkillLevelWhiteBoxData; }

#define RPG_GAMECORE_BATTLEENTITYSKILLLEVELWHITEBOXDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D456D20)
#define RPG_GAMECORE_BATTLEENTITYSKILLLEVELWHITEBOXDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D456BC0)

namespace RPG::GameCore
{
	class BattleEntitySkillLevelWhiteBoxData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* SimpleParamList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEENTITYSKILLLEVELWHITEBOXDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleEntitySkillLevelWhiteBoxData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleEntitySkillLevelWhiteBoxData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEENTITYSKILLLEVELWHITEBOXDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
