#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityLinearProperty.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeTypeMask.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
namespace RPG::GameCore { class ActionDelayPreshowConfig; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define BJCNOPGPIML_AILOBLEIIAG_OFFSET UNITYSDK_OFFSET(0x1AAC0)
#define BJCNOPGPIML_CLEIBFKCDIE_OFFSET UNITYSDK_OFFSET(0x1AAA0)
#define BJCNOPGPIML_HDPGJNMHJAH_OFFSET UNITYSDK_OFFSET(0x1AA90)
#define BJCNOPGPIML_HNIFFNGPIHJ_OFFSET UNITYSDK_OFFSET(0x1AAB0)
#define BJCNOPGPIML_JGONADJANDI_OFFSET UNITYSDK_OFFSET(0x1A820)
#define BJCNOPGPIML_KBECLDNAPJC_OFFSET UNITYSDK_OFFSET(0x1AA20)
#define BJCNOPGPIML_KHGIKBFDLFB_1_OFFSET UNITYSDK_OFFSET(0x1AA10)
#define BJCNOPGPIML_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1AA00)
#define BJCNOPGPIML_LHFOHPEFNLO_OFFSET UNITYSDK_OFFSET(0x1A9B0)
#define BJCNOPGPIML_MHHABONOGGA_OFFSET UNITYSDK_OFFSET(0x1A910)
#define BJCNOPGPIML_OGIADBNOKGG_OFFSET UNITYSDK_OFFSET(0x1A960)

inline static constexpr unsigned int BJCNOPGPIML_TypeDefinitionIndex = 71224;

	struct alignas(4) BJCNOPGPIML
	{
		::RPG::GameCore::FixPoint BBFHOCJBANF; // 0x10
		::System::Boolean JOPOPHGFFOH; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 CPANPFMHGGC; // 0x1C
		::System::Boolean CLJPKHNNCIC; // 0x20
		::System::Byte _padding1[0x3];
		::RPG::GameCore::TeamType BEGKIKOGEOD; // 0x24
		::System::Boolean ACONGCKJHHK; // 0x28
		::System::Byte _padding2[0x7];
		::RPG::GameCore::FixPoint PHEJKKEMLBN; // 0x30
		::RPG::GameCore::FixPoint ILPIHPMBEFP; // 0x38
		::RPG::GameCore::FixPoint HPCHCEFOKJB; // 0x40
		::RPG::GameCore::FixPoint NAOCOCNDABE; // 0x48
		::RPG::GameCore::FixPoint CIEIMABNDPI; // 0x50
		::RPG::GameCore::AbilityLinearProperty CDDCDOMMNDH; // 0x58
		::RPG::GameCore::FixPoint JGONADJANDI()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCNOPGPIML_JGONADJANDI_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint MHHABONOGGA()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCNOPGPIML_MHHABONOGGA_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint OGIADBNOKGG()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCNOPGPIML_OGIADBNOKGG_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint LHFOHPEFNLO()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCNOPGPIML_LHFOHPEFNLO_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB(::RPG::GameCore::TurnBasedAbilityComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + BJCNOPGPIML_KHGIKBFDLFB_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB_1(::RPG::GameCore::CharacterDataComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterDataComponent*))((::PBYTE)hIl2Cpp + BJCNOPGPIML_KHGIKBFDLFB_1_OFFSET))(this, a1);
		}

		::System::Void KBECLDNAPJC(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + BJCNOPGPIML_KBECLDNAPJC_OFFSET))(this, a1);
		}

		::System::Void HDPGJNMHJAH(::RPG::GameCore::AbilityProperty a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + BJCNOPGPIML_HDPGJNMHJAH_OFFSET))(this, a1, a2);
		}

		::System::Void CLEIBFKCDIE(::RPG::GameCore::AbilityProperty a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + BJCNOPGPIML_CLEIBFKCDIE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::ActionDelayChangeTypeMask HNIFFNGPIHJ(::RPG::GameCore::ActionDelayPreshowConfig* a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::RPG::GameCore::ActionDelayPreshowConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + BJCNOPGPIML_HNIFFNGPIHJ_OFFSET))(this, a1, a2);
		}

		::System::Void AILOBLEIIAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCNOPGPIML_AILOBLEIIAG_OFFSET))(this);
		}

	};
