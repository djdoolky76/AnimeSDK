#pragma once
#include "unitysdk/unitysdk.h"
class NNDAJDLAHNC;

#define MPJFIPNGENE_LPDMNOBJLJP_CTOR_OFFSET UNITYSDK_OFFSET(0x3083670)

inline static constexpr unsigned int MPJFIPNGENE_LPDMNOBJLJP_TypeDefinitionIndex = 45103;

	struct alignas(8) MPJFIPNGENE_LPDMNOBJLJP
	{
		::System::Boolean GPCDMHMDIHC; // 0x10
		::System::Byte _padding0[0x7];
		::NNDAJDLAHNC* JCHFCNFHCMM; // 0x18
		::System::Void _ctor(::System::Boolean a1, ::NNDAJDLAHNC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::NNDAJDLAHNC*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_LPDMNOBJLJP_CTOR_OFFSET))(this, a1, a2);
		}

	};
