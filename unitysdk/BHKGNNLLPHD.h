#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define BHKGNNLLPHD_CTOR_OFFSET UNITYSDK_OFFSET(0xBB46E00)
#define BHKGNNLLPHD_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xBB46BD0)
#define BHKGNNLLPHD_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xBB46C10)
#define BHKGNNLLPHD_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xBB468A0)
#define BHKGNNLLPHD_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xBB468B0)

inline static constexpr unsigned int BHKGNNLLPHD_TypeDefinitionIndex = 57359;

	class BHKGNNLLPHD : public ::DBGDNLLDPFI
	{
	public:
		::System::UInt32 BNCODJLHDMN; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint KHBBNDBJAFK; // 0x18
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x20
		::System::UInt32 AIMGACMOMDD; // 0x24
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
