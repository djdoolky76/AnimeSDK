#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/RelicScoreCalculatorConfig.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define JDALBFCHGNK_CBOFFPEFEPP_OFFSET UNITYSDK_OFFSET(0x165AED70)
#define JDALBFCHGNK_CTOR_OFFSET UNITYSDK_OFFSET(0x165AF140)
#define JDALBFCHGNK_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x165AECF0)
#define JDALBFCHGNK_GET_MAINAFFIXSCORE_OFFSET UNITYSDK_OFFSET(0x165AED10)
#define JDALBFCHGNK_GET_RARITYCOEFFICIENT_OFFSET UNITYSDK_OFFSET(0x165AED50)
#define JDALBFCHGNK_GET_SUBAFFIXSCORE_OFFSET UNITYSDK_OFFSET(0x165AED30)
#define JDALBFCHGNK_JNKMCJOEFEP_OFFSET UNITYSDK_OFFSET(0x165AEDC0)
#define JDALBFCHGNK_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x165AED00)
#define JDALBFCHGNK_SET_MAINAFFIXSCORE_OFFSET UNITYSDK_OFFSET(0x165AED20)
#define JDALBFCHGNK_SET_RARITYCOEFFICIENT_OFFSET UNITYSDK_OFFSET(0x165AED60)
#define JDALBFCHGNK_SET_SUBAFFIXSCORE_OFFSET UNITYSDK_OFFSET(0x165AED40)

inline static constexpr unsigned int JDALBFCHGNK_TypeDefinitionIndex = 74432;

	class JDALBFCHGNK : public ::System::Object
	{
	public:
		::System::Single _SubAffixScore_k__BackingField; // 0x10
		::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig _Config_k__BackingField; // 0x14
		::System::Single _RarityCoefficient_k__BackingField; // 0x18
		::System::Single _MainAffixScore_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDALBFCHGNK_CTOR_OFFSET))(this);
		}

		::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig get_Config()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + JDALBFCHGNK_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig))((::PBYTE)hIl2Cpp + JDALBFCHGNK_SET_CONFIG_OFFSET))(this, a1);
		}

		::System::Single get_MainAffixScore()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JDALBFCHGNK_GET_MAINAFFIXSCORE_OFFSET))(this);
		}

		::System::Void set_MainAffixScore(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JDALBFCHGNK_SET_MAINAFFIXSCORE_OFFSET))(this, a1);
		}

		::System::Single get_SubAffixScore()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JDALBFCHGNK_GET_SUBAFFIXSCORE_OFFSET))(this);
		}

		::System::Void set_SubAffixScore(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JDALBFCHGNK_SET_SUBAFFIXSCORE_OFFSET))(this, a1);
		}

		::System::Single get_RarityCoefficient()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JDALBFCHGNK_GET_RARITYCOEFFICIENT_OFFSET))(this);
		}

		::System::Void set_RarityCoefficient(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JDALBFCHGNK_SET_RARITYCOEFFICIENT_OFFSET))(this, a1);
		}

		::System::Single CBOFFPEFEPP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JDALBFCHGNK_CBOFFPEFEPP_OFFSET))(this);
		}

		::System::String* JNKMCJOEFEP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDALBFCHGNK_JNKMCJOEFEP_OFFSET))(this);
		}

	};
