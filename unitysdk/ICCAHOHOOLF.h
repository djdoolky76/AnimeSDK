#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEBBKBDGLLB.h"
#include "unitysdk/CNEKNGIFAPK.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define ICCAHOHOOLF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2E80E30)
#define ICCAHOHOOLF_EXECUTE_OFFSET UNITYSDK_OFFSET(0x2E80E40)
#define ICCAHOHOOLF_HFPJMFFFAFH_OFFSET UNITYSDK_OFFSET(0x2E80E20)

inline static constexpr unsigned int ICCAHOHOOLF_TypeDefinitionIndex = 71079;

	struct alignas(8) ICCAHOHOOLF
	{
		::Unity::Collections::NativeArray_1<::CEBBKBDGLLB> CFKLAGBPLHC; // 0x10
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeArray_1<::CNEKNGIFAPK> NMLLPDBFLHN; // 0x20
		::System::Byte _padding1[0x8];
		::System::Int32 MHBLAKKMAFK; // 0x30
		// static const ::System::Object IGCLEBENFLJ; // 0x0
		::System::Void HFPJMFFFAFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCAHOHOOLF_HFPJMFFFAFH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCAHOHOOLF_DISPOSE_OFFSET))(this);
		}

		::System::Void Execute(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICCAHOHOOLF_EXECUTE_OFFSET))(this, a1);
		}

	};
