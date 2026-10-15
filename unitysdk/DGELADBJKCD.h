#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGELADBJKCD;

#define DGELADBJKCD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xE846120)
#define DGELADBJKCD_CTOR_OFFSET UNITYSDK_OFFSET(0xE8461A0)
#define DGELADBJKCD_GET_BIRDID_OFFSET UNITYSDK_OFFSET(0xE846100)
#define DGELADBJKCD_SET_BIRDID_OFFSET UNITYSDK_OFFSET(0xE846110)

	class DGELADBJKCD : public ::System::Object
	{
	public:
		::System::UInt32 _BirdID_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGELADBJKCD_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_BirdID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGELADBJKCD_GET_BIRDID_OFFSET))(this);
		}

		::System::Void set_BirdID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DGELADBJKCD_SET_BIRDID_OFFSET))(this, a1);
		}

		static ::DGELADBJKCD* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::DGELADBJKCD*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DGELADBJKCD_BPLPBPMEODA_OFFSET))(a1);
		}

	};
