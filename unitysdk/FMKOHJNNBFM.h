#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
namespace System { class String; }

#define FMKOHJNNBFM_CTOR_OFFSET UNITYSDK_OFFSET(0x158616D0)
#define FMKOHJNNBFM_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x15861560)
#define FMKOHJNNBFM_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x158615A0)
#define FMKOHJNNBFM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x158612F0)
#define FMKOHJNNBFM_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x15861300)

inline static constexpr unsigned int FMKOHJNNBFM_TypeDefinitionIndex = 56131;

	class FMKOHJNNBFM : public ::DBGDNLLDPFI
	{
	public:
		::System::String* ILGEBBAIFMM; // 0x10
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18
		::RPG::GameCore::TurnState PIGMOFHJCOG; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKOHJNNBFM_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKOHJNNBFM_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKOHJNNBFM_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKOHJNNBFM_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKOHJNNBFM_ELEPDOMDAGA_OFFSET))(this);
		}

	};
