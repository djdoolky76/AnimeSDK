#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ALKHIHHGNKG.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
class DMHKKMFEJNH;
class JIOKCADHOMF;
namespace RPG::Client { class UIDragEventReceiver; }
namespace RPG::Client { class UIDragGhost; }
namespace RPG::Client { class UIDragSource; }
namespace RPG::Client { class UIDropTarget; }
namespace System { class Action; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_UIDRAGSCOPE_ADD_DRAGBEGAN_OFFSET UNITYSDK_OFFSET(0xE397830)
#define RPG_CLIENT_UIDRAGSCOPE_ADD_DRAGENDED_OFFSET UNITYSDK_OFFSET(0xE397890)
#define RPG_CLIENT_UIDRAGSCOPE_ADD_DRAGMOVED_OFFSET UNITYSDK_OFFSET(0xE3998E0)
#define RPG_CLIENT_UIDRAGSCOPE_AFEOPPMLHMA_OFFSET UNITYSDK_OFFSET(0xE39A570)
#define RPG_CLIENT_UIDRAGSCOPE_AWAKE_OFFSET UNITYSDK_OFFSET(0xE39A210)
#define RPG_CLIENT_UIDRAGSCOPE_BEGINDRAGFROMPOINTER_OFFSET UNITYSDK_OFFSET(0xE39A260)
#define RPG_CLIENT_UIDRAGSCOPE_BEGINDRAG_OFFSET UNITYSDK_OFFSET(0xE396F50)
#define RPG_CLIENT_UIDRAGSCOPE_CANCEL_OFFSET UNITYSDK_OFFSET(0xE397550)
#define RPG_CLIENT_UIDRAGSCOPE_CTOR_OFFSET UNITYSDK_OFFSET(0xE39A950)
#define RPG_CLIENT_UIDRAGSCOPE_DROP_OFFSET UNITYSDK_OFFSET(0xE3973A0)
#define RPG_CLIENT_UIDRAGSCOPE_GET_ISDRAGGING_OFFSET UNITYSDK_OFFSET(0xE396930)
#define RPG_CLIENT_UIDRAGSCOPE_JGKOJKHEMEE_OFFSET UNITYSDK_OFFSET(0xE39A430)
#define RPG_CLIENT_UIDRAGSCOPE_KPNLNCPMCBN_OFFSET UNITYSDK_OFFSET(0xE39A6D0)
#define RPG_CLIENT_UIDRAGSCOPE_MOVE_OFFSET UNITYSDK_OFFSET(0xE397300)
#define RPG_CLIENT_UIDRAGSCOPE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE39A840)
#define RPG_CLIENT_UIDRAGSCOPE_REMOVE_DRAGBEGAN_OFFSET UNITYSDK_OFFSET(0xE397AF0)
#define RPG_CLIENT_UIDRAGSCOPE_REMOVE_DRAGENDED_OFFSET UNITYSDK_OFFSET(0xE397B50)
#define RPG_CLIENT_UIDRAGSCOPE_REMOVE_DRAGMOVED_OFFSET UNITYSDK_OFFSET(0xE399AA0)

namespace RPG::Client
{
	class UIDragScope : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::UIDragGhost* _Ghost; // 0x18
		::System::Action* DragBegan; // 0x20
		::System::Action* DragMoved; // 0x28
		::System::Action* DragEnded; // 0x30
		::DMHKKMFEJNH* INNPHMMNOAN; // 0x38
		::RPG::Client::UIDragEventReceiver* LFCELIPJIOA; // 0x40
		::JIOKCADHOMF* FPAHLFBBNMK; // 0x48
		::RPG::Client::UIDropTarget* EIKEPMFMHEH; // 0x50
		::System::Boolean EAEBGAALOJM; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_CTOR_OFFSET))(this);
		}

		::System::Void add_DragBegan(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_ADD_DRAGBEGAN_OFFSET))(this, a1);
		}

		::System::Void remove_DragBegan(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_REMOVE_DRAGBEGAN_OFFSET))(this, a1);
		}

		::System::Void add_DragMoved(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_ADD_DRAGMOVED_OFFSET))(this, a1);
		}

		::System::Void remove_DragMoved(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_REMOVE_DRAGMOVED_OFFSET))(this, a1);
		}

		::System::Void add_DragEnded(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_ADD_DRAGENDED_OFFSET))(this, a1);
		}

		::System::Void remove_DragEnded(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_REMOVE_DRAGENDED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDragging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_GET_ISDRAGGING_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_AWAKE_OFFSET))(this);
		}

		::System::Void BeginDragFromPointer(::RPG::Client::UIDragSource* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIDragSource*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_BEGINDRAGFROMPOINTER_OFFSET))(this, a1, a2);
		}

		::System::Void BeginDrag(::RPG::Client::UIDragSource* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIDragSource*, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_BEGINDRAG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Move(::UnityEngine::Vector2 a1, ::UnityEngine::Camera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_MOVE_OFFSET))(this, a1, a2);
		}

		::System::Void Drop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_DROP_OFFSET))(this);
		}

		::System::Void Cancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_CANCEL_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_ONDISABLE_OFFSET))(this);
		}

		::System::Void JGKOJKHEMEE(::RPG::Client::UIDragSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIDragSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_JGKOJKHEMEE_OFFSET))(this, a1);
		}

		::System::Void AFEOPPMLHMA(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_AFEOPPMLHMA_OFFSET))(this, a1);
		}

		::System::Void KPNLNCPMCBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_KPNLNCPMCBN_OFFSET))(this);
		}

	};
}
