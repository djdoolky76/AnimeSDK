#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFPCEFGHPIN.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define JCLBPHELEOC_APHNNGCLBDP_OFFSET UNITYSDK_OFFSET(0x1CB60ED0)
#define JCLBPHELEOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB60F10)

inline static constexpr unsigned int JCLBPHELEOC_TypeDefinitionIndex = 42226;

	class JCLBPHELEOC : public ::System::Object
	{
	public:
		::MFPCEFGHPIN MNDFOPKBHKP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLBPHELEOC_CTOR_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> APHNNGCLBDP()
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLBPHELEOC_APHNNGCLBDP_OFFSET))(this);
		}

	};
