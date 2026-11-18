#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NPCCrowd/Lod/ConditionData.h"

namespace MoleMole::Battle { class Entity; }
namespace NPCCrowd::Lod { class INPCCrowdDistanceCheckInterface; }

#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER___C__DISPLAYCLASS24_3__CTOR_OFFSET UNITYSDK_OFFSET(0x11F97F40)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER___C__DISPLAYCLASS24_3__HANDLEEVENTCONFIGSTIMULUSENABLE_B__1_OFFSET UNITYSDK_OFFSET(0x11F97F50)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int NPCCrowdReactionManager___c__DisplayClass24_3_TypeDefinitionIndex = 74405;

	template <typename T1, typename T2, typename T3>
	class NPCCrowdReactionManager___c__DisplayClass24_3 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals2; // 0x10
		::MoleMole::Battle::Entity* owner; // 0x18
		::System::UInt32 ownerId; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER___C__DISPLAYCLASS24_3__CTOR_OFFSET))(this);
		}

		::System::Void _HandleEventConfigStimulusEnable_b__1(::NPCCrowd::Lod::ConditionData data, ::System::Boolean greater, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* p1, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* p2)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::ConditionData, ::System::Boolean, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER___C__DISPLAYCLASS24_3__HANDLEEVENTCONFIGSTIMULUSENABLE_B__1_OFFSET))(this, data, greater, p1, p2);
		}
	};
}
