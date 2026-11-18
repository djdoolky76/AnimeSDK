#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UILEVELRESULTV2_PAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1760FA50)
#define MOLEMOLE_UILEVELRESULTV2_PAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1760FA90)
#define MOLEMOLE_UILEVELRESULTV2_PAGECONTROLLER___C___ADDFADEOUTANIMATIONCALLBACK_B__75_0_OFFSET UNITYSDK_OFFSET(0x1760FAA0)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultV2_PageController___c_TypeDefinitionIndex = 71243;

	class UILevelResultV2_PageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__75_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UILevelResultV2_PageController___c_TypeDefinitionIndex)->GetStaticField(0x35460);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UILevelResultV2_PageController___c_TypeDefinitionIndex)->GetStaticField(0x35468);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_PAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_PAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void __AddFadeOutAnimationCallback_b__75_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_PAGECONTROLLER___C___ADDFADEOUTANIMATIONCALLBACK_B__75_0_OFFSET))(this);
		}
	};
}
