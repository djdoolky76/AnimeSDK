#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKFDNGOHNPC.h"

#define POFANILNFLM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9F9410)
#define POFANILNFLM_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1C9F9420)

	class POFANILNFLM : public ::CKFDNGOHNPC
	{
	public:
		::System::UInt32 MCIKBOMPBEI; // 0x18
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POFANILNFLM_CTOR_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFANILNFLM_NPAFMEBNFOB_OFFSET))(this);
		}

	};
