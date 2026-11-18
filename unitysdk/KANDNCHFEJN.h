#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFGHMMCEKND.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define KANDNCHFEJN_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7AA530)

inline static constexpr unsigned int KANDNCHFEJN_TypeDefinitionIndex = 57102;

struct alignas(8) KANDNCHFEJN
{
	::Unity::Collections::NativeArray_1<::HFGHMMCEKND> PEDDCODBDOA; // 0x10

	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KANDNCHFEJN_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};
