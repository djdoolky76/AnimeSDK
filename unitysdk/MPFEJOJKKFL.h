#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OKPFLOFNBJC.h"
#include "unitysdk/RPG/GameCore/FiveDimOrthoDirection.h"

#define MPFEJOJKKFL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C8FFF30)
#define MPFEJOJKKFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8FFFD0)

inline static constexpr unsigned int MPFEJOJKKFL_TypeDefinitionIndex = 43531;

	class MPFEJOJKKFL : public ::OKPFLOFNBJC
	{
	public:
		::System::Boolean NBKDDFNGGBP; // 0x100
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FiveDimOrthoDirection FFHIEMCJDJJ; // 0x104
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPFEJOJKKFL_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPFEJOJKKFL_CLEAR_OFFSET))(this);
		}

	};
