#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define KEPOOHPDFJG_CTOR_OFFSET UNITYSDK_OFFSET(0xB387630)
#define KEPOOHPDFJG_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xB387510)
#define KEPOOHPDFJG_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xB387550)
#define KEPOOHPDFJG_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB3872E0)
#define KEPOOHPDFJG_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xB3872F0)

	class KEPOOHPDFJG : public ::DBGDNLLDPFI
	{
	public:
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x10
		::System::UInt32 BNCODJLHDMN; // 0x14
		::System::UInt32 PCFNJODDJNN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPOOHPDFJG_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPOOHPDFJG_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPOOHPDFJG_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPOOHPDFJG_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPOOHPDFJG_ELEPDOMDAGA_OFFSET))(this);
		}

	};
