#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NKJLGFPNLBD;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIABYSSS2ROLECHALLENGEWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13F338F0)
#define MOLEMOLE_UIABYSSS2ROLECHALLENGEWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13F33930)
#define MOLEMOLE_UIABYSSS2ROLECHALLENGEWIDGETCONTROLLER___C__ONBEGINBATTLE_B__23_0_OFFSET UNITYSDK_OFFSET(0x13F33A00)
#define MOLEMOLE_UIABYSSS2ROLECHALLENGEWIDGETCONTROLLER___C__ONMAINBTNCLICK_B__14_0_OFFSET UNITYSDK_OFFSET(0x13F33940)
#define MOLEMOLE_UIABYSSS2ROLECHALLENGEWIDGETCONTROLLER___C___CTOR_B__52_0_OFFSET UNITYSDK_OFFSET(0x13F33A10)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2RoleChallengeWidgetController___c_TypeDefinitionIndex = 63308;

	class UIAbyssS2RoleChallengeWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__14_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RoleChallengeWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34BD0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RoleChallengeWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34BD8);
		}
		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__52_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RoleChallengeWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34BE0);
		}
		static ::System::Action_1<::NKJLGFPNLBD*>** StaticGet___9__23_0()
		{
			return (::System::Action_1<::NKJLGFPNLBD*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RoleChallengeWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34BE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ROLECHALLENGEWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ROLECHALLENGEWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnMainBtnClick_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ROLECHALLENGEWIDGETCONTROLLER___C__ONMAINBTNCLICK_B__14_0_OFFSET))(this);
		}

		::System::Void _OnBeginBattle_b__23_0(::NKJLGFPNLBD* beginHollowData)
		{
			return ((::System::Void(*)(::PVOID, ::NKJLGFPNLBD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ROLECHALLENGEWIDGETCONTROLLER___C__ONBEGINBATTLE_B__23_0_OFFSET))(this, beginHollowData);
		}

		::System::Boolean __ctor_b__52_0(::System::Int32 i)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ROLECHALLENGEWIDGETCONTROLLER___C___CTOR_B__52_0_OFFSET))(this, i);
		}
	};
}
