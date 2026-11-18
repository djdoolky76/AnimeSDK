#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECFDPGNHMMG.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETAVATARVOICETYPE_BEGIN_OFFSET UNITYSDK_OFFSET(0x10D15C60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETAVATARVOICETYPE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10D15BA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETAVATARVOICETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D15F00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETAVATARVOICETYPE__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x10D15F40)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetAvatarVoiceType_TypeDefinitionIndex = 88172;

	class LDSetAvatarVoiceType : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* output; // 0xA8
		::FlowCanvas::FlowInput* input; // 0xB0
		::ECFDPGNHMMG AvatarVoiceType; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETAVATARVOICETYPE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETAVATARVOICETYPE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETAVATARVOICETYPE_BEGIN_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETAVATARVOICETYPE__REGISTERPORTS_B__3_0_OFFSET))(this, f);
		}
	};
}
