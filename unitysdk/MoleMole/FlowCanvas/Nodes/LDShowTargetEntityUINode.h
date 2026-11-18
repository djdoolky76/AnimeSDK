#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CampType.h"

class BJJNEGIJGNN;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::FlowCanvas::Nodes { class LDShowTargetEntityUINode_GuideEntityTargetCameraViewChecker; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTARGETENTITYUINODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A8EF3E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTARGETENTITYUINODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8EF740)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTARGETENTITYUINODE__INVOKE_B__2_0_OFFSET UNITYSDK_OFFSET(0x1A8EF790)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowTargetEntityUINode_TypeDefinitionIndex = 52512;

	class LDShowTargetEntityUINode
	{
	public:
		::BJJNEGIJGNN* param; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTARGETENTITYUINODE__CTOR_OFFSET))(this);
		}

		::System::UInt32 Invoke(::MoleMole::Config::CampType camp, ::MoleMole::Battle::Entity* entity, ::System::String* style, ::System::Boolean isHideInCamera)
		{
			return ((::System::UInt32(*)(::PVOID, ::MoleMole::Config::CampType, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTARGETENTITYUINODE_INVOKE_OFFSET))(this, camp, entity, style, isHideInCamera);
		}

		::System::Void _Invoke_b__2_0(::MoleMole::FlowCanvas::Nodes::LDShowTargetEntityUINode_GuideEntityTargetCameraViewChecker* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::LDShowTargetEntityUINode_GuideEntityTargetCameraViewChecker*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTARGETENTITYUINODE__INVOKE_B__2_0_OFFSET))(this, item);
		}
	};
}
