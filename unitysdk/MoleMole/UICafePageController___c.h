#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UICAFEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1597A3A0)
#define MOLEMOLE_UICAFEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1597A3E0)
#define MOLEMOLE_UICAFEPAGECONTROLLER___C__INITINFO_B__6_0_OFFSET UNITYSDK_OFFSET(0x1597A3F0)

namespace MoleMole
{
	inline static constexpr unsigned int UICafePageController___c_TypeDefinitionIndex = 52442;

	class UICafePageController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__6_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UICafePageController___c_TypeDefinitionIndex)->GetStaticField(0x44E10);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UICafePageController___c_TypeDefinitionIndex)->GetStaticField(0x44E18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _InitInfo_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER___C__INITINFO_B__6_0_OFFSET))(this);
		}
	};
}
