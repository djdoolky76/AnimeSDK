#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"

#define IKPFGEGLDMD_CTOR_OFFSET UNITYSDK_OFFSET(0x17473E70)
#define IKPFGEGLDMD_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x17473D50)
#define IKPFGEGLDMD_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x17473D90)
#define IKPFGEGLDMD_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x17473B10)
#define IKPFGEGLDMD_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x17473B20)

inline static constexpr unsigned int IKPFGEGLDMD_TypeDefinitionIndex = 57344;

	class IKPFGEGLDMD : public ::DBGDNLLDPFI
	{
	public:
		::RPG::GameCore::TurnState PIGMOFHJCOG; // 0x10
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPFGEGLDMD_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPFGEGLDMD_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPFGEGLDMD_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPFGEGLDMD_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPFGEGLDMD_ELEPDOMDAGA_OFFSET))(this);
		}

	};
