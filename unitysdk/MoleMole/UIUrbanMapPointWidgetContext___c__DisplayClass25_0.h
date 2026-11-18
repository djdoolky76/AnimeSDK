#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JDOLCBBOINH.h"

#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT___C__DISPLAYCLASS25_0__CALCULATESECTIONUNLOCK_B__0_OFFSET UNITYSDK_OFFSET(0x166FEC60)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x166FEC50)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointWidgetContext___c__DisplayClass25_0_TypeDefinitionIndex = 67850;

	class UIUrbanMapPointWidgetContext___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::Int32 partnerID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CalculateSectionUnlock_b__0(::JDOLCBBOINH sectionID)
		{
			return ((::System::Boolean(*)(::PVOID, ::JDOLCBBOINH))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT___C__DISPLAYCLASS25_0__CALCULATESECTIONUNLOCK_B__0_OFFSET))(this, sectionID);
		}
	};
}
