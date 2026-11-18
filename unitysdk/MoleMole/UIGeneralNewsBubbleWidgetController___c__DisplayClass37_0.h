#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OEDGJAMMOIB;

#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18047420)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS37_0__UPDATEPOSITION_B__1_OFFSET UNITYSDK_OFFSET(0x18047430)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS37_0__UPDATEPOSITION_B__2_OFFSET UNITYSDK_OFFSET(0x18047450)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleWidgetController___c__DisplayClass37_0_TypeDefinitionIndex = 69186;

	class UIGeneralNewsBubbleWidgetController___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::OEDGJAMMOIB* pos; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Single _UpdatePosition_b__1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS37_0__UPDATEPOSITION_B__1_OFFSET))(this);
		}

		::System::Void _UpdatePosition_b__2(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS37_0__UPDATEPOSITION_B__2_OFFSET))(this, v);
		}
	};
}
