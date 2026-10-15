#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/MaterialSwitchTarget.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::UI::UIStateCtrl { class MaterialSwitchTarget; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_CTOR_1_OFFSET UNITYSDK_OFFSET(0xE348F80)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0xE348F60)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_HABJKLPECBB_OFFSET UNITYSDK_OFFSET(0xE349140)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_JENKLJKAHBE_OFFSET UNITYSDK_OFFSET(0xE3495C0)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xE349700)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_KNIAJCKJGHK_OFFSET UNITYSDK_OFFSET(0xE3490E0)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_LGFJHKBMEDJ_OFFSET UNITYSDK_OFFSET(0xE349760)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_LLKMLEIJOOA_OFFSET UNITYSDK_OFFSET(0xE348F90)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_PLJHBBFJDOO_1_OFFSET UNITYSDK_OFFSET(0xE3492F0)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_PLJHBBFJDOO_2_OFFSET UNITYSDK_OFFSET(0xE349470)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_PLJHBBFJDOO_OFFSET UNITYSDK_OFFSET(0xE3491B0)

namespace RPG::Client::UI::UIStateCtrl
{
	class ImageMaterialSwitchTarget : public ::RPG::Client::UI::UIStateCtrl::MaterialSwitchTarget
	{
	public:
		::UnityEngine::UI::Image* TargetImage; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::UI::Image* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::MaterialSwitchTarget*>* LLKMLEIJOOA(::UnityEngine::Component* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::MaterialSwitchTarget*>*(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_LLKMLEIJOOA_OFFSET))(a1);
		}

		::System::Type* KNIAJCKJGHK()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_KNIAJCKJGHK_OFFSET))(this);
		}

		::System::Void HABJKLPECBB(::UnityEngine::Material* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_HABJKLPECBB_OFFSET))(this, a1, a2);
		}

		::System::Void PLJHBBFJDOO(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_PLJHBBFJDOO_OFFSET))(this, a1, a2);
		}

		::System::Void PLJHBBFJDOO_1(::System::String* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_PLJHBBFJDOO_1_OFFSET))(this, a1, a2);
		}

		::System::Void PLJHBBFJDOO_2(::System::String* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_PLJHBBFJDOO_2_OFFSET))(this, a1, a2);
		}

		::System::Void JENKLJKAHBE(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_JENKLJKAHBE_OFFSET))(this, a1, a2);
		}

		::System::Boolean KKKIONIDKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_KKKIONIDKFA_OFFSET))(this);
		}

		::UnityEngine::GameObject* LGFJHKBMEDJ()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_LGFJHKBMEDJ_OFFSET))(this);
		}

	};
}
