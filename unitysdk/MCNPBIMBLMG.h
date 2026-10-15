#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MCNPBIMBLMG_CTOR_OFFSET UNITYSDK_OFFSET(0xB88A5D0)
#define MCNPBIMBLMG_EEEOBMNPCEK_OFFSET UNITYSDK_OFFSET(0xB88A540)
#define MCNPBIMBLMG_IGDHHPLFLCH_OFFSET UNITYSDK_OFFSET(0xB88A580)

	class MCNPBIMBLMG : public ::System::Object
	{
	public:
		::System::UInt32 NMFFGLHFDDE; // 0x10
		::System::UInt32 BHGOIEGKPPD; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCNPBIMBLMG_CTOR_OFFSET))(this);
		}

		::System::Void EEEOBMNPCEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCNPBIMBLMG_EEEOBMNPCEK_OFFSET))(this);
		}

		::System::Boolean IGDHHPLFLCH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCNPBIMBLMG_IGDHHPLFLCH_OFFSET))(this);
		}

	};
