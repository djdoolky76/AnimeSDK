#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18995780)
#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x189957C0)
#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER___C__REFRESHSHOWTABLE_B__31_0_OFFSET UNITYSDK_OFFSET(0x189957D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityChainV2WidgetController___c_TypeDefinitionIndex = 75660;

	class UIActivityChainV2WidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::CJIEIHEDMME*>** StaticGet___9__31_0()
		{
			return (::System::Comparison_1<::CJIEIHEDMME*>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityChainV2WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4EA10);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIActivityChainV2WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4EA18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshShowTable_b__31_0(::CJIEIHEDMME* x, ::CJIEIHEDMME* y)
		{
			return ((::System::Int32(*)(::PVOID, ::CJIEIHEDMME*, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER___C__REFRESHSHOWTABLE_B__31_0_OFFSET))(this, x, y);
		}
	};
}
