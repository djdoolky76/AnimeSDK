#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleGlobalDataType.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAIBattleGlobalData; }

#define RPG_GAMECORE_COMPLEXSKILLAIBATTLEGLOBALDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CCED0)
#define RPG_GAMECORE_COMPLEXSKILLAIBATTLEGLOBALDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5CCEE0)
#define RPG_GAMECORE_COMPLEXSKILLAIBATTLEGLOBALDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5CCEA0)

namespace RPG::GameCore
{
	class ComplexSkillAIBattleGlobalData : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::RPG::GameCore::BattleGlobalDataType DataType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIBATTLEGLOBALDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIBattleGlobalData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIBattleGlobalData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIBATTLEGLOBALDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIBattleGlobalData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIBattleGlobalData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIBATTLEGLOBALDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
