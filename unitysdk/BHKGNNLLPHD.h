#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define BHKGNNLLPHD_CTOR_OFFSET UNITYSDK_OFFSET(0xB48E010)
#define BHKGNNLLPHD_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xB48DDE0)
#define BHKGNNLLPHD_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xB48DE20)
#define BHKGNNLLPHD_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB48DAB0)
#define BHKGNNLLPHD_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xB48DAC0)

	class BHKGNNLLPHD : public ::DBGDNLLDPFI
	{
	public:
		::System::UInt32 BNCODJLHDMN; // 0x10
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x14
		::System::UInt32 AIMGACMOMDD; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint KHBBNDBJAFK; // 0x20
		::RPG::GameCore::FixPoint IFLBAAABKAI; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHKGNNLLPHD_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + BHKGNNLLPHD_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHKGNNLLPHD_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHKGNNLLPHD_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHKGNNLLPHD_ELEPDOMDAGA_OFFSET))(this);
		}

	};
