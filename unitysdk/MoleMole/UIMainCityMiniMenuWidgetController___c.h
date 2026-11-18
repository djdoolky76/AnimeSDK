#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19043AE0)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19043B20)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER___C__HASFAIRY_B__55_0_OFFSET UNITYSDK_OFFSET(0x19043B30)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityMiniMenuWidgetController___c_TypeDefinitionIndex = 68969;

	class UIMainCityMiniMenuWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::MoleMole::UIGeneralNewsBubbleRowWidgetController*, ::System::Boolean>** StaticGet___9__55_0()
		{
			return (::System::Func_2<::MoleMole::UIGeneralNewsBubbleRowWidgetController*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityMiniMenuWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4C4B0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityMiniMenuWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4C4B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _HasFairy_b__55_0(::MoleMole::UIGeneralNewsBubbleRowWidgetController* r)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER___C__HASFAIRY_B__55_0_OFFSET))(this, r);
		}
	};
}
