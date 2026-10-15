#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DBINPFBDKFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDA2F90)

inline static constexpr unsigned int DBINPFBDKFL_TypeDefinitionIndex = 43954;

	class DBINPFBDKFL : public ::System::Object
	{
	public:
		::System::Single HMLBNBFFKJJ; // 0x10
		::System::Single PJOOHHHALMC; // 0x14
		::System::Single HCJJICAMDGO; // 0x18
		::System::Single ICEEGOJAINA; // 0x1C
		::System::Single AKHAEIBGKIB; // 0x20
		::System::Boolean PLHKAONLAGC; // 0x24
		::System::Byte _padding0[0x1];
		::System::UInt16 OHPJFGAJMNA; // 0x26
		::System::Single DJJMMDAKLPE; // 0x28
		::System::Single LFFNELFOIEN; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBINPFBDKFL_CTOR_OFFSET))(this);
		}

	};
