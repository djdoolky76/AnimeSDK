#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define PPDPGJAGHMC_CTOR_OFFSET UNITYSDK_OFFSET(0xC37CDE0)
#define PPDPGJAGHMC_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xC37CCA0)
#define PPDPGJAGHMC_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xC37CCE0)
#define PPDPGJAGHMC_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xC37CA50)
#define PPDPGJAGHMC_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xC37CA60)

inline static constexpr unsigned int PPDPGJAGHMC_TypeDefinitionIndex = 56113;

	class PPDPGJAGHMC : public ::DBGDNLLDPFI
	{
	public:
		::System::String* BBMMBAKDJBC; // 0x10
		::System::Byte GCIJNMFBENK; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPDPGJAGHMC_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + PPDPGJAGHMC_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPDPGJAGHMC_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPDPGJAGHMC_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPDPGJAGHMC_ELEPDOMDAGA_OFFSET))(this);
		}

	};
