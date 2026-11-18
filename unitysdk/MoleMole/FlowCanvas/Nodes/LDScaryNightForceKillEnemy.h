#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSCARYNIGHTFORCEKILLENEMY_DOFORCEKILL_OFFSET UNITYSDK_OFFSET(0x1A08CAE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCARYNIGHTFORCEKILLENEMY_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A08CA20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCARYNIGHTFORCEKILLENEMY_TRIGGERDEATHVFX_OFFSET UNITYSDK_OFFSET(0x1A08D740)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCARYNIGHTFORCEKILLENEMY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A08D970)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCARYNIGHTFORCEKILLENEMY__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x1A08D9B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDScaryNightForceKillEnemy_TypeDefinitionIndex = 42476;

	class LDScaryNightForceKillEnemy : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		// static const ::System::String* DeathStartAbility; // 0x0
		::FlowCanvas::FlowOutput* _out; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCARYNIGHTFORCEKILLENEMY__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCARYNIGHTFORCEKILLENEMY_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void DoForceKill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCARYNIGHTFORCEKILLENEMY_DOFORCEKILL_OFFSET))(this);
		}

		::System::Void TriggerDeathVFX(::MoleMole::Battle::Entity* enemyEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCARYNIGHTFORCEKILLENEMY_TRIGGERDEATHVFX_OFFSET))(this, enemyEntity);
		}

		::System::Void _RegisterPorts_b__2_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCARYNIGHTFORCEKILLENEMY__REGISTERPORTS_B__2_0_OFFSET))(this, flow);
		}
	};
}
