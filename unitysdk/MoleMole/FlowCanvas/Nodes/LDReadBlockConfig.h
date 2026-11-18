#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class GEDILNJLFHM;

#define MOLEMOLE_FLOWCANVAS_NODES_LDREADBLOCKCONFIG_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x162383A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREADBLOCKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x162386E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDReadBlockConfig_TypeDefinitionIndex = 75944;

	class LDReadBlockConfig : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::GEDILNJLFHM* template_; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADBLOCKCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADBLOCKCONFIG_REGISTERPORTS_OFFSET))(this);
		}
	};
}
