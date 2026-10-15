#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEDMHFPPBHN;

#define DMOJAEDFBID___C__DISPLAYCLASS80_0_CTOR_OFFSET UNITYSDK_OFFSET(0xFECD360)
#define DMOJAEDFBID___C__DISPLAYCLASS80_0___PRUNEITEMS_B__0_OFFSET UNITYSDK_OFFSET(0xFECDB50)

	class DMOJAEDFBID___c__DisplayClass80_0 : public ::System::Object
	{
	public:
		::GEDMHFPPBHN* item; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOJAEDFBID___C__DISPLAYCLASS80_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __PruneItems_b__0(::GEDMHFPPBHN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + DMOJAEDFBID___C__DISPLAYCLASS80_0___PRUNEITEMS_B__0_OFFSET))(this, a1);
		}

	};
