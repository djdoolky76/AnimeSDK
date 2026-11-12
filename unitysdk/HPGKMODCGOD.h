#pragma once
#include "unitysdk/unitysdk.h"

#define HPGKMODCGOD_CTOR_OFFSET UNITYSDK_OFFSET(0x16D66750)
#define HPGKMODCGOD_INTERP_OFFSET UNITYSDK_OFFSET(0x16D667A0)

inline static constexpr unsigned int HPGKMODCGOD_TypeDefinitionIndex = 76150;

	class HPGKMODCGOD
	{
	public:
		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HPGKMODCGOD_CTOR_OFFSET))(this, a1);
		}

		::System::Void Interp(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HPGKMODCGOD_INTERP_OFFSET))(this, a1, a2, a3);
		}

	};
