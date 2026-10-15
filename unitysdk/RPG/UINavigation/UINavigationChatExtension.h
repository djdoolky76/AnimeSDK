#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/UINavigation/UINavigationChatExtension_ViewPortVisibility.h"
#include "unitysdk/RPG/UINavigation/UINavigationExtension.h"
#include "unitysdk/UnityEngine/Vector2.h"
class FHENBGFPCCB;
namespace RPG::UINavigation { class UINavigation; }
namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopListViewItem2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_AAPGCIGIDMB_OFFSET UNITYSDK_OFFSET(0xE888FA0)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_CHCENHIIIHA_OFFSET UNITYSDK_OFFSET(0xE8890F0)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_CTOR_OFFSET UNITYSDK_OFFSET(0xE88A630)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_FPCNNFAMDIA_OFFSET UNITYSDK_OFFSET(0xE889620)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_GETFIRSTSELECTABLE_OFFSET UNITYSDK_OFFSET(0xE888DA0)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_GPICPENHNJB_OFFSET UNITYSDK_OFFSET(0xE888620)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_JFEGFCFFLFJ_OFFSET UNITYSDK_OFFSET(0xE889BA0)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_LMOIFLMGPDO_OFFSET UNITYSDK_OFFSET(0xE88A460)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_MJPGFIMKKLC_OFFSET UNITYSDK_OFFSET(0xE888570)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE888C20)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE888900)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_POSTONCHILDSELECTED_OFFSET UNITYSDK_OFFSET(0xE889A40)

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigationChatExtension_TypeDefinitionIndex = 51723;

	class UINavigationChatExtension : public ::RPG::UINavigation::UINavigationExtension
	{
	public:
		::SuperScrollView::LoopListView2* HFDJDHLLNFA; // 0x20
		::UnityEngine::RectTransform* AFMADGMODAL; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_CTOR_OFFSET))(this);
		}

		::SuperScrollView::LoopListView2* MJPGFIMKKLC()
		{
			return ((::SuperScrollView::LoopListView2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_MJPGFIMKKLC_OFFSET))(this);
		}

		::UnityEngine::RectTransform* GPICPENHNJB()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_GPICPENHNJB_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_ONDISABLE_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetFirstSelectable(::FHENBGFPCCB* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::FHENBGFPCCB*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_GETFIRSTSELECTABLE_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* AAPGCIGIDMB(::RPG::UINavigation::UINavigation* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_AAPGCIGIDMB_OFFSET))(this, a1);
		}

		::System::Void CHCENHIIIHA(::RPG::UINavigation::UINavigation* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::GameObject* a3, ::System::Single a4, ::UnityEngine::GameObject* a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*, ::UnityEngine::Vector2, ::UnityEngine::GameObject*, ::System::Single, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_CHCENHIIIHA_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void PostOnChildSelected(::RPG::UINavigation::UINavigation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_POSTONCHILDSELECTED_OFFSET))(this, a1);
		}

		::System::Void LMOIFLMGPDO(::SuperScrollView::LoopListViewItem2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_LMOIFLMGPDO_OFFSET))(this, a1);
		}

		::RPG::UINavigation::UINavigationChatExtension_ViewPortVisibility FPCNNFAMDIA(::UnityEngine::RectTransform* a1)
		{
			return ((::RPG::UINavigation::UINavigationChatExtension_ViewPortVisibility(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_FPCNNFAMDIA_OFFSET))(this, a1);
		}

		::System::Void JFEGFCFFLFJ(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_JFEGFCFFLFJ_OFFSET))(this, a1);
		}

	};
}
