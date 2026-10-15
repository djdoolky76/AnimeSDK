#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class IBeginDragHandler; }
namespace UnityEngine::EventSystems { class ICancelHandler; }
namespace UnityEngine::EventSystems { class IDeselectHandler; }
namespace UnityEngine::EventSystems { class IDragHandler; }
namespace UnityEngine::EventSystems { class IDropHandler; }
namespace UnityEngine::EventSystems { class IEndDragHandler; }
namespace UnityEngine::EventSystems { class IEventSystemHandler; }
namespace UnityEngine::EventSystems { class IExecuteEventBlocker; }
namespace UnityEngine::EventSystems { class IIgnoreHandler; }
namespace UnityEngine::EventSystems { class IInitializePotentialDragHandler; }
namespace UnityEngine::EventSystems { class IMoveHandler; }
namespace UnityEngine::EventSystems { class IPointerClickHandler; }
namespace UnityEngine::EventSystems { class IPointerDownHandler; }
namespace UnityEngine::EventSystems { class IPointerEnterHandler; }
namespace UnityEngine::EventSystems { class IPointerExitHandler; }
namespace UnityEngine::EventSystems { class IPointerUpHandler; }
namespace UnityEngine::EventSystems { class IScrollHandler; }
namespace UnityEngine::EventSystems { class ISelectHandler; }
namespace UnityEngine::EventSystems { class ISubmitHandler; }
namespace UnityEngine::EventSystems { class IUpdateSelectedHandler; }
namespace UnityEngine::UI { template <typename T> class ObjectPool_1; }

