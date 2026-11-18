#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFGHMMCEKND.h"
#include "unitysdk/NHKLBKEABJB.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define HHAKIJEHACF_EXECUTE_OFFSET UNITYSDK_OFFSET(0x724C70)

inline static constexpr unsigned int HHAKIJEHACF_TypeDefinitionIndex = 41386;

struct alignas(8) HHAKIJEHACF
{
	::Unity::Collections::NativeArray_1<::HFGHMMCEKND> PEDDCODBDOA; // 0x10
	::System::Byte _padding0[0x8];
	::NHKLBKEABJB JOIKLFJECCD; // 0x20

	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HHAKIJEHACF_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};
