#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JOHLECDICBB.h"

#define CKCNLNNFGCN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C45450)
#define CKCNLNNFGCN_CTOR_OFFSET UNITYSDK_OFFSET(0x3C45450)

inline static constexpr unsigned int CKCNLNNFGCN_TypeDefinitionIndex = 6291;

	struct alignas(4) CKCNLNNFGCN
	{
		::JOHLECDICBB ODKBFFBBPKC; // 0x10
		::System::Single IDKONBFPBLH; // 0x44
		::System::Void _ctor(::JOHLECDICBB a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JOHLECDICBB, ::System::Single))((::PBYTE)hIl2Cpp + CKCNLNNFGCN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::JOHLECDICBB a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JOHLECDICBB, ::System::Single))((::PBYTE)hIl2Cpp + CKCNLNNFGCN_CTOR_1_OFFSET))(this, a1, a2);
		}

	};
