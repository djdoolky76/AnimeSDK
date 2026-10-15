#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ICAILHEHIOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C68E550)

	class ICAILHEHIOC : public ::System::Object
	{
	public:
		::System::UInt32 KGCFBNPIFNH; // 0x10
		::System::UInt32 LNKODNKMEEM; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICAILHEHIOC_CTOR_OFFSET))(this);
		}

	};
