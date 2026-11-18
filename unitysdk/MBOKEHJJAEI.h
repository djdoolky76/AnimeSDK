#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFGHMMCEKND.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define MBOKEHJJAEI_EXECUTE_OFFSET UNITYSDK_OFFSET(0x749FC0)

inline static constexpr unsigned int MBOKEHJJAEI_TypeDefinitionIndex = 76097;

struct alignas(8) MBOKEHJJAEI
{
	::Unity::Collections::NativeArray_1<::HFGHMMCEKND> PEDDCODBDOA; // 0x10

	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MBOKEHJJAEI_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};
