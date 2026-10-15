#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKFDNGOHNPC.h"

#define KIEBHFEDDDP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8D2C00)
#define KIEBHFEDDDP_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1C8D2C10)

inline static constexpr unsigned int KIEBHFEDDDP_TypeDefinitionIndex = 42208;

	class KIEBHFEDDDP : public ::CKFDNGOHNPC
	{
	public:
		::System::Single PGMIOKKLHIE; // 0x18
		::System::Single HBDJCFFDGDD; // 0x1C
		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KIEBHFEDDDP_CTOR_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KIEBHFEDDDP_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
