#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define EHMAAAKOAGP_CTOR_OFFSET UNITYSDK_OFFSET(0x154B2D30)
#define EHMAAAKOAGP_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x154B2B00)
#define EHMAAAKOAGP_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x154B2B40)
#define EHMAAAKOAGP_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x154B27D0)
#define EHMAAAKOAGP_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x154B27E0)

inline static constexpr unsigned int EHMAAAKOAGP_TypeDefinitionIndex = 56148;

	class EHMAAAKOAGP : public ::DBGDNLLDPFI
	{
	public:
		::System::UInt32 AIMGACMOMDD; // 0x10
		::System::UInt32 BNCODJLHDMN; // 0x14
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint KHBBNDBJAFK; // 0x20
		::RPG::GameCore::FixPoint IFLBAAABKAI; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMAAAKOAGP_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMAAAKOAGP_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMAAAKOAGP_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMAAAKOAGP_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMAAAKOAGP_ELEPDOMDAGA_OFFSET))(this);
		}

	};
