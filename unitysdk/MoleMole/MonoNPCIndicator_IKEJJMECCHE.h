#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PopulationPoolRef.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class NPCPoolConfig; }

#define MOLEMOLE_MONONPCINDICATOR_IKEJJMECCHE_OEEPJHNOBHJ_OFFSET UNITYSDK_OFFSET(0x12B72A70)
#define MOLEMOLE_MONONPCINDICATOR_IKEJJMECCHE__CTOR_OFFSET UNITYSDK_OFFSET(0x12B72A60)

namespace MoleMole
{
	inline static constexpr unsigned int MonoNPCIndicator_IKEJJMECCHE_TypeDefinitionIndex = 68091;

	class MonoNPCIndicator_IKEJJMECCHE : public ::System::Object
	{
	public:
		::NPCCrowd::AI::PopulationPoolRef IBANBOHFBEG; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_IKEJJMECCHE__CTOR_OFFSET))(this);
		}

		::System::Boolean OEEPJHNOBHJ(::NPCCrowd::AI::NPCPoolConfig* JNDDJMAHNAI)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::NPCPoolConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_IKEJJMECCHE_OEEPJHNOBHJ_OFFSET))(this, JNDDJMAHNAI);
		}
	};
}
