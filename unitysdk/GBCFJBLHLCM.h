#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"

#define GBCFJBLHLCM_CTOR_OFFSET UNITYSDK_OFFSET(0x159402B0)
#define GBCFJBLHLCM_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x15940130)
#define GBCFJBLHLCM_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x15940170)
#define GBCFJBLHLCM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1593FEC0)
#define GBCFJBLHLCM_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x1593FED0)

inline static constexpr unsigned int GBCFJBLHLCM_TypeDefinitionIndex = 56111;

	class GBCFJBLHLCM : public ::DBGDNLLDPFI
	{
	public:
		::System::UInt32 HCDEOKNIGKG; // 0x10
		::RPG::GameCore::TurnState MEPFOEEGBEA; // 0x14
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBCFJBLHLCM_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + GBCFJBLHLCM_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBCFJBLHLCM_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBCFJBLHLCM_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBCFJBLHLCM_ELEPDOMDAGA_OFFSET))(this);
		}

	};
