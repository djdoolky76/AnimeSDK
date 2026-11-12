#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define ECDBNGNLBPI_CTOR_OFFSET UNITYSDK_OFFSET(0x13ABBEC0)
#define ECDBNGNLBPI_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x13ABBDA0)
#define ECDBNGNLBPI_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x13ABBDE0)
#define ECDBNGNLBPI_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x13ABBB70)
#define ECDBNGNLBPI_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x13ABBB80)

inline static constexpr unsigned int ECDBNGNLBPI_TypeDefinitionIndex = 57372;

	class ECDBNGNLBPI : public ::DBGDNLLDPFI
	{
	public:
		::System::UInt32 MEKEKBMGMPO; // 0x10
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x14
		::System::UInt32 EFAIIOHKFGD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECDBNGNLBPI_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + ECDBNGNLBPI_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECDBNGNLBPI_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECDBNGNLBPI_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECDBNGNLBPI_ELEPDOMDAGA_OFFSET))(this);
		}

	};
