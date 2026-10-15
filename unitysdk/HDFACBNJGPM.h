#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KABEJCFNEJA.h"
class BKFDFLNHKIF;

#define HDFACBNJGPM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C900)
#define HDFACBNJGPM_JACCIPIIGNO_OFFSET UNITYSDK_OFFSET(0x3C2A210)

inline static constexpr unsigned int HDFACBNJGPM_TypeDefinitionIndex = 36947;

	struct alignas(8) HDFACBNJGPM
	{
		::System::UInt64 ONIGBGONALF; // 0x10
		::System::UInt32 FDKPCNBCGEG; // 0x18
		::System::Byte _padding0[0x4];
		::BKFDFLNHKIF* JKIHOLAKJFC; // 0x20
		::System::Void _ctor(::System::UInt64 a1, ::System::UInt32 a2, ::BKFDFLNHKIF* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::BKFDFLNHKIF*))((::PBYTE)hIl2Cpp + HDFACBNJGPM_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::KABEJCFNEJA JACCIPIIGNO()
		{
			return ((::KABEJCFNEJA(*)(::PVOID))((::PBYTE)hIl2Cpp + HDFACBNJGPM_JACCIPIIGNO_OFFSET))(this);
		}

	};
