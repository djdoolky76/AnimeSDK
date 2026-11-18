#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGAJKHIMKJP;
class IOJPIAIFGKO;
class PLDJFGCHMKK;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3FA690)
#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3FA6D0)
#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__11_0_OFFSET UNITYSDK_OFFSET(0x1A3FA6E0)
#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__TRYTAKEALLBINGOREWARDS_B__23_1_OFFSET UNITYSDK_OFFSET(0x1A3FA710)

namespace MoleMole
{
	inline static constexpr unsigned int UIHIADoubleWeekActivityPopWindowController___c_TypeDefinitionIndex = 58679;

	class UIHIADoubleWeekActivityPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHIADoubleWeekActivityPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x38D90);
		}
		static ::System::Func_2<::PLDJFGCHMKK*, ::HGAJKHIMKJP*>** StaticGet___9__23_1()
		{
			return (::System::Func_2<::PLDJFGCHMKK*, ::HGAJKHIMKJP*>**)Il2CppClass::FromTypeDefinitionIndex(UIHIADoubleWeekActivityPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x38D98);
		}
		static ::System::Func_2<::IOJPIAIFGKO*, ::System::Boolean>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::IOJPIAIFGKO*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHIADoubleWeekActivityPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x38DA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshView_b__11_0(::IOJPIAIFGKO* reward)
		{
			return ((::System::Boolean(*)(::PVOID, ::IOJPIAIFGKO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__11_0_OFFSET))(this, reward);
		}

		::HGAJKHIMKJP* _TryTakeAllBingoRewards_b__23_1(::PLDJFGCHMKK* reward)
		{
			return ((::HGAJKHIMKJP*(*)(::PVOID, ::PLDJFGCHMKK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__TRYTAKEALLBINGOREWARDS_B__23_1_OFFSET))(this, reward);
		}
	};
}
