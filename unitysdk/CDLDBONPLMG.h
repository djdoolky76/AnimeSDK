#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIDPCOMKMKJ.h"

#define CDLDBONPLMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DD560)
#define CDLDBONPLMG_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1C8DD570)

	class CDLDBONPLMG : public ::KIDPCOMKMKJ
	{
	public:
		::System::Single PGMIOKKLHIE; // 0x18
		::System::Single HBDJCFFDGDD; // 0x1C
		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CDLDBONPLMG_CTOR_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CDLDBONPLMG_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
