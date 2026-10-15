#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PJPIEKNGCMC.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define PMDNKDCGAPA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDEAB0)
#define PMDNKDCGAPA_EXECUTE_OFFSET UNITYSDK_OFFSET(0xDEAA0)

	struct alignas(8) PMDNKDCGAPA
	{
		::Unity::Collections::NativeArray_1<::PJPIEKNGCMC> ENDAAPHNJIL; // 0x10
		::System::Byte _padding0[0x8];
		::System::Single ADPJPDDOLLK; // 0x20
		::System::Void Execute(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PMDNKDCGAPA_EXECUTE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDNKDCGAPA_DISPOSE_OFFSET))(this);
		}

	};
