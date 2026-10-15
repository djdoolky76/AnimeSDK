#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NMHBFNBMFIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C972D90)

	class NMHBFNBMFIH : public ::System::Object
	{
	public:
		::System::UInt32 PJJDMBCIBDM; // 0x10
		::System::Boolean PIFAKJFLGFH; // 0x14
		::System::Boolean FHHPOLAMHDB; // 0x15
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHBFNBMFIH_CTOR_OFFSET))(this);
		}

	};
