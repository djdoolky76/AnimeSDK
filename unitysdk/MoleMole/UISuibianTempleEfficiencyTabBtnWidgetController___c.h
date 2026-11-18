#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GKGPNGFIMDA;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UISUIBIANTEMPLEEFFICIENCYTABBTNWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11351AC0)
#define MOLEMOLE_UISUIBIANTEMPLEEFFICIENCYTABBTNWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11351B00)
#define MOLEMOLE_UISUIBIANTEMPLEEFFICIENCYTABBTNWIDGETCONTROLLER___C__REFRESHVIEW_B__7_0_OFFSET UNITYSDK_OFFSET(0x11351B10)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleEfficiencyTabBtnWidgetController___c_TypeDefinitionIndex = 55387;

	class UISuibianTempleEfficiencyTabBtnWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleEfficiencyTabBtnWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F2C0);
		}
		static ::System::Func_2<::GKGPNGFIMDA*, ::System::Int32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::GKGPNGFIMDA*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleEfficiencyTabBtnWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F2C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEFFICIENCYTABBTNWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEFFICIENCYTABBTNWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshView_b__7_0(::GKGPNGFIMDA* item)
		{
			return ((::System::Int32(*)(::PVOID, ::GKGPNGFIMDA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEFFICIENCYTABBTNWIDGETCONTROLLER___C__REFRESHVIEW_B__7_0_OFFSET))(this, item);
		}
	};
}
