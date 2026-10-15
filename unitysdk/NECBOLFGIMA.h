#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EFreeStyleControlMode.h"
class IMPNPPMLNPH;

#define NECBOLFGIMA_CTOR_OFFSET UNITYSDK_OFFSET(0xE590)

inline static constexpr unsigned int NECBOLFGIMA_TypeDefinitionIndex = 57269;

	struct alignas(8) NECBOLFGIMA
	{
		::RPG::GameCore::EFreeStyleControlMode FCGFFAJIBKA; // 0x10
		::System::Byte _padding0[0x4];
		::IMPNPPMLNPH* CIKPBGDIABO; // 0x18
		::System::Void _ctor(::RPG::GameCore::EFreeStyleControlMode a1, ::IMPNPPMLNPH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EFreeStyleControlMode, ::IMPNPPMLNPH*))((::PBYTE)hIl2Cpp + NECBOLFGIMA_CTOR_OFFSET))(this, a1, a2);
		}

	};
