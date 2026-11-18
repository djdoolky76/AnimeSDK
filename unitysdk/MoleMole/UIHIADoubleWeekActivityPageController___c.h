#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGAJKHIMKJP;
class IOJPIAIFGKO;
class PLDJFGCHMKK;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A273690)
#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2736D0)
#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__REFRESHVIEW_B__12_0_OFFSET UNITYSDK_OFFSET(0x1A2736E0)
#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__TRYTAKEALLBINGOREWARDS_B__24_1_OFFSET UNITYSDK_OFFSET(0x1A273710)

namespace MoleMole
{
	inline static constexpr unsigned int UIHIADoubleWeekActivityPageController___c_TypeDefinitionIndex = 55982;

	class UIHIADoubleWeekActivityPageController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::IOJPIAIFGKO*, ::System::Boolean>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::IOJPIAIFGKO*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHIADoubleWeekActivityPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C1E0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHIADoubleWeekActivityPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C1E8);
		}
		static ::System::Func_2<::PLDJFGCHMKK*, ::HGAJKHIMKJP*>** StaticGet___9__24_1()
		{
			return (::System::Func_2<::PLDJFGCHMKK*, ::HGAJKHIMKJP*>**)Il2CppClass::FromTypeDefinitionIndex(UIHIADoubleWeekActivityPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C1F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshView_b__12_0(::IOJPIAIFGKO* reward)
		{
			return ((::System::Boolean(*)(::PVOID, ::IOJPIAIFGKO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__REFRESHVIEW_B__12_0_OFFSET))(this, reward);
		}

		::HGAJKHIMKJP* _TryTakeAllBingoRewards_b__24_1(::PLDJFGCHMKK* reward)
		{
			return ((::HGAJKHIMKJP*(*)(::PVOID, ::PLDJFGCHMKK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__TRYTAKEALLBINGOREWARDS_B__24_1_OFFSET))(this, reward);
		}
	};
}
