#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFPCEFGHPIN.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"

#define JCLBPHELEOC_APHNNGCLBDP_OFFSET UNITYSDK_OFFSET(0x1CB8F1D0)
#define JCLBPHELEOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB8F210)

	class JCLBPHELEOC : public ::System::Object
	{
	public:
		::MFPCEFGHPIN MNDFOPKBHKP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLBPHELEOC_CTOR_OFFSET))(this);
		}

		::System::ValueTuple APHNNGCLBDP()
		{
			return ((::System::ValueTuple(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLBPHELEOC_APHNNGCLBDP_OFFSET))(this);
		}

	};
