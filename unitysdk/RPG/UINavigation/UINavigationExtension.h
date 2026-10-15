#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/EJOHEMFHNAH.h"
class FHENBGFPCCB;
namespace RPG::UINavigation { class UINavigation; }
namespace RPG::UINavigation { class UINavigationArea; }
namespace UnityEngine { class GameObject; }

#define RPG_UINAVIGATION_UINAVIGATIONEXTENSION_CTOR_OFFSET UNITYSDK_OFFSET(0xE88A640)
#define RPG_UINAVIGATION_UINAVIGATIONEXTENSION_GETFIRSTSELECTABLE_OFFSET UNITYSDK_OFFSET(0xE88AD60)
#define RPG_UINAVIGATION_UINAVIGATIONEXTENSION_GET_NAVIGATIONAREA_OFFSET UNITYSDK_OFFSET(0xE888EC0)
#define RPG_UINAVIGATION_UINAVIGATIONEXTENSION_GNMGBIODCBE_OFFSET UNITYSDK_OFFSET(0xE88ADE0)
#define RPG_UINAVIGATION_UINAVIGATIONEXTENSION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE888D50)
#define RPG_UINAVIGATION_UINAVIGATIONEXTENSION_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE888BD0)
#define RPG_UINAVIGATION_UINAVIGATIONEXTENSION_POSTONCHILDDESELECTED_OFFSET UNITYSDK_OFFSET(0xE88AD10)
#define RPG_UINAVIGATION_UINAVIGATIONEXTENSION_POSTONCHILDSELECTED_OFFSET UNITYSDK_OFFSET(0xE88ACC0)
#define RPG_UINAVIGATION_UINAVIGATIONEXTENSION_POSTONNAVIGATION_OFFSET UNITYSDK_OFFSET(0xE88AC70)

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigationExtension_TypeDefinitionIndex = 51738;

	class UINavigationExtension : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::UINavigation::UINavigationArea* AIGJIOJMHMB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONEXTENSION_CTOR_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationArea* get_NavigationArea()
		{
			return ((::RPG::UINavigation::UINavigationArea*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONEXTENSION_GET_NAVIGATIONAREA_OFFSET))(this);
		}

		::System::Void PostOnNavigation(::FHENBGFPCCB* a1, ::EJOHEMFHNAH a2)
		{
			return ((::System::Void(*)(::PVOID, ::FHENBGFPCCB*, ::EJOHEMFHNAH))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONEXTENSION_POSTONNAVIGATION_OFFSET))(this, a1, a2);
		}

		::System::Void PostOnChildSelected(::RPG::UINavigation::UINavigation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONEXTENSION_POSTONCHILDSELECTED_OFFSET))(this, a1);
		}

		::System::Void PostOnChildDeselected(::RPG::UINavigation::UINavigation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONEXTENSION_POSTONCHILDDESELECTED_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* GetFirstSelectable(::FHENBGFPCCB* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::FHENBGFPCCB*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONEXTENSION_GETFIRSTSELECTABLE_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONEXTENSION_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONEXTENSION_ONDISABLE_OFFSET))(this);
		}

		::System::Void GNMGBIODCBE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONEXTENSION_GNMGBIODCBE_OFFSET))(this, a1);
		}

	};
}
