#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALDOKCCIFNB;
class NKJLGFPNLBD;
namespace MoleMole { class UILineupSelectContext_CheckGoBattleDel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F5D9A0)
#define MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18F5D9E0)
#define MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__GOTOBEGINBATTLE_B__70_2_OFFSET UNITYSDK_OFFSET(0x18F5E000)
#define MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__GOTOBEGINBATTLE_B__70_4_OFFSET UNITYSDK_OFFSET(0x18F5E200)
#define MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__GOTOBEGINBATTLE_B__70_5_OFFSET UNITYSDK_OFFSET(0x18F5E1F0)
#define MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__ONHOLLOWRECONNECTHANDLE_B__66_0_OFFSET UNITYSDK_OFFSET(0x18F5D9F0)
#define MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__ONHOLLOWRECONNECTHANDLE_B__66_1_OFFSET UNITYSDK_OFFSET(0x18F5DB00)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaAbyssWidgetController___c_TypeDefinitionIndex = 61567;

	class UIYorozuyaAbyssWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::NKJLGFPNLBD*>** StaticGet___9__70_5()
		{
			return (::System::Action_1<::NKJLGFPNLBD*>**)Il2CppClass::FromTypeDefinitionIndex(UIYorozuyaAbyssWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x45440);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIYorozuyaAbyssWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x45448);
		}
		static ::MoleMole::UILineupSelectContext_CheckGoBattleDel** StaticGet___9__70_2()
		{
			return (::MoleMole::UILineupSelectContext_CheckGoBattleDel**)Il2CppClass::FromTypeDefinitionIndex(UIYorozuyaAbyssWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x45450);
		}
		static ::System::Action** StaticGet___9__66_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIYorozuyaAbyssWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x45458);
		}
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__70_4()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIYorozuyaAbyssWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x45460);
		}
		static ::System::Action** StaticGet___9__66_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIYorozuyaAbyssWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x45468);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnHollowReconnectHandle_b__66_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__ONHOLLOWRECONNECTHANDLE_B__66_0_OFFSET))(this);
		}

		::System::Void _OnHollowReconnectHandle_b__66_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__ONHOLLOWRECONNECTHANDLE_B__66_1_OFFSET))(this);
		}

		::System::Boolean _GotoBeginBattle_b__70_2(::ALDOKCCIFNB* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALDOKCCIFNB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__GOTOBEGINBATTLE_B__70_2_OFFSET))(this, data);
		}

		::System::Void _GotoBeginBattle_b__70_5(::NKJLGFPNLBD* beginHollowData)
		{
			return ((::System::Void(*)(::PVOID, ::NKJLGFPNLBD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__GOTOBEGINBATTLE_B__70_5_OFFSET))(this, beginHollowData);
		}

		::System::String* _GotoBeginBattle_b__70_4(::System::Int32 idx)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__GOTOBEGINBATTLE_B__70_4_OFFSET))(this, idx);
		}
	};
}
