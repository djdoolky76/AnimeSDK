#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOOIJAGNMHI.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define CJIONBHFLPP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE9A90)
#define CJIONBHFLPP_EXECUTE_OFFSET UNITYSDK_OFFSET(0xE9A80)

inline static constexpr unsigned int CJIONBHFLPP_TypeDefinitionIndex = 71095;

	struct alignas(8) CJIONBHFLPP
	{
		::Unity::Collections::NativeArray_1<::EOOIJAGNMHI> PBAJCNKHLFG; // 0x10
		::System::Void Execute(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CJIONBHFLPP_EXECUTE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJIONBHFLPP_DISPOSE_OFFSET))(this);
		}

	};
