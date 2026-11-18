#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IFMDDIOEJGI.h"

#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___C__DISPLAYCLASS8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14E27630)
#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___C__DISPLAYCLASS8_1__ONSCROLLITEMUPDATE_B__2_OFFSET UNITYSDK_OFFSET(0x14E27640)

namespace MoleMole
{
	inline static constexpr unsigned int UIVRBossCardWidgetController___c__DisplayClass8_1_TypeDefinitionIndex = 64314;

	template <typename T>
	class UIVRBossCardWidgetController___c__DisplayClass8_1 : public ::System::Object
	{
	public:
		::System::Int32 materialItemId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___C__DISPLAYCLASS8_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnScrollItemUpdate_b__2(::IFMDDIOEJGI preview)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFMDDIOEJGI))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___C__DISPLAYCLASS8_1__ONSCROLLITEMUPDATE_B__2_OFFSET))(this, preview);
		}
	};
}
