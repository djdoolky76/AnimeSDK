#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterHUDType.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/RPG/GameCore/CrosshairLayoutType.h"
#include "unitysdk/RPG/GameCore/CrosshairType.h"
#include "unitysdk/RPG/GameCore/ResilienceEnum.h"
#include "unitysdk/RPG/GameCore/SpecialSkillButtonGroupType.h"
#include "unitysdk/RPG/MVector3.h"
namespace RPG::GameCore { class EffectAdaptionConfig; }
namespace RPG::GameCore { class HitBoxConfig; }
namespace RPG::GameCore { class LocationConfig; }
namespace System { class String; }

#define IJDDNGPOEHK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1644BE10)
#define IJDDNGPOEHK_FLAJHDIKMII_OFFSET UNITYSDK_OFFSET(0x2E83000)
#define IJDDNGPOEHK_JGDFDOOGAOP_OFFSET UNITYSDK_OFFSET(0x2E830C0)
#define IJDDNGPOEHK_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x2E82FF0)

inline static constexpr unsigned int IJDDNGPOEHK_TypeDefinitionIndex = 56915;

	struct alignas(8) IJDDNGPOEHK
	{
		::RPG::GameCore::ResilienceEnum MFMEANEANHD; // 0x10
		::RPG::MVector3 IGGMLDDDBNH; // 0x14
		::RPG::GameCore::LocationConfig* LHMHCFLAHFE; // 0x20
		::System::Single FODJBMIDEIN; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::GameCore::HitBoxConfig* BKNFNKPDNPP; // 0x30
		::Il2CppArray<::System::String*>* JNAGOECIKPA; // 0x38
		::System::String* NCDLJACPCHF; // 0x40
		::RPG::GameCore::CharacterSomatoType JPHDDEFGPFF; // 0x48
		::System::Byte _padding1[0x4];
		::Il2CppArray<::RPG::GameCore::EffectAdaptionConfig*>* CJGPKMIFMDK; // 0x50
		::System::String* JBGDOLEAOHK; // 0x58
		::RPG::MVector3 HBPAFDLOKHP; // 0x60
		::System::Byte _padding2[0x4];
		::System::String* IJLGCECKGFP; // 0x70
		::System::Single EKCPEOEBIMN; // 0x78
		::System::Int32 OOEJIDFLLIL; // 0x7C
		::RPG::GameCore::CrosshairType CPEDPDIMAOL; // 0x80
		::RPG::GameCore::CrosshairLayoutType DHEAFOAIBLN; // 0x84
		::RPG::GameCore::CrosshairType KLPPIOJNDHL; // 0x88
		::RPG::GameCore::SpecialSkillButtonGroupType CCMLOLKKDLJ; // 0x8C
		::RPG::GameCore::CharacterHUDType HLKALNJLEIE; // 0x90
		/*
		static ::IJDDNGPOEHK BPLPBPMEODA()
		{
			return ((::IJDDNGPOEHK(*)())((::PBYTE)hIl2Cpp + IJDDNGPOEHK_BPLPBPMEODA_OFFSET))();
		}
		*/

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDDNGPOEHK_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void FLAJHDIKMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDDNGPOEHK_FLAJHDIKMII_OFFSET))(this);
		}

		/*
		::System::Void JGDFDOOGAOP(::IJDDNGPOEHK a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJDDNGPOEHK))((::PBYTE)hIl2Cpp + IJDDNGPOEHK_JGDFDOOGAOP_OFFSET))(this, a1);
		}
		*/

	};
