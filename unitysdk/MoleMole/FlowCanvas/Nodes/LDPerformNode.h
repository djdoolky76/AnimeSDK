#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/PerformType.h"
#include "unitysdk/FlowCanvas/Flow.h"

class FPKIFHKCBEK;
class LCEGCOJEFFO;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE_OLD_PLAY_OFFSET UNITYSDK_OFFSET(0x1A8EDA90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE_PLAYPERFORM_OFFSET UNITYSDK_OFFSET(0x1A8ECEE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A8EC990)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE_TRYCALLLASTTIMELINEEND_OFFSET UNITYSDK_OFFSET(0x1A8ECE50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8EE560)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE__GETPERFORMIDLIST_OFFSET UNITYSDK_OFFSET(0x1A8ED880)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE__HANDLEINPUTONFINISH_OFFSET UNITYSDK_OFFSET(0x1A8ECDB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE__PLAYPERFORM_B__29_0_OFFSET UNITYSDK_OFFSET(0x1A8EE6C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE__PLAYPERFORM_B__29_1_OFFSET UNITYSDK_OFFSET(0x1A8EE6D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE__PLAYPERFORM_B__29_2_OFFSET UNITYSDK_OFFSET(0x1A8EE6F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE__PLAYPERFORM_B__29_3_OFFSET UNITYSDK_OFFSET(0x1A8EE790)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE__REGISTERPORTS_B__25_0_OFFSET UNITYSDK_OFFSET(0x1A8EE630)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE__REGISTERPORTS_B__25_1_OFFSET UNITYSDK_OFFSET(0x1A8EE6A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE__REGISTERPORTS_B__25_2_OFFSET UNITYSDK_OFFSET(0x1A8EE6B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE__TRYCALLFINISH_OFFSET UNITYSDK_OFFSET(0x1A8ECD00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPerformNode_TypeDefinitionIndex = 85760;

	class LDPerformNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		// static const ::System::String* TAG_LD_PerformPlay; // 0x0
		// static const ::System::Int32 TAG_LD_PerformPlay_Priority = 0x63; // 0x0
		::FlowCanvas::ValueInput_1<::System::Boolean>* storyIK; // 0xA8
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::PerformType>* inputPerform; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Boolean>* forceBlackFadeIn; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Boolean>* EndChatCameraWithoutBlend; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Boolean>* StartChatCameraWithoutBlend; // 0xC8
		::FlowCanvas::FlowOutput* _flowEndChatCameraIn; // 0xD0
		::FlowCanvas::ValueInput_1<::System::Boolean>* IsChatCameraStay; // 0xD8
		::FlowCanvas::FlowOutput* output; // 0xE0
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::System::Int32>*>* inputPerformIdList; // 0xE8
		::FlowCanvas::FlowOutput* _flowEndChatCameraOut; // 0xF0
		::FlowCanvas::ValueInput_1<::System::Int32>* inputPerformId; // 0xF8
		::FlowCanvas::FlowOutput* finish; // 0x100
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* performOutPut; // 0x108
		::System::Collections::Generic::List_1<::LCEGCOJEFFO*>* infos; // 0x110
		::FlowCanvas::ValueOutput_1<::System::Boolean>* hasVideo; // 0x118
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* storyEntity; // 0x120
		::FlowCanvas::ValueInput_1<::System::String*>* storyModule; // 0x128
		::FlowCanvas::FlowOutput* _flowStartChatCameraOut; // 0x130
		::FlowCanvas::FlowOutput* _onLastTimelineEnd; // 0x138
		::FlowCanvas::ValueInput_1<::System::Single>* EndChatCameraDelaySeconds; // 0x140
		::FlowCanvas::ValueInput_1<::System::Boolean>* useChatSequence; // 0x148
		::System::Boolean _hasVideo; // 0x150
		::System::Boolean _isLevelBeginPerform; // 0x151

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _TryCallFinish(::FlowCanvas::Flow f, ::System::Boolean handleInput)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE__TRYCALLFINISH_OFFSET))(this, f, handleInput);
		}

		::System::Void TryCallLastTimelineEnd(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE_TRYCALLLASTTIMELINEEND_OFFSET))(this, f);
		}

		::System::Void _HandleInputOnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE__HANDLEINPUTONFINISH_OFFSET))(this);
		}

		::System::Void PlayPerform(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE_PLAYPERFORM_OFFSET))(this, f);
		}

		::System::Collections::Generic::List_1<::System::Int32>* _GetPerformIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE__GETPERFORMIDLIST_OFFSET))(this);
		}

		::System::Void Old_Play(::System::Collections::Generic::List_1<::System::Int32>* performIDs, ::FlowCanvas::Flow f, ::System::Boolean fromBeginPerformance, ::System::Boolean isEndPerform)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::FlowCanvas::Flow, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE_OLD_PLAY_OFFSET))(this, performIDs, f, fromBeginPerformance, isEndPerform);
		}

		::System::Void _RegisterPorts_b__25_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE__REGISTERPORTS_B__25_0_OFFSET))(this, f);
		}

		::System::Boolean _RegisterPorts_b__25_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE__REGISTERPORTS_B__25_1_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _RegisterPorts_b__25_2()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE__REGISTERPORTS_B__25_2_OFFSET))(this);
		}

		::System::Void _PlayPerform_b__29_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE__PLAYPERFORM_B__29_0_OFFSET))(this);
		}

		::System::Void _PlayPerform_b__29_1(::FPKIFHKCBEK* galSyncData)
		{
			return ((::System::Void(*)(::PVOID, ::FPKIFHKCBEK*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE__PLAYPERFORM_B__29_1_OFFSET))(this, galSyncData);
		}

		::System::Void _PlayPerform_b__29_2(::System::Boolean inValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE__PLAYPERFORM_B__29_2_OFFSET))(this, inValue);
		}

		::System::Void _PlayPerform_b__29_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE__PLAYPERFORM_B__29_3_OFFSET))(this);
		}
	};
}
