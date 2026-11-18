#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HFAKENNLPND;
namespace MoleMole { class UIAutoBattlePVERowWidgetController_Data; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C06FC0)
#define MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14C07000)
#define MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER___C__ONUIOPEN_B__6_0_OFFSET UNITYSDK_OFFSET(0x14C07010)
#define MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER___C__ONUIOPEN_B__6_1_OFFSET UNITYSDK_OFFSET(0x14C07070)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVEPageController___c_TypeDefinitionIndex = 48457;

	class UIAutoBattlePVEPageController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::System::Int32>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::System::Object*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePVEPageController___c_TypeDefinitionIndex)->GetStaticField(0x41FA0);
		}
		static ::System::Func_2<::HFAKENNLPND*, ::System::Object*>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::HFAKENNLPND*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePVEPageController___c_TypeDefinitionIndex)->GetStaticField(0x41FA8);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePVEPageController___c_TypeDefinitionIndex)->GetStaticField(0x41FB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::MoleMole::UIAutoBattlePVERowWidgetController_Data* _OnUIOpen_b__6_0(::HFAKENNLPND* abLevelExt)
		{
			return ((::MoleMole::UIAutoBattlePVERowWidgetController_Data*(*)(::PVOID, ::HFAKENNLPND*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER___C__ONUIOPEN_B__6_0_OFFSET))(this, abLevelExt);
		}

		::System::Int32 _OnUIOpen_b__6_1(::MoleMole::UIAutoBattlePVERowWidgetController_Data* data)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIAutoBattlePVERowWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER___C__ONUIOPEN_B__6_1_OFFSET))(this, data);
		}
	};
}
