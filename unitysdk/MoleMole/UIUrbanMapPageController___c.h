#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIURBANMAPPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12C040A0)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12C040E0)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER___C__ONUICLOSE_B__23_0_OFFSET UNITYSDK_OFFSET(0x12C040F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPageController___c_TypeDefinitionIndex = 69876;

	class UIUrbanMapPageController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIUrbanMapPageController___c_TypeDefinitionIndex)->GetStaticField(0x47370);
		}
		static ::System::Action** StaticGet___9__23_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIUrbanMapPageController___c_TypeDefinitionIndex)->GetStaticField(0x47378);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIClose_b__23_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER___C__ONUICLOSE_B__23_0_OFFSET))(this);
		}
	};
}
