#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BNKJBBCKGMD;
class DNBCMHOHIEO;

#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17574250)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x17574260)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x17574310)

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyQuestHandBookWidgetController___c__DisplayClass11_0_TypeDefinitionIndex = 45275;

	class UIDailyQuestHandBookWidgetController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::BNKJBBCKGMD* poolConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshView_b__0(::DNBCMHOHIEO* l, ::DNBCMHOHIEO* r)
		{
			return ((::System::Int32(*)(::PVOID, ::DNBCMHOHIEO*, ::DNBCMHOHIEO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHVIEW_B__0_OFFSET))(this, l, r);
		}

		::System::Int32 _RefreshView_b__1(::DNBCMHOHIEO* l, ::DNBCMHOHIEO* r)
		{
			return ((::System::Int32(*)(::PVOID, ::DNBCMHOHIEO*, ::DNBCMHOHIEO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHVIEW_B__1_OFFSET))(this, l, r);
		}
	};
}
