#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHADLBDBHNA.h"

#define DKFLMHICIJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F5A10)

	class DKFLMHICIJG : public ::GHADLBDBHNA
	{
	public:
		::System::Boolean LHECEINIKOA; // 0x18
		::System::Byte _padding0[0x7];
		::System::UInt64 CKLCDAGMFKP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKFLMHICIJG_CTOR_OFFSET))(this);
		}

	};
