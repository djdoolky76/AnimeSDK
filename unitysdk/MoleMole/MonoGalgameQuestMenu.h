#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KKMAPOKOHOI.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class POIIGDJBBPI;
namespace MoleMole::GalGame { class TransitionDisplayItem; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }

#define MOLEMOLE_MONOGALGAMEQUESTMENU_IHHLIDJIGLC_OFFSET UNITYSDK_OFFSET(0x10434150)
#define MOLEMOLE_MONOGALGAMEQUESTMENU_INIT_OFFSET UNITYSDK_OFFSET(0x10433630)
#define MOLEMOLE_MONOGALGAMEQUESTMENU_SETBUTTONINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x10433F20)
#define MOLEMOLE_MONOGALGAMEQUESTMENU_SETDATA_OFFSET UNITYSDK_OFFSET(0x10433900)
#define MOLEMOLE_MONOGALGAMEQUESTMENU__CTOR_OFFSET UNITYSDK_OFFSET(0x10434070)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGalgameQuestMenu_TypeDefinitionIndex = 86388;

	class MonoGalgameQuestMenu : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* menuItemList; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UIButtonEx*>* buttonList; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::UI::Text*>* textList; // 0x28
		::System::Action_2<::MoleMole::GalGame::TransitionDisplayItem*, ::KKMAPOKOHOI>* clickItemAction; // 0x30
		::System::String* CKHHBGJNGKD; // 0x38
		::System::Collections::Generic::List_1<::MoleMole::GalGame::TransitionDisplayItem*>* PMHJBOFDPEJ; // 0x40
		::System::Int32 CGDODMLHOKJ; // 0x48
		::System::Int32 FNBKALEMHJL; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGALGAMEQUESTMENU__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGALGAMEQUESTMENU_INIT_OFFSET))(this);
		}

		::System::Void SetData(::POIIGDJBBPI* PGAAHNEBDJB, ::System::Collections::Generic::List_1<::System::Int32>* FIPNKPAKPPA)
		{
			return ((::System::Void(*)(::PVOID, ::POIIGDJBBPI*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGALGAMEQUESTMENU_SETDATA_OFFSET))(this, PGAAHNEBDJB, FIPNKPAKPPA);
		}

		::System::Void SetButtonInteractable(::System::Boolean PFPJFCGFNFL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGALGAMEQUESTMENU_SETBUTTONINTERACTABLE_OFFSET))(this, PFPJFCGFNFL);
		}

		::System::Void IHHLIDJIGLC(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGALGAMEQUESTMENU_IHHLIDJIGLC_OFFSET))(this, ABHBKFJKINO);
		}
	};
}
