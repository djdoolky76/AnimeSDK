#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define GJEKJAJDBFF_CTOR_OFFSET UNITYSDK_OFFSET(0x2E7C140)

inline static constexpr unsigned int GJEKJAJDBFF_TypeDefinitionIndex = 73561;

	struct alignas(8) GJEKJAJDBFF
	{
		::System::String* NJLNMFAINJE; // 0x10
		::System::Single PBLDJPGEHAF; // 0x18
		::System::Boolean MODGIKJDIHB; // 0x1C
		::System::Void _ctor(::System::String* a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + GJEKJAJDBFF_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
