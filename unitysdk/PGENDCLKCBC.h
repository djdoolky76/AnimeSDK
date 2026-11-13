#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKFDNGOHNPC.h"

#define PGENDCLKCBC_CTOR_OFFSET UNITYSDK_OFFSET(0x176BD8D0)
#define PGENDCLKCBC_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x176BD6A0)
#define PGENDCLKCBC__START_B__0_0_OFFSET UNITYSDK_OFFSET(0x176BD8E0)

inline static constexpr unsigned int PGENDCLKCBC_TypeDefinitionIndex = 43181;

	class PGENDCLKCBC : public ::CKFDNGOHNPC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGENDCLKCBC_CTOR_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGENDCLKCBC_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void _Start_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGENDCLKCBC__START_B__0_0_OFFSET))(this);
		}

	};