#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4D4190)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTEEXIT_OFFSET UNITYSDK_OFFSET(0x1F4D4140)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_10_OFFSET UNITYSDK_OFFSET(0x1F4D31F0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_11_OFFSET UNITYSDK_OFFSET(0x1F4D3350)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_12_OFFSET UNITYSDK_OFFSET(0x1F4D3470)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_13_OFFSET UNITYSDK_OFFSET(0x1F4D3570)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_14_OFFSET UNITYSDK_OFFSET(0x1F4D3670)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_15_OFFSET UNITYSDK_OFFSET(0x1F4D37D0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_16_OFFSET UNITYSDK_OFFSET(0x1F4D38F0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_17_OFFSET UNITYSDK_OFFSET(0x1F4D3D40)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0x1F4D2650)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_2_OFFSET UNITYSDK_OFFSET(0x1F4D2770)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_3_OFFSET UNITYSDK_OFFSET(0x1F4D2890)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_4_OFFSET UNITYSDK_OFFSET(0x1F4D29B0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_5_OFFSET UNITYSDK_OFFSET(0x1F4D2B10)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_6_OFFSET UNITYSDK_OFFSET(0x1F4D2C70)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_7_OFFSET UNITYSDK_OFFSET(0x1F4D2DD0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_8_OFFSET UNITYSDK_OFFSET(0x1F4D2F30)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_9_OFFSET UNITYSDK_OFFSET(0x1F4D3090)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1F4D2530)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GETEVENTCHAIN_OFFSET UNITYSDK_OFFSET(0x1F4D3E90)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_BEGINDRAGHANDLER_OFFSET UNITYSDK_OFFSET(0x1F4D3B30)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_CANCELHANDLER_OFFSET UNITYSDK_OFFSET(0x1F4D3D10)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_DESELECTHANDLER_OFFSET UNITYSDK_OFFSET(0x1F4D3C80)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_DRAGHANDLER_OFFSET UNITYSDK_OFFSET(0x1F4D3B60)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_DROPHANDLER_OFFSET UNITYSDK_OFFSET(0x1F4D3BC0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_ENDDRAGHANDLER_OFFSET UNITYSDK_OFFSET(0x1F4D3B90)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_IGNOREHANDLER_OFFSET UNITYSDK_OFFSET(0x1F4D3E60)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_INITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0x1F4D3B00)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_MOVEHANDLER_OFFSET UNITYSDK_OFFSET(0x1F4D3CB0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTERCLICKHANDLER_OFFSET UNITYSDK_OFFSET(0x1F4D3AD0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTERDOWNHANDLER_OFFSET UNITYSDK_OFFSET(0x1F4D3A70)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTERENTERHANDLER_OFFSET UNITYSDK_OFFSET(0x1F4D3A10)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTEREXITHANDLER_OFFSET UNITYSDK_OFFSET(0x1F4D3A40)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTERUPHANDLER_OFFSET UNITYSDK_OFFSET(0x1F4D3AA0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_SCROLLHANDLER_OFFSET UNITYSDK_OFFSET(0x1F4D3BF0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_SELECTHANDLER_OFFSET UNITYSDK_OFFSET(0x1F4D3C50)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_SUBMITHANDLER_OFFSET UNITYSDK_OFFSET(0x1F4D3CE0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_UPDATESELECTEDHANDLER_OFFSET UNITYSDK_OFFSET(0x1F4D3C20)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_ISEVENTBLOCK_OFFSET UNITYSDK_OFFSET(0x1F4D23C0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_SETEXECUTEEVENTBLOCKER_OFFSET UNITYSDK_OFFSET(0x1F4D2380)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int ExecuteEvents_TypeDefinitionIndex = 6935;

	class ExecuteEvents : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_s_CancelHandler()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.EventSystems", "ExecuteEvents")->GetStaticField(0x11690);
		}

		static ::System::Object** StaticGet_s_EndDragHandler()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.EventSystems", "ExecuteEvents")->GetStaticField(0x11698);
		}

		static ::System::Object** StaticGet_s_SubmitHandler()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.EventSystems", "ExecuteEvents")->GetStaticField(0x116A0);
		}

		static ::System::Object** StaticGet_s_SelectHandler()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.EventSystems", "ExecuteEvents")->GetStaticField(0x116A8);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Transform*>** StaticGet_s_InternalTransformList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Transform*>**)UnitySDK::FromName("UnityEngine.EventSystems", "ExecuteEvents")->GetStaticField(0x116B0);
		}

		static ::System::Object** StaticGet_s_PointerUpHandler()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.EventSystems", "ExecuteEvents")->GetStaticField(0x116B8);
		}

		static ::UnityEngine::EventSystems::IExecuteEventBlocker** StaticGet__ExecuteEventBlocker()
		{
			return (::UnityEngine::EventSystems::IExecuteEventBlocker**)UnitySDK::FromName("UnityEngine.EventSystems", "ExecuteEvents")->GetStaticField(0x116C0);
		}

		static ::System::Object** StaticGet_s_InitializePotentialDragHandler()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.EventSystems", "ExecuteEvents")->GetStaticField(0x116C8);
		}

		static ::System::Object** StaticGet_s_DropHandler()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.EventSystems", "ExecuteEvents")->GetStaticField(0x116D0);
		}

		static ::System::Object** StaticGet_s_PointerExitHandler()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.EventSystems", "ExecuteEvents")->GetStaticField(0x116D8);
		}

		static ::System::Object** StaticGet_s_PointerEnterHandler()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.EventSystems", "ExecuteEvents")->GetStaticField(0x116E0);
		}

		static ::UnityEngine::UI::ObjectPool_1<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::IEventSystemHandler*>*>** StaticGet_s_HandlerListPool()
		{
			return (::UnityEngine::UI::ObjectPool_1<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::IEventSystemHandler*>*>**)UnitySDK::FromName("UnityEngine.EventSystems", "ExecuteEvents")->GetStaticField(0x116E8);
		}

		static ::System::Object** StaticGet_s_DragHandler()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.EventSystems", "ExecuteEvents")->GetStaticField(0x116F0);
		}

		static ::System::Object** StaticGet_s_ScrollHandler()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.EventSystems", "ExecuteEvents")->GetStaticField(0x116F8);
		}

		static ::System::Object** StaticGet_s_IgnoreHandler()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.EventSystems", "ExecuteEvents")->GetStaticField(0x11700);
		}

		static ::System::Object** StaticGet_s_PointerDownHandler()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.EventSystems", "ExecuteEvents")->GetStaticField(0x11708);
		}

		static ::System::Object** StaticGet_s_MoveHandler()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.EventSystems", "ExecuteEvents")->GetStaticField(0x11710);
		}

		static ::System::Object** StaticGet_s_UpdateSelectedHandler()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.EventSystems", "ExecuteEvents")->GetStaticField(0x11718);
		}

		static ::System::Object** StaticGet_s_BeginDragHandler()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.EventSystems", "ExecuteEvents")->GetStaticField(0x11720);
		}

		static ::System::Object** StaticGet_s_DeselectHandler()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.EventSystems", "ExecuteEvents")->GetStaticField(0x11728);
		}

		static ::System::Object** StaticGet_s_PointerClickHandler()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.EventSystems", "ExecuteEvents")->GetStaticField(0x11730);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_CCTOR_OFFSET))();
		}

		static ::System::Void SetExecuteEventBlocker(::UnityEngine::EventSystems::IExecuteEventBlocker* a1)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IExecuteEventBlocker*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_SETEXECUTEEVENTBLOCKER_OFFSET))(a1);
		}

		static ::System::Boolean IsEventBlock(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_ISEVENTBLOCK_OFFSET))(a1);
		}

		static ::System::Void Execute(::UnityEngine::EventSystems::IPointerEnterHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IPointerEnterHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET))(a1, a2);
		}

		static ::System::Void Execute_1(::UnityEngine::EventSystems::IPointerExitHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IPointerExitHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_1_OFFSET))(a1, a2);
		}

		static ::System::Void Execute_2(::UnityEngine::EventSystems::IPointerDownHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IPointerDownHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_2_OFFSET))(a1, a2);
		}

		static ::System::Void Execute_3(::UnityEngine::EventSystems::IPointerUpHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IPointerUpHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_3_OFFSET))(a1, a2);
		}

		static ::System::Void Execute_4(::UnityEngine::EventSystems::IPointerClickHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IPointerClickHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_4_OFFSET))(a1, a2);
		}

		static ::System::Void Execute_5(::UnityEngine::EventSystems::IInitializePotentialDragHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IInitializePotentialDragHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_5_OFFSET))(a1, a2);
		}

		static ::System::Void Execute_6(::UnityEngine::EventSystems::IBeginDragHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IBeginDragHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_6_OFFSET))(a1, a2);
		}

		static ::System::Void Execute_7(::UnityEngine::EventSystems::IDragHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IDragHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_7_OFFSET))(a1, a2);
		}

		static ::System::Void Execute_8(::UnityEngine::EventSystems::IEndDragHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IEndDragHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_8_OFFSET))(a1, a2);
		}

		static ::System::Void Execute_9(::UnityEngine::EventSystems::IDropHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IDropHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_9_OFFSET))(a1, a2);
		}

		static ::System::Void Execute_10(::UnityEngine::EventSystems::IScrollHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IScrollHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_10_OFFSET))(a1, a2);
		}

		static ::System::Void Execute_11(::UnityEngine::EventSystems::IUpdateSelectedHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IUpdateSelectedHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_11_OFFSET))(a1, a2);
		}

		static ::System::Void Execute_12(::UnityEngine::EventSystems::ISelectHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::ISelectHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_12_OFFSET))(a1, a2);
		}

		static ::System::Void Execute_13(::UnityEngine::EventSystems::IDeselectHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IDeselectHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_13_OFFSET))(a1, a2);
		}

		static ::System::Void Execute_14(::UnityEngine::EventSystems::IMoveHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IMoveHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_14_OFFSET))(a1, a2);
		}

		static ::System::Void Execute_15(::UnityEngine::EventSystems::ISubmitHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::ISubmitHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_15_OFFSET))(a1, a2);
		}

		static ::System::Void Execute_16(::UnityEngine::EventSystems::ICancelHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::ICancelHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_16_OFFSET))(a1, a2);
		}

		static ::System::Object* get_pointerEnterHandler()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTERENTERHANDLER_OFFSET))();
		}

		static ::System::Object* get_pointerExitHandler()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTEREXITHANDLER_OFFSET))();
		}

		static ::System::Object* get_pointerDownHandler()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTERDOWNHANDLER_OFFSET))();
		}

		static ::System::Object* get_pointerUpHandler()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTERUPHANDLER_OFFSET))();
		}

		static ::System::Object* get_pointerClickHandler()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTERCLICKHANDLER_OFFSET))();
		}

		static ::System::Object* get_initializePotentialDrag()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_INITIALIZEPOTENTIALDRAG_OFFSET))();
		}

		static ::System::Object* get_beginDragHandler()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_BEGINDRAGHANDLER_OFFSET))();
		}

		static ::System::Object* get_dragHandler()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_DRAGHANDLER_OFFSET))();
		}

		static ::System::Object* get_endDragHandler()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_ENDDRAGHANDLER_OFFSET))();
		}

		static ::System::Object* get_dropHandler()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_DROPHANDLER_OFFSET))();
		}

		static ::System::Object* get_scrollHandler()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_SCROLLHANDLER_OFFSET))();
		}

		static ::System::Object* get_updateSelectedHandler()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_UPDATESELECTEDHANDLER_OFFSET))();
		}

		static ::System::Object* get_selectHandler()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_SELECTHANDLER_OFFSET))();
		}

		static ::System::Object* get_deselectHandler()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_DESELECTHANDLER_OFFSET))();
		}

		static ::System::Object* get_moveHandler()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_MOVEHANDLER_OFFSET))();
		}

		static ::System::Object* get_submitHandler()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_SUBMITHANDLER_OFFSET))();
		}

		static ::System::Object* get_cancelHandler()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_CANCELHANDLER_OFFSET))();
		}

		static ::System::Void Execute_17(::UnityEngine::EventSystems::IIgnoreHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IIgnoreHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_17_OFFSET))(a1, a2);
		}

		static ::System::Object* get_ignoreHandler()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_IGNOREHANDLER_OFFSET))();
		}

		static ::System::Void GetEventChain(::UnityEngine::GameObject* a1, ::System::Collections::Generic::IList_1<::UnityEngine::Transform*>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Collections::Generic::IList_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GETEVENTCHAIN_OFFSET))(a1, a2);
		}

		static ::System::Boolean ExecuteExit(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::BaseEventData* a2, ::System::Object* a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::UnityEngine::EventSystems::BaseEventData*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTEEXIT_OFFSET))(a1, a2, a3);
		}

	};
}
