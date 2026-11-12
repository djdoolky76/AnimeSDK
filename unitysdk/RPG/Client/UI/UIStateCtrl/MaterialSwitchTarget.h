#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }

#define RPG_CLIENT_UI_UISTATECTRL_MATERIALSWITCHTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0xEDB5000)
#define RPG_CLIENT_UI_UISTATECTRL_MATERIALSWITCHTARGET_JENKLJKAHBE_OFFSET UNITYSDK_OFFSET(0xEDB7110)
#define RPG_CLIENT_UI_UISTATECTRL_MATERIALSWITCHTARGET_PLJHBBFJDOO_1_OFFSET UNITYSDK_OFFSET(0xEDB7050)
#define RPG_CLIENT_UI_UISTATECTRL_MATERIALSWITCHTARGET_PLJHBBFJDOO_2_OFFSET UNITYSDK_OFFSET(0xEDB70B0)
#define RPG_CLIENT_UI_UISTATECTRL_MATERIALSWITCHTARGET_PLJHBBFJDOO_OFFSET UNITYSDK_OFFSET(0xEDB6FF0)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int MaterialSwitchTarget_TypeDefinitionIndex = 76221;

	class MaterialSwitchTarget : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MATERIALSWITCHTARGET_CTOR_OFFSET))(this);
		}

		::System::Void PLJHBBFJDOO(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MATERIALSWITCHTARGET_PLJHBBFJDOO_OFFSET))(this, a1, a2);
		}

		::System::Void PLJHBBFJDOO_1(::System::String* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MATERIALSWITCHTARGET_PLJHBBFJDOO_1_OFFSET))(this, a1, a2);
		}

		::System::Void PLJHBBFJDOO_2(::System::String* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MATERIALSWITCHTARGET_PLJHBBFJDOO_2_OFFSET))(this, a1, a2);
		}

		::System::Void JENKLJKAHBE(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MATERIALSWITCHTARGET_JENKLJKAHBE_OFFSET))(this, a1, a2);
		}

	};
}
