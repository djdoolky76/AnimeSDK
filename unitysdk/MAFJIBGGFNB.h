#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNCLNAFILDC.h"

#define MAFJIBGGFNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1B6E0000)
#define MAFJIBGGFNB_GNDEALGPILP_OFFSET UNITYSDK_OFFSET(0x1B6DFF00)
#define MAFJIBGGFNB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1B6DFF80)
#define MAFJIBGGFNB_KOHOGMCJHBH_OFFSET UNITYSDK_OFFSET(0x1B6DFEC0)
#define MAFJIBGGFNB_LHJBPEBMKDN_OFFSET UNITYSDK_OFFSET(0x1B6DFE30)
#define MAFJIBGGFNB_MHDCDNHDBKB_OFFSET UNITYSDK_OFFSET(0x1B6DFF40)
#define MAFJIBGGFNB_NCBGDCINJEB_OFFSET UNITYSDK_OFFSET(0x1B6DFFF0)

inline static constexpr unsigned int MAFJIBGGFNB_TypeDefinitionIndex = 60131;

	class MAFJIBGGFNB : public ::CNCLNAFILDC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFJIBGGFNB_CTOR_OFFSET))(this);
		}

		::System::Void LHJBPEBMKDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFJIBGGFNB_LHJBPEBMKDN_OFFSET))(this);
		}

		::System::Void KOHOGMCJHBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFJIBGGFNB_KOHOGMCJHBH_OFFSET))(this);
		}

		::System::Void GNDEALGPILP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFJIBGGFNB_GNDEALGPILP_OFFSET))(this);
		}

		::System::Void MHDCDNHDBKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFJIBGGFNB_MHDCDNHDBKB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MAFJIBGGFNB_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean NCBGDCINJEB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFJIBGGFNB_NCBGDCINJEB_OFFSET))(this);
		}

	};
