#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

class AMFAHGEFDFJ;

#define BKCKJOIILED__CTOR_1_OFFSET UNITYSDK_OFFSET(0x747F30)
#define BKCKJOIILED__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3657B0)
#define BKCKJOIILED__CTOR_OFFSET UNITYSDK_OFFSET(0x3D5420)

inline static constexpr unsigned int BKCKJOIILED_TypeDefinitionIndex = 47212;

struct alignas(8) BKCKJOIILED
{
	::AMFAHGEFDFJ* HGJBHOONMAF; // 0x10
	::System::Nullable_1<::System::Int32> JLPKNDGJJGK; // 0x18

	::System::Void _ctor(::AMFAHGEFDFJ* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::AMFAHGEFDFJ*))((::PBYTE)hIl2Cpp + BKCKJOIILED__CTOR_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void _ctor_1(::AMFAHGEFDFJ* LJBPECKCCEA, ::System::Int32 NALFPPJFEKN)
	{
		return ((::System::Void(*)(::PVOID, ::AMFAHGEFDFJ*, ::System::Int32))((::PBYTE)hIl2Cpp + BKCKJOIILED__CTOR_1_OFFSET))(this, LJBPECKCCEA, NALFPPJFEKN);
	}

	::System::Void _ctor_2(::AMFAHGEFDFJ* LJBPECKCCEA, ::System::Nullable_1<::System::Int32> NALFPPJFEKN)
	{
		return ((::System::Void(*)(::PVOID, ::AMFAHGEFDFJ*, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + BKCKJOIILED__CTOR_2_OFFSET))(this, LJBPECKCCEA, NALFPPJFEKN);
	}
};
