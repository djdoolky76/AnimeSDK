#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNCLNAFILDC.h"
class KFELGAIGHAP;

#define ALGPJHBFKOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1556A4A0)
#define ALGPJHBFKOA_GNDEALGPILP_OFFSET UNITYSDK_OFFSET(0x15569DD0)
#define ALGPJHBFKOA_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1556A0C0)
#define ALGPJHBFKOA_KOHOGMCJHBH_OFFSET UNITYSDK_OFFSET(0x15569D00)
#define ALGPJHBFKOA_LHJBPEBMKDN_OFFSET UNITYSDK_OFFSET(0x15569C20)
#define ALGPJHBFKOA_MHDCDNHDBKB_OFFSET UNITYSDK_OFFSET(0x1556A040)
#define ALGPJHBFKOA_NCBGDCINJEB_OFFSET UNITYSDK_OFFSET(0x1556A490)

	class ALGPJHBFKOA : public ::CNCLNAFILDC
	{
	public:
		::KFELGAIGHAP* JCLKHGPAMAF; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGPJHBFKOA_CTOR_OFFSET))(this);
		}

		::System::Void LHJBPEBMKDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGPJHBFKOA_LHJBPEBMKDN_OFFSET))(this);
		}

		::System::Void KOHOGMCJHBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGPJHBFKOA_KOHOGMCJHBH_OFFSET))(this);
		}

		::System::Void GNDEALGPILP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGPJHBFKOA_GNDEALGPILP_OFFSET))(this);
		}

		::System::Void MHDCDNHDBKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGPJHBFKOA_MHDCDNHDBKB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ALGPJHBFKOA_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean NCBGDCINJEB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGPJHBFKOA_NCBGDCINJEB_OFFSET))(this);
		}

	};
