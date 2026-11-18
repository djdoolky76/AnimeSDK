#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJKHLPEHFLA;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17EA2650)
#define MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17EA2690)
#define MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER___C__REFRESHTEMPLEINFO_B__6_0_OFFSET UNITYSDK_OFFSET(0x17EA26A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityTempleCompWidgetController___c_TypeDefinitionIndex = 64182;

	class UIActivityTempleCompWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::CJKHLPEHFLA*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::CJKHLPEHFLA*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityTempleCompWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34FA0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIActivityTempleCompWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34FA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshTempleInfo_b__6_0(::CJKHLPEHFLA* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::CJKHLPEHFLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER___C__REFRESHTEMPLEINFO_B__6_0_OFFSET))(this, x);
		}
	};
}
