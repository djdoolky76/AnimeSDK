#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MFGPOKOCFCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C925460)

inline static constexpr unsigned int MFGPOKOCFCJ_TypeDefinitionIndex = 43679;

	class MFGPOKOCFCJ : public ::System::Object
	{
	public:
		::System::Single HHGKNAAHFHM; // 0x10
		::System::Single FEJIFAIDOMI; // 0x14
		::System::Single BFPEKOGAALP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFGPOKOCFCJ_CTOR_OFFSET))(this);
		}

	};
