#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ReadOnlyMemory_1.h"

#define PGOGABMCDCF_CTOR_OFFSET UNITYSDK_OFFSET(0x2EDF140)

inline static constexpr unsigned int PGOGABMCDCF_TypeDefinitionIndex = 36889;

	struct alignas(8) PGOGABMCDCF
	{
		::System::ReadOnlyMemory_1<::System::Byte> DKEJNELHLKI; // 0x10
		::System::Void _ctor(::System::ReadOnlyMemory_1<::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlyMemory_1<::System::Byte>))((::PBYTE)hIl2Cpp + PGOGABMCDCF_CTOR_OFFSET))(this, a1);
		}

	};
