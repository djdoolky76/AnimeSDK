#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Type; }

#define EKOGCACGADH_BLBONAKCOAD_CTOR_OFFSET UNITYSDK_OFFSET(0xE590)
#define EKOGCACGADH_BLBONAKCOAD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2E746F0)

inline static constexpr unsigned int EKOGCACGADH_BLBONAKCOAD_TypeDefinitionIndex = 71350;

	struct alignas(8) EKOGCACGADH_BLBONAKCOAD
	{
		::System::Int32 JGGDKOCIEGH; // 0x10
		::System::Byte _padding0[0x4];
		::System::Type* GMCNLFICNOB; // 0x18
		::System::Void _ctor(::System::Int32 a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + EKOGCACGADH_BLBONAKCOAD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOGCACGADH_BLBONAKCOAD_GETHASHCODE_OFFSET))(this);
		}

	};
