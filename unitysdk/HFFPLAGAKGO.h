#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class CBHALHKAKLC_OMCMPLFMCAM;

#define HFFPLAGAKGO_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x771770)
#define HFFPLAGAKGO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x771720)
#define HFFPLAGAKGO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x771710)
#define HFFPLAGAKGO__CTOR_OFFSET UNITYSDK_OFFSET(0x7716E0)

inline static constexpr unsigned int HFFPLAGAKGO_TypeDefinitionIndex = 41029;

struct alignas(4) HFFPLAGAKGO
{
	::System::Boolean HCOODGGHCKK; // 0x10
	::System::Byte _padding0[0x3];
	::System::UInt32 BFNLGMBNCAD; // 0x14
	::System::UInt32 FPJJKEGPFNG; // 0x18

	::System::Void _ctor(::CBHALHKAKLC_OMCMPLFMCAM* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::CBHALHKAKLC_OMCMPLFMCAM*))((::PBYTE)hIl2Cpp + HFFPLAGAKGO__CTOR_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void _ctor_1(::System::UInt32 BFNLGMBNCAD, ::System::UInt32 FPJJKEGPFNG, ::System::Boolean HCOODGGHCKK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + HFFPLAGAKGO__CTOR_1_OFFSET))(this, BFNLGMBNCAD, FPJJKEGPFNG, HCOODGGHCKK);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFPLAGAKGO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFPLAGAKGO_JDAPDDEOCEA_OFFSET))(this);
	}
};
