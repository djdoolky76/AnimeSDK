#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OABDFLPEHDO;

#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD1ED6E0)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C__DISPLAYCLASS5_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0xD1EE8D0)

namespace RPG::Client
{
	class GridFightRefTraitLayerCalculator___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::UInt32 rid; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__0(::OABDFLPEHDO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OABDFLPEHDO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C__DISPLAYCLASS5_0___CTOR_B__0_OFFSET))(this, a1);
		}

	};
}
