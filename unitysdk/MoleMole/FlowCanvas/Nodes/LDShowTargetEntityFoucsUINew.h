#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/FocusUISpecialIconParam.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Editor { template <typename T> class FCValueDropList_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTARGETENTITYFOUCSUINEW_ONENTITYREADY_OFFSET UNITYSDK_OFFSET(0x130D2590)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTARGETENTITYFOUCSUINEW_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x130D1F30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTARGETENTITYFOUCSUINEW_SENDENTITYSHOWTARGETUI_OFFSET UNITYSDK_OFFSET(0x130D2320)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTARGETENTITYFOUCSUINEW_START_INVOKE_OFFSET UNITYSDK_OFFSET(0x130D20C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTARGETENTITYFOUCSUINEW__CTOR_OFFSET UNITYSDK_OFFSET(0x130D2630)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTARGETENTITYFOUCSUINEW__INITKEY_OFFSET UNITYSDK_OFFSET(0x130D2080)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTARGETENTITYFOUCSUINEW__REGISTERPORTS_B__7_0_OFFSET UNITYSDK_OFFSET(0x130D26B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowTargetEntityFoucsUINew_TypeDefinitionIndex = 79201;

	class LDShowTargetEntityFoucsUINew : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::Editor::FCValueDropList_1<::System::String*>* focusIconKey; // 0xA8
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam>* specialIconParam; // 0xB0
		::FlowCanvas::FlowOutput* output; // 0xB8
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* entityInput; // 0xC0
		::System::String* hpBarPointName; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Boolean>* enabled3dOcclusion; // 0xD0
		::FlowCanvas::ValueInput_1<::System::Boolean>* hpBarInput; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTARGETENTITYFOUCSUINEW__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTARGETENTITYFOUCSUINEW_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _InitKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTARGETENTITYFOUCSUINEW__INITKEY_OFFSET))(this);
		}

		::System::Void Start_Invoke(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTARGETENTITYFOUCSUINEW_START_INVOKE_OFFSET))(this, f);
		}

		::System::Void OnEntityReady(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTARGETENTITYFOUCSUINEW_ONENTITYREADY_OFFSET))(this, entity);
		}

		::System::Void SendEntityShowTargetUI(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTARGETENTITYFOUCSUINEW_SENDENTITYSHOWTARGETUI_OFFSET))(this, entity);
		}

		::System::Void _RegisterPorts_b__7_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTARGETENTITYFOUCSUINEW__REGISTERPORTS_B__7_0_OFFSET))(this, f);
		}
	};
}
