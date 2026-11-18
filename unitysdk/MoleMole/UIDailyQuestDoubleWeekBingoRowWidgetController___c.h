#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIDAILYQUESTDOUBLEWEEKBINGOROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1800B710)
#define MOLEMOLE_UIDAILYQUESTDOUBLEWEEKBINGOROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1800B750)
#define MOLEMOLE_UIDAILYQUESTDOUBLEWEEKBINGOROWWIDGETCONTROLLER___C__INITVIEW_B__6_0_OFFSET UNITYSDK_OFFSET(0x1800B760)

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyQuestDoubleWeekBingoRowWidgetController___c_TypeDefinitionIndex = 39667;

	class UIDailyQuestDoubleWeekBingoRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIDailyQuestDoubleWeekBingoRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x48980);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__6_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIDailyQuestDoubleWeekBingoRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x48988);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTDOUBLEWEEKBINGOROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTDOUBLEWEEKBINGOROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _InitView_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTDOUBLEWEEKBINGOROWWIDGETCONTROLLER___C__INITVIEW_B__6_0_OFFSET))(this);
		}
	};
}
