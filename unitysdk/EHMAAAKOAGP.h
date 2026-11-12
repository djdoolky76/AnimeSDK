#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define EHMAAAKOAGP_CTOR_OFFSET UNITYSDK_OFFSET(0x163B1CC0)
#define EHMAAAKOAGP_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x163B1A90)
#define EHMAAAKOAGP_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x163B1AD0)
#define EHMAAAKOAGP_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x163B1760)
#define EHMAAAKOAGP_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x163B1770)

inline static constexpr unsigned int EHMAAAKOAGP_TypeDefinitionIndex = 57360;

	class EHMAAAKOAGP : public ::DBGDNLLDPFI
	{
	public:
		::RPG::GameCore::FixPoint KHBBNDBJAFK; // 0x10
		::RPG::GameCore::FixPoint IFLBAAABKAI; // 0x18
		::System::UInt32 AIMGACMOMDD; // 0x20
		::System::UInt32 BNCODJLHDMN; // 0x24
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x28
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
