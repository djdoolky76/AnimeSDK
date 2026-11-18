#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJAHOIFKDNI.h"
#include "unitysdk/NHKLBKEABJB.h"
#include "unitysdk/OCLOOAAGDIH.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define EGKKDKDBMHG_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7948E0)

inline static constexpr unsigned int EGKKDKDBMHG_TypeDefinitionIndex = 78095;

struct alignas(8) EGKKDKDBMHG
{
	::Unity::Collections::NativeArray_1<::MJAHOIFKDNI> MKGALJKAIPH; // 0x10
	::System::Byte _padding0[0x8];
	::Unity::Collections::NativeArray_1<::OCLOOAAGDIH> CCLKMHFENLC; // 0x20
	::System::Byte _padding1[0x8];
	::NHKLBKEABJB JOIKLFJECCD; // 0x30

	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EGKKDKDBMHG_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};
