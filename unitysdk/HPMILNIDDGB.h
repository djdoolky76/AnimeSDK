#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEABHDCGLE.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define HPMILNIDDGB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2E80910)
#define HPMILNIDDGB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x2E80920)
#define HPMILNIDDGB_HFPJMFFFAFH_OFFSET UNITYSDK_OFFSET(0x2E80900)

inline static constexpr unsigned int HPMILNIDDGB_TypeDefinitionIndex = 71077;

	struct alignas(8) HPMILNIDDGB
	{
		::Unity::Collections::NativeArray_1<::JJEABHDCGLE> KJEDBIIJEDI; // 0x10
		::System::Void HFPJMFFFAFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPMILNIDDGB_HFPJMFFFAFH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPMILNIDDGB_DISPOSE_OFFSET))(this);
		}

		::System::Void Execute(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HPMILNIDDGB_EXECUTE_OFFSET))(this, a1);
		}

	};
