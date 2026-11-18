#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KJIEDDLNJFC;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x167B5460)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x167B54A0)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___C__INITVIEW_B__27_0_OFFSET UNITYSDK_OFFSET(0x167B54B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleChangeWidgetController___c_TypeDefinitionIndex = 83608;

	class UIRoleChangeWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::KJIEDDLNJFC*>** StaticGet___9__27_0()
		{
			return (::System::Comparison_1<::KJIEDDLNJFC*>**)Il2CppClass::FromTypeDefinitionIndex(UIRoleChangeWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x48CA0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIRoleChangeWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x48CA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitView_b__27_0(::KJIEDDLNJFC* a, ::KJIEDDLNJFC* b)
		{
			return ((::System::Int32(*)(::PVOID, ::KJIEDDLNJFC*, ::KJIEDDLNJFC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___C__INITVIEW_B__27_0_OFFSET))(this, a, b);
		}
	};
}
