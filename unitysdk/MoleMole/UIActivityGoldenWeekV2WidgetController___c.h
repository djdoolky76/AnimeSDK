#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x188512D0)
#define MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18851310)
#define MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER___C__REFRESHSHOWTABLE_B__24_0_OFFSET UNITYSDK_OFFSET(0x18851320)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityGoldenWeekV2WidgetController___c_TypeDefinitionIndex = 76692;

	class UIActivityGoldenWeekV2WidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIActivityGoldenWeekV2WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3BFB0);
		}
		static ::System::Comparison_1<::CJIEIHEDMME*>** StaticGet___9__24_0()
		{
			return (::System::Comparison_1<::CJIEIHEDMME*>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityGoldenWeekV2WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3BFB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshShowTable_b__24_0(::CJIEIHEDMME* x, ::CJIEIHEDMME* y)
		{
			return ((::System::Int32(*)(::PVOID, ::CJIEIHEDMME*, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER___C__REFRESHSHOWTABLE_B__24_0_OFFSET))(this, x, y);
		}
	};
}
