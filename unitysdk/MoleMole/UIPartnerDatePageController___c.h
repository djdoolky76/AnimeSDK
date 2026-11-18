#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__BIND_B__13_3_OFFSET UNITYSDK_OFFSET(0x15C3D0F0)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15C3D0A0)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15C3D0E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPartnerDatePageController___c_TypeDefinitionIndex = 71279;

	class UIPartnerDatePageController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIPartnerDatePageController___c_TypeDefinitionIndex)->GetStaticField(0x3C530);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__13_3()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIPartnerDatePageController___c_TypeDefinitionIndex)->GetStaticField(0x3C538);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _Bind_b__13_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__BIND_B__13_3_OFFSET))(this);
		}
	};
}
