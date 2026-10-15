#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPFGOGOLBI.h"
class KDCNOMHGMNO;

#define MDOALIMPNCN_CTOR_OFFSET UNITYSDK_OFFSET(0xB8B3CA0)
#define MDOALIMPNCN_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xB8B3B90)
#define MDOALIMPNCN_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0xB8B3C40)

	class MDOALIMPNCN : public ::GJPFGOGOLBI
	{
	public:
		::KDCNOMHGMNO* EHEHKFOELOK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDOALIMPNCN_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDOALIMPNCN_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDOALIMPNCN_NLBNJGKAMII_OFFSET))(this);
		}

	};
