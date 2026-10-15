#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPFGOGOLBI.h"
class ILMMNCLCDIM;

#define EPIPPAELOPB_CTOR_OFFSET UNITYSDK_OFFSET(0x155D54A0)
#define EPIPPAELOPB_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x155D5320)
#define EPIPPAELOPB_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0x155D53D0)

	class EPIPPAELOPB : public ::GJPFGOGOLBI
	{
	public:
		::ILMMNCLCDIM* BDGPKJKENEP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIPPAELOPB_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIPPAELOPB_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIPPAELOPB_NLBNJGKAMII_OFFSET))(this);
		}

	};
