#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKFDNGOHNPC.h"

#define PBNKFMMKPBA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9A4CE0)
#define PBNKFMMKPBA_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1C9A4CF0)
#define PBNKFMMKPBA__START_B__1_0_OFFSET UNITYSDK_OFFSET(0x1C9A4EC0)

inline static constexpr unsigned int PBNKFMMKPBA_TypeDefinitionIndex = 42207;

	class PBNKFMMKPBA : public ::CKFDNGOHNPC
	{
	public:
		::System::UInt32 NIBGKEGDFFP; // 0x18
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PBNKFMMKPBA_CTOR_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNKFMMKPBA_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void _Start_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNKFMMKPBA__START_B__1_0_OFFSET))(this);
		}

	};
