#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
#include "unitysdk/RPG/GameCore/ST_ParamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PointQueryConfig; }
namespace RPG::GameCore { class ST_Main_DoSkill; }
namespace System { class String; }

#define RPG_GAMECORE_ST_MAIN_DOSKILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA4DDA0)
#define RPG_GAMECORE_ST_MAIN_DOSKILL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA4DDB0)
#define RPG_GAMECORE_ST_MAIN_DOSKILL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA4DD70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_DoSkill_TypeDefinitionIndex = 20096;

	class ST_Main_DoSkill : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* Name; // 0x18
		::RPG::GameCore::ST_ParamType CDType; // 0x20
		::System::Single CD; // 0x24
		::System::String* CDVariableName; // 0x28
		::RPG::GameCore::PointQueryConfig* SkillPointPos; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_DOSKILL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_DoSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_DoSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_DOSKILL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_DoSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_DoSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_DOSKILL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
