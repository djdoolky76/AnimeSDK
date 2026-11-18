#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAMERESETLOCALAVATARCONFIG_PROCESS_OFFSET UNITYSDK_OFFSET(0x1B4B62D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAMERESETLOCALAVATARCONFIG_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B4B6210)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAMERESETLOCALAVATARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B6720)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShootGameResetLocalAvatarConfig_TypeDefinitionIndex = 71634;

	class LDShootGameResetLocalAvatarConfig : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* output; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAMERESETLOCALAVATARCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAMERESETLOCALAVATARCONFIG_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Process(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAMERESETLOCALAVATARCONFIG_PROCESS_OFFSET))(this, f);
		}
	};
}
