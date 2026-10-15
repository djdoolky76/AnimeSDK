#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueCompareType.h"
namespace RPG::Client { class ST_Parkour_ByCompareDistanceToPlayer; }
namespace RPG::GameCore { class TaskContext; }

#define AIIDMNCDJGD_CJDNCBHLOGD_1_OFFSET UNITYSDK_OFFSET(0xEBA1F70)
#define AIIDMNCDJGD_CJDNCBHLOGD_OFFSET UNITYSDK_OFFSET(0xEBA1E60)
#define AIIDMNCDJGD_CTOR_OFFSET UNITYSDK_OFFSET(0xEBA1C30)
#define AIIDMNCDJGD_EVALUATE_OFFSET UNITYSDK_OFFSET(0xEBA1C60)

inline static constexpr unsigned int AIIDMNCDJGD_TypeDefinitionIndex = 52129;

	class AIIDMNCDJGD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer*))((::PBYTE)hIl2Cpp + AIIDMNCDJGD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIDMNCDJGD_EVALUATE_OFFSET))(this);
		}

		static ::System::Boolean CJDNCBHLOGD(::RPG::GameCore::ComplexSkillAIValueCompareType a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ComplexSkillAIValueCompareType, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AIIDMNCDJGD_CJDNCBHLOGD_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean CJDNCBHLOGD_1(::RPG::GameCore::ComplexSkillAIValueCompareType a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ComplexSkillAIValueCompareType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AIIDMNCDJGD_CJDNCBHLOGD_1_OFFSET))(a1, a2, a3);
		}

	};
