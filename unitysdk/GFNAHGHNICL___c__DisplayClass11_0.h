#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMMOFOBCINL;

#define GFNAHGHNICL___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0x159FD710)
#define GFNAHGHNICL___C__DISPLAYCLASS11_0__SYNC_B__0_OFFSET UNITYSDK_OFFSET(0x159FE8D0)

	class GFNAHGHNICL___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::Int32 i; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNAHGHNICL___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _Sync_b__0(::PMMOFOBCINL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PMMOFOBCINL*))((::PBYTE)hIl2Cpp + GFNAHGHNICL___C__DISPLAYCLASS11_0__SYNC_B__0_OFFSET))(this, a1);
		}

	};
