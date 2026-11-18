#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_SHOWTEAMAVATAR_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x139E0F80)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_SHOWTEAMAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x139E1090)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_SHOWTEAMAVATAR__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x139E10D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_ShowTeamAvatar_TypeDefinitionIndex = 44355;

	class LD_AbyssS2_ShowTeamAvatar : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _out; // 0xA8
		::FlowCanvas::ValueInput_1<::Il2CppArray<::System::String*>*>* _spawnPoints; // 0xB0
		::FlowCanvas::ValueInput_1<::System::String*>* _animatorTrigger; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_SHOWTEAMAVATAR__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_SHOWTEAMAVATAR_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_SHOWTEAMAVATAR__REGISTERPORTS_B__3_0_OFFSET))(this, f);
		}
	};
}
