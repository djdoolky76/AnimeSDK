#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EGMJAPMDEIH_PKKAJCINJNP;
class HGAJKHIMKJP;
namespace MoleMole { class UIDailyQuestHandBookWidgetController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18078E80)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS13_0__TRYTAKEVITALITYREWARDS_B__0_OFFSET UNITYSDK_OFFSET(0x18078E90)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS13_0__TRYTAKEVITALITYREWARDS_B__1_OFFSET UNITYSDK_OFFSET(0x18079090)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS13_0__TRYTAKEVITALITYREWARDS_B__2_OFFSET UNITYSDK_OFFSET(0x18079030)

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyQuestHandBookWidgetController___c__DisplayClass13_0_TypeDefinitionIndex = 45271;

	class UIDailyQuestHandBookWidgetController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::EGMJAPMDEIH_PKKAJCINJNP* questGroup; // 0x10
		::MoleMole::UIDailyQuestHandBookWidgetController* __4__this; // 0x18
		::System::Action* __9__2; // 0x20
		::System::Int32 formerTakeVitalityLevel; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryTakeVitalityRewards_b__0(::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* items)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS13_0__TRYTAKEVITALITYREWARDS_B__0_OFFSET))(this, items);
		}

		::System::Void _TryTakeVitalityRewards_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS13_0__TRYTAKEVITALITYREWARDS_B__2_OFFSET))(this);
		}

		::System::Void _TryTakeVitalityRewards_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS13_0__TRYTAKEVITALITYREWARDS_B__1_OFFSET))(this);
		}
	};
}
