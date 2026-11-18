#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FMBPEPDJNAN;
namespace System { template <typename T1, typename T2> class Converter_2; }

#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19833840)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19833880)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___C__REFRESHCARDNUM_B__8_0_OFFSET UNITYSDK_OFFSET(0x19833890)

namespace MoleMole
{
	inline static constexpr unsigned int UIAreaGoodsSubWidgetController___c_TypeDefinitionIndex = 39822;

	class UIAreaGoodsSubWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIAreaGoodsSubWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x35020);
		}
		static ::System::Converter_2<::FMBPEPDJNAN*, ::System::Int32>** StaticGet___9__8_0()
		{
			return (::System::Converter_2<::FMBPEPDJNAN*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIAreaGoodsSubWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x35028);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshCardNum_b__8_0(::FMBPEPDJNAN* x)
		{
			return ((::System::Int32(*)(::PVOID, ::FMBPEPDJNAN*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___C__REFRESHCARDNUM_B__8_0_OFFSET))(this, x);
		}
	};
}
