#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPOFOGGGMEH;
namespace RPG::GameCore { class ActivityDiceCombatAIGroupRow; }
namespace RPG::GameCore { class ActivityDiceCombatSpecialRuleRow; }
namespace RPG::GameCore { class DiceCombatSkillConfig; }
namespace RPG::GameCore { class DiceCombatWeatherSkillConfig; }

#define KFPLECNMLNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C70F3F0)

inline static constexpr unsigned int KFPLECNMLNF_TypeDefinitionIndex = 36400;

	class KFPLECNMLNF : public ::System::Object
	{
	public:
		::RPG::GameCore::DiceCombatSkillConfig* PMKGFOMHPOD; // 0x10
		::RPG::GameCore::ActivityDiceCombatSpecialRuleRow* DFCJJBJGCAL; // 0x18
		::RPG::GameCore::DiceCombatWeatherSkillConfig* DOJDGDAJHBF; // 0x20
		::RPG::GameCore::ActivityDiceCombatAIGroupRow* DBNHCIFEHGD; // 0x28
		::EPOFOGGGMEH* APOJICIKJPF; // 0x30
		::System::Int32 NBNGFFPLGAF; // 0x38
		::System::Boolean IDFGNIJBMPB; // 0x3C
		::System::Byte _padding0[0x3];
		::System::Int32 JFICKDBIECD; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFPLECNMLNF_CTOR_OFFSET))(this);
		}

	};
