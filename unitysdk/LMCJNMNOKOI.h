#pragma once
#include "unitysdk/unitysdk.h"

#define LMCJNMNOKOI_CTOR_OFFSET UNITYSDK_OFFSET(0x3E3B450)
#define LMCJNMNOKOI_GET_DAMAGEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x7CEEA0)
#define LMCJNMNOKOI_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x7CEA10)

inline static constexpr unsigned int LMCJNMNOKOI_TypeDefinitionIndex = 73748;

	struct alignas(4) LMCJNMNOKOI
	{
		::System::Single _DamageMultiplier_k__BackingField; // 0x10
		::System::Int32 _Level_k__BackingField; // 0x14
		::System::Void _ctor(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + LMCJNMNOKOI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single get_DamageMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCJNMNOKOI_GET_DAMAGEMULTIPLIER_OFFSET))(this);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCJNMNOKOI_GET_LEVEL_OFFSET))(this);
		}

	};
