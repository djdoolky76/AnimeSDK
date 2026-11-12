#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKFDNGOHNPC.h"

#define HHNNLLGDBKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC90B10)
#define HHNNLLGDBKK_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1DC90B20)
#define HHNNLLGDBKK_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1DC90BA0)

inline static constexpr unsigned int HHNNLLGDBKK_TypeDefinitionIndex = 43172;

	class HHNNLLGDBKK : public ::CKFDNGOHNPC
	{
	public:
		::System::Single PGMIOKKLHIE; // 0x18
		::System::Single HBDJCFFDGDD; // 0x1C
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
