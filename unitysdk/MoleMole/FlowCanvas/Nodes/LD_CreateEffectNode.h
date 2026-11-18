#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEEFFECTNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x13EDC7F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEEFFECTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x13EDCB00)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEEFFECTNODE__REGISTERPORTS_B__18_0_OFFSET UNITYSDK_OFFSET(0x13EDCB90)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEEFFECTNODE__REGISTERPORTS_B__18_1_OFFSET UNITYSDK_OFFSET(0x13EDCBA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEEFFECTNODE__REGISTERPORTS_B__18_2_OFFSET UNITYSDK_OFFSET(0x13EDE530)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEEFFECTNODE__REGISTERPORTS_B__18_3_OFFSET UNITYSDK_OFFSET(0x13EDE540)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEEFFECTNODE__REGISTERPORTS_B__18_4_OFFSET UNITYSDK_OFFSET(0x13EDE550)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEEFFECTNODE__REGISTERPORTS_G____CALLFLOWOUT_18_5_OFFSET UNITYSDK_OFFSET(0x13EDE4E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_CreateEffectNode_TypeDefinitionIndex = 90394;

	class LD_CreateEffectNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Single>* angleRangeInput; // 0xA8
		::FlowCanvas::ValueInput_1<::System::String*>* effectName; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Boolean>* isAwayFromTrap; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Single>* minimumInput; // 0xC0
		::FlowCanvas::ValueInput_1<::System::String*>* extractPos; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Single>* radiusInput; // 0xD0
		::System::String* _curExtractPosStr; // 0xD8
		::FlowCanvas::ValueInput_1<::System::String*>* anchorPosPrefixInput; // 0xE0
		::FlowCanvas::ValueInput_1<::System::Boolean>* additivePriorityFirst; // 0xE8
		::System::Collections::Generic::HashSet_1<::System::Int32>* alreadySearchedSet; // 0xF0
		::System::String* _spawnPointName; // 0xF8
		::MoleMole::Battle::Entity* _createdEffectEntity; // 0x100
		::FlowCanvas::FlowOutput* _flowOutput; // 0x108
		::FlowCanvas::ValueInput_1<::System::Boolean>* IsSpawnOnAnchor; // 0x110
		::System::Boolean IsInteractive; // 0x118
		::System::Boolean lastChooseLeft; // 0x119
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 _curExtractPosV3; // 0x11C
		::System::Single AnchorPlaneTolerance; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEEFFECTNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEEFFECTNODE_REGISTERPORTS_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__18_0()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEEFFECTNODE__REGISTERPORTS_B__18_0_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__18_1(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEEFFECTNODE__REGISTERPORTS_B__18_1_OFFSET))(this, flow);
		}

		::System::Collections::IEnumerator* _RegisterPorts_g____CallFlowOut_18_5()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEEFFECTNODE__REGISTERPORTS_G____CALLFLOWOUT_18_5_OFFSET))(this);
		}

		::System::String* _RegisterPorts_b__18_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEEFFECTNODE__REGISTERPORTS_B__18_2_OFFSET))(this);
		}

		::System::String* _RegisterPorts_b__18_3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEEFFECTNODE__REGISTERPORTS_B__18_3_OFFSET))(this);
		}

		::UnityEngine::Vector3 _RegisterPorts_b__18_4()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEEFFECTNODE__REGISTERPORTS_B__18_4_OFFSET))(this);
		}
	};
}
