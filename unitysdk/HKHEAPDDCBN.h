#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define HKHEAPDDCBN_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x998DA0)

inline static constexpr unsigned int HKHEAPDDCBN_TypeDefinitionIndex = 29121;

struct alignas(4) HKHEAPDDCBN
{
	::System::Int32 HNBBGAALJEO; // 0x10
	::System::Single BJHDFNLADKG; // 0x14
	::System::Boolean PAJNCNHJDKM; // 0x18
	::System::Byte _padding0[0x3];
	::System::Int32 JDGOFEGBMBF; // 0x1C

	::System::Void NPOLNFDBOOD(::System::Int32 NOIABALJFLN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HKHEAPDDCBN_NPOLNFDBOOD_OFFSET))(this, NOIABALJFLN);
	}
};
