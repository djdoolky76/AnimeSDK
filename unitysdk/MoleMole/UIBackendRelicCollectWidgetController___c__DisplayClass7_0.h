#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGAJKHIMKJP;

#define MOLEMOLE_UIBACKENDRELICCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19BBBB60)
#define MOLEMOLE_UIBACKENDRELICCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS7_0__MATCHFUNCCOLLECTED_B__0_OFFSET UNITYSDK_OFFSET(0x19BBBC90)

namespace MoleMole
{
	inline static constexpr unsigned int UIBackendRelicCollectWidgetController___c__DisplayClass7_0_TypeDefinitionIndex = 59300;

	class UIBackendRelicCollectWidgetController___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::HGAJKHIMKJP* arg1; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBACKENDRELICCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _MatchFuncCollected_b__0(::HGAJKHIMKJP* relic)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBACKENDRELICCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS7_0__MATCHFUNCCOLLECTED_B__0_OFFSET))(this, relic);
		}
	};
}
