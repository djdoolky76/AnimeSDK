#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OKPFLOFNBJC.h"
#include "unitysdk/RPG/GameCore/FiveDimOrthoDirection.h"

#define MPFEJOJKKFL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C92E320)
#define MPFEJOJKKFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C92E3D0)

	class MPFEJOJKKFL : public ::OKPFLOFNBJC
	{
	public:
		::RPG::GameCore::FiveDimOrthoDirection FFHIEMCJDJJ; // 0x100
		::System::Boolean NBKDDFNGGBP; // 0x104
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPFEJOJKKFL_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPFEJOJKKFL_CLEAR_OFFSET))(this);
		}

	};
