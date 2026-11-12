#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNCLNAFILDC.h"
class KFELGAIGHAP;

#define ALGPJHBFKOA_CTOR_OFFSET UNITYSDK_OFFSET(0x163D7D60)
#define ALGPJHBFKOA_GNDEALGPILP_OFFSET UNITYSDK_OFFSET(0x163D77E0)
#define ALGPJHBFKOA_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x163D7A80)
#define ALGPJHBFKOA_KOHOGMCJHBH_OFFSET UNITYSDK_OFFSET(0x163D7710)
#define ALGPJHBFKOA_LHJBPEBMKDN_OFFSET UNITYSDK_OFFSET(0x163D7630)
#define ALGPJHBFKOA_MHDCDNHDBKB_OFFSET UNITYSDK_OFFSET(0x163D7A00)
#define ALGPJHBFKOA_NCBGDCINJEB_OFFSET UNITYSDK_OFFSET(0x163D7D50)

inline static constexpr unsigned int ALGPJHBFKOA_TypeDefinitionIndex = 60135;

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
