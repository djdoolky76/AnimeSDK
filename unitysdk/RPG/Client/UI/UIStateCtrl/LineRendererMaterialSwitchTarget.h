#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/MaterialSwitchTarget.h"
namespace RPG::Client::UI::UIStateCtrl { class MaterialSwitchTarget; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_UI_UISTATECTRL_LINERENDERERMATERIALSWITCHTARGET_CTOR_1_OFFSET UNITYSDK_OFFSET(0xE349B10)
#define RPG_CLIENT_UI_UISTATECTRL_LINERENDERERMATERIALSWITCHTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0xE349B00)
#define RPG_CLIENT_UI_UISTATECTRL_LINERENDERERMATERIALSWITCHTARGET_HABJKLPECBB_OFFSET UNITYSDK_OFFSET(0xE349D10)
#define RPG_CLIENT_UI_UISTATECTRL_LINERENDERERMATERIALSWITCHTARGET_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xE349E20)
#define RPG_CLIENT_UI_UISTATECTRL_LINERENDERERMATERIALSWITCHTARGET_KNIAJCKJGHK_OFFSET UNITYSDK_OFFSET(0xE349CB0)
#define RPG_CLIENT_UI_UISTATECTRL_LINERENDERERMATERIALSWITCHTARGET_LGFJHKBMEDJ_OFFSET UNITYSDK_OFFSET(0xE349E80)
#define RPG_CLIENT_UI_UISTATECTRL_LINERENDERERMATERIALSWITCHTARGET_LLKMLEIJOOA_OFFSET UNITYSDK_OFFSET(0xE349B20)

namespace RPG::Client::UI::UIStateCtrl
{
	class LineRendererMaterialSwitchTarget : public ::RPG::Client::UI::UIStateCtrl::MaterialSwitchTarget
	{
	public:
		::UnityEngine::LineRenderer* TargetLineRenderer; // 0x10
		::System::Int32 MaterialIndex; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LINERENDERERMATERIALSWITCHTARGET_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::LineRenderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LineRenderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LINERENDERERMATERIALSWITCHTARGET_CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::MaterialSwitchTarget*>* LLKMLEIJOOA(::UnityEngine::Component* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::MaterialSwitchTarget*>*(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LINERENDERERMATERIALSWITCHTARGET_LLKMLEIJOOA_OFFSET))(a1);
		}

		::System::Type* KNIAJCKJGHK()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LINERENDERERMATERIALSWITCHTARGET_KNIAJCKJGHK_OFFSET))(this);
		}

		::System::Void HABJKLPECBB(::UnityEngine::Material* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LINERENDERERMATERIALSWITCHTARGET_HABJKLPECBB_OFFSET))(this, a1, a2);
		}

		::System::Boolean KKKIONIDKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LINERENDERERMATERIALSWITCHTARGET_KKKIONIDKFA_OFFSET))(this);
		}

		::UnityEngine::GameObject* LGFJHKBMEDJ()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LINERENDERERMATERIALSWITCHTARGET_LGFJHKBMEDJ_OFFSET))(this);
		}

	};
}
