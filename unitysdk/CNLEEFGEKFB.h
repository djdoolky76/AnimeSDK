#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"

#define CNLEEFGEKFB_CTOR_OFFSET UNITYSDK_OFFSET(0x3C29DD0)
#define CNLEEFGEKFB_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x3C29DF0)

	struct alignas(4) CNLEEFGEKFB
	{
		::System::Boolean HPGAOBONHOK; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::MVector3 PMPIDAPFIHE; // 0x14
		::System::Int32 JEJNAIFAMKO; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLEEFGEKFB_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLEEFGEKFB_KHGIKBFDLFB_OFFSET))(this);
		}

	};
