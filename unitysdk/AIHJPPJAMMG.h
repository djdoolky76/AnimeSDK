#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFGHMMCEKND.h"
#include "unitysdk/NHKLBKEABJB.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define AIHJPPJAMMG_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7C8CA0)

inline static constexpr unsigned int AIHJPPJAMMG_TypeDefinitionIndex = 48697;

struct alignas(8) AIHJPPJAMMG
{
	::Unity::Collections::NativeArray_1<::HFGHMMCEKND> PEDDCODBDOA; // 0x10
	::System::Byte _padding0[0x8];
	::NHKLBKEABJB JOIKLFJECCD; // 0x20

	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AIHJPPJAMMG_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};
