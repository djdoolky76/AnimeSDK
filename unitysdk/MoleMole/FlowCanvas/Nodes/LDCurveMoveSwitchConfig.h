#pragma once
#include "unitysdk/unitysdk.h"

namespace FlowCanvas { class FlowNode; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class CurveMoveComponentConfig; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVESWITCHCONFIG_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x13568770)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVESWITCHCONFIG_INVOKE_OFFSET UNITYSDK_OFFSET(0x13568780)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVESWITCHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13568A90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCurveMoveSwitchConfig_TypeDefinitionIndex = 45792;

	class LDCurveMoveSwitchConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVESWITCHCONFIG__CTOR_OFFSET))(this);
		}

		::FlowCanvas::FlowNode* get_ParentNode()
		{
			return ((::FlowCanvas::FlowNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVESWITCHCONFIG_GET_PARENTNODE_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::Battle::Entity* entity, ::MoleMole::Config::CurveMoveComponentConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Config::CurveMoveComponentConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVESWITCHCONFIG_INVOKE_OFFSET))(this, entity, config);
		}
	};
}
