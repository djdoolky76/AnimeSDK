#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

class AGEDCJMPBHC;
class DEJICIEAOFB;
class MEDNBFHMDEA;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class Action; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA_CHOOSEACTION_OFFSET UNITYSDK_OFFSET(0x1430B740)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1430BAF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1430BB40)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA_ONSELECTEDCALL_OFFSET UNITYSDK_OFFSET(0x1430BA70)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA_REFRESHACTION_OFFSET UNITYSDK_OFFSET(0x1430B6F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1430AAA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA__CHOOSEACTION_B__13_0_OFFSET UNITYSDK_OFFSET(0x1430BE90)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA__CHOOSEACTION_G___DELAYWAIT_13_1_OFFSET UNITYSDK_OFFSET(0x1430C1B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA__CTOR_OFFSET UNITYSDK_OFFSET(0x1430BB90)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA__ONRECV_OFFSET UNITYSDK_OFFSET(0x1430AF60)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA__REFRESHCARD_OFFSET UNITYSDK_OFFSET(0x1430AC00)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA__REGISTERPORTS_B__6_0_OFFSET UNITYSDK_OFFSET(0x1430BBD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA__REGISTERPORTS_B__6_1_OFFSET UNITYSDK_OFFSET(0x1430BBE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1430C200)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1430C210)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA___REFRESHCARD_B__8_0_OFFSET UNITYSDK_OFFSET(0x1430BCE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA___REFRESHCARD_B__8_1_OFFSET UNITYSDK_OFFSET(0x1430BE10)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetTarotCardGacha_TypeDefinitionIndex = 50099;

	class LD_GetTarotCardGacha : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _onPop; // 0xA8
		::UnityEngine::Coroutine* _afterChooseCoroutine; // 0xB0
		::FlowCanvas::FlowOutput* _output; // 0xB8
		::MEDNBFHMDEA* _ldGetTarot; // 0xC0
		::FlowCanvas::FlowOutput* _onSelected; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Int32>* _indexInput; // 0xD0
		::System::Int32 _SelectItemID; // 0xD8
		::System::Boolean isValid; // 0xDC
		::System::Boolean isInRefresh; // 0xDD

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RefreshCard(::System::Boolean isRefresh)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA__REFRESHCARD_OFFSET))(this, isRefresh);
		}

		::System::Void _OnRecv(::System::Collections::Generic::IList_1<::AGEDCJMPBHC*>* cardCachaDataList, ::System::Int32 refreshCount, ::System::Boolean isRefreshNew)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::AGEDCJMPBHC*>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA__ONRECV_OFFSET))(this, cardCachaDataList, refreshCount, isRefreshNew);
		}

		::System::Void RefreshAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA_REFRESHACTION_OFFSET))(this);
		}

		::System::Void ChooseAction(::System::Int32 value, ::System::Int32 itemId, ::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA_CHOOSEACTION_OFFSET))(this, value, itemId, action);
		}

		::System::Void OnSelectedCall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA_ONSELECTEDCALL_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__6_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA__REGISTERPORTS_B__6_0_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__6_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA__REGISTERPORTS_B__6_1_OFFSET))(this, f);
		}

		::System::Void __RefreshCard_b__8_0(::System::Boolean b, ::DEJICIEAOFB* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::DEJICIEAOFB*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA___REFRESHCARD_B__8_0_OFFSET))(this, b, rsp);
		}

		::System::Void __RefreshCard_b__8_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA___REFRESHCARD_B__8_1_OFFSET))(this);
		}

		::System::Void _ChooseAction_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA__CHOOSEACTION_B__13_0_OFFSET))(this);
		}

		::System::Collections::IEnumerator* _ChooseAction_g___DelayWait_13_1()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA__CHOOSEACTION_G___DELAYWAIT_13_1_OFFSET))(this);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
