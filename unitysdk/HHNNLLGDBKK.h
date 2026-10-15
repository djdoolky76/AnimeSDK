#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKFDNGOHNPC.h"

#define HHNNLLGDBKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CACC0E0)
#define HHNNLLGDBKK_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1CACC0F0)
#define HHNNLLGDBKK_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1CACC170)

	class HHNNLLGDBKK : public ::CKFDNGOHNPC
	{
	public:
		::System::Single HBDJCFFDGDD; // 0x18
		::System::Single PGMIOKKLHIE; // 0x1C
		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HHNNLLGDBKK_CTOR_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNNLLGDBKK_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HHNNLLGDBKK_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
