#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
class IOJGBIAJBIC;

#define AICBMLHDOOJ_PJEMGKGLDOK_OFFSET UNITYSDK_OFFSET(0x3C298B0)

inline static constexpr unsigned int AICBMLHDOOJ_TypeDefinitionIndex = 36558;

	struct alignas(8) AICBMLHDOOJ
	{
		::RPG::MVector2 NKDECDGECFL; // 0x10
		::RPG::MVector2 KCBPBMOJOKJ; // 0x18
		::RPG::MVector2 GNOKDJHJJAB; // 0x20
		::System::Single GMMMJOHCGBM; // 0x28
		::System::Boolean PHFKFBLIBKG; // 0x2C
		::System::Byte _padding0[0x3];
		::IOJGBIAJBIC* BPKOEGBKBJM; // 0x30
		::System::Single PJEMGKGLDOK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AICBMLHDOOJ_PJEMGKGLDOK_OFFSET))(this);
		}

	};
