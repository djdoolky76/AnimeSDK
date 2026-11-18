#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_AVATARV2_SETLOCALBYAVATARINDEX_PROCESS_OFFSET UNITYSDK_OFFSET(0x130D6040)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_AVATARV2_SETLOCALBYAVATARINDEX_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x130D5F30)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_AVATARV2_SETLOCALBYAVATARINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x130D61F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_AVATARV2_SETLOCALBYAVATARINDEX__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x130D6230)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AvatarV2_SetLocalByAvatarIndex_TypeDefinitionIndex = 54016;

	class LD_AvatarV2_SetLocalByAvatarIndex : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Boolean>* isBackground; // 0xA8
		::FlowCanvas::FlowOutput* flowOut; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Int32>* targetAvatarIndex; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_AVATARV2_SETLOCALBYAVATARINDEX__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_AVATARV2_SETLOCALBYAVATARINDEX_REGISTERPORTS_OFFSET))(this);
		}

		static ::System::Void Process(::System::Int32 index, ::System::Boolean isBackground)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_AVATARV2_SETLOCALBYAVATARINDEX_PROCESS_OFFSET))(index, isBackground);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_AVATARV2_SETLOCALBYAVATARINDEX__REGISTERPORTS_B__3_0_OFFSET))(this, f);
		}
	};
}
