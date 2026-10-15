#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPDMDPFCDKJ.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define JLEFPBCCAGJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x113A0)
#define JLEFPBCCAGJ_EXECUTE_OFFSET UNITYSDK_OFFSET(0x113B0)

inline static constexpr unsigned int JLEFPBCCAGJ_TypeDefinitionIndex = 57792;

	struct alignas(8) JLEFPBCCAGJ
	{
		::Unity::Collections::NativeArray_1<::HPDMDPFCDKJ> MFACGAHGEJM; // 0x10
		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLEFPBCCAGJ_DISPOSE_OFFSET))(this);
		}

		::System::Void Execute(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JLEFPBCCAGJ_EXECUTE_OFFSET))(this, a1);
		}

	};
