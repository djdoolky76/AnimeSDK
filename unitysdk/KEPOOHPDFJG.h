#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define KEPOOHPDFJG_CTOR_OFFSET UNITYSDK_OFFSET(0xB37FA40)
#define KEPOOHPDFJG_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xB37F920)
#define KEPOOHPDFJG_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xB37F960)
#define KEPOOHPDFJG_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB37F6F0)
#define KEPOOHPDFJG_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xB37F700)

inline static constexpr unsigned int KEPOOHPDFJG_TypeDefinitionIndex = 56146;

	class KEPOOHPDFJG : public ::DBGDNLLDPFI
	{
	public:
		::System::UInt32 BNCODJLHDMN; // 0x10
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x14
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
