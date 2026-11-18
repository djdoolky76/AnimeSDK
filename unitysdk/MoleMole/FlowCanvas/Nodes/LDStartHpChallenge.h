#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTHPCHALLENGE_INVOKE_OFFSET UNITYSDK_OFFSET(0x143079C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTHPCHALLENGE__CTOR_OFFSET UNITYSDK_OFFSET(0x14307CA0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDStartHpChallenge_TypeDefinitionIndex = 45267;

	class LDStartHpChallenge
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTHPCHALLENGE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 ChallengeID, ::MoleMole::Battle::Entity* entity, ::System::Boolean IsRoundDown)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTHPCHALLENGE_INVOKE_OFFSET))(this, ChallengeID, entity, IsRoundDown);
		}
	};
}
