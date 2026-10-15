#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIDPCOMKMKJ.h"

#define CDLDBONPLMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8AF2B0)
#define CDLDBONPLMG_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1C8AF2C0)

inline static constexpr unsigned int CDLDBONPLMG_TypeDefinitionIndex = 42469;

	class CDLDBONPLMG : public ::KIDPCOMKMKJ
	{
	public:
		::System::Single HBDJCFFDGDD; // 0x18
		::System::Single PGMIOKKLHIE; // 0x1C
		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CDLDBONPLMG_CTOR_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CDLDBONPLMG_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
