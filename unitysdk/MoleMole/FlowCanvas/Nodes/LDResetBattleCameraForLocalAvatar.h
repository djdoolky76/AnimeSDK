#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDRESETBATTLECAMERAFORLOCALAVATAR_BACKCAMERA_OFFSET UNITYSDK_OFFSET(0x139DDFF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRESETBATTLECAMERAFORLOCALAVATAR_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x139DDF30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRESETBATTLECAMERAFORLOCALAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x139DE090)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDResetBattleCameraForLocalAvatar_TypeDefinitionIndex = 84437;

	class LDResetBattleCameraForLocalAvatar : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _output; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRESETBATTLECAMERAFORLOCALAVATAR__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRESETBATTLECAMERAFORLOCALAVATAR_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void BackCamera(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRESETBATTLECAMERAFORLOCALAVATAR_BACKCAMERA_OFFSET))(this, f);
		}
	};
}
