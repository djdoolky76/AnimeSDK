#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/MaterialSwitchTarget.h"
namespace RPG::Client::UI::UIStateCtrl { class MaterialSwitchTarget; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }

#define RPG_CLIENT_UI_UISTATECTRL_MESHRENDERERMATERIALSWITCHTARGET_CTOR_1_OFFSET UNITYSDK_OFFSET(0xE340570)
#define RPG_CLIENT_UI_UISTATECTRL_MESHRENDERERMATERIALSWITCHTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0xE340560)
#define RPG_CLIENT_UI_UISTATECTRL_MESHRENDERERMATERIALSWITCHTARGET_HABJKLPECBB_OFFSET UNITYSDK_OFFSET(0xE340790)
#define RPG_CLIENT_UI_UISTATECTRL_MESHRENDERERMATERIALSWITCHTARGET_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xE3408A0)
#define RPG_CLIENT_UI_UISTATECTRL_MESHRENDERERMATERIALSWITCHTARGET_KNIAJCKJGHK_OFFSET UNITYSDK_OFFSET(0xE340730)
#define RPG_CLIENT_UI_UISTATECTRL_MESHRENDERERMATERIALSWITCHTARGET_LGFJHKBMEDJ_OFFSET UNITYSDK_OFFSET(0xE340900)
#define RPG_CLIENT_UI_UISTATECTRL_MESHRENDERERMATERIALSWITCHTARGET_LLKMLEIJOOA_OFFSET UNITYSDK_OFFSET(0xE340580)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int MeshRendererMaterialSwitchTarget_TypeDefinitionIndex = 74074;

	class MeshRendererMaterialSwitchTarget : public ::RPG::Client::UI::UIStateCtrl::MaterialSwitchTarget
	{
	public:
		::UnityEngine::MeshRenderer* TargetRenderer; // 0x10
		::System::Int32 MaterialIndex; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MESHRENDERERMATERIALSWITCHTARGET_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::MeshRenderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshRenderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MESHRENDERERMATERIALSWITCHTARGET_CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::MaterialSwitchTarget*>* LLKMLEIJOOA(::UnityEngine::Component* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::MaterialSwitchTarget*>*(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MESHRENDERERMATERIALSWITCHTARGET_LLKMLEIJOOA_OFFSET))(a1);
		}

		::System::Type* KNIAJCKJGHK()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MESHRENDERERMATERIALSWITCHTARGET_KNIAJCKJGHK_OFFSET))(this);
		}

		::System::Void HABJKLPECBB(::UnityEngine::Material* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MESHRENDERERMATERIALSWITCHTARGET_HABJKLPECBB_OFFSET))(this, a1, a2);
		}

		::System::Boolean KKKIONIDKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MESHRENDERERMATERIALSWITCHTARGET_KKKIONIDKFA_OFFSET))(this);
		}

		::UnityEngine::GameObject* LGFJHKBMEDJ()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MESHRENDERERMATERIALSWITCHTARGET_LGFJHKBMEDJ_OFFSET))(this);
		}

	};
}
