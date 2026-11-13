#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMaterialEffectType.h"
namespace RPG::Client { class CharacterEffect; }

#define HLJAMAPEOJK_AMJJIDOGDAK_OFFSET UNITYSDK_OFFSET(0x3E3C850)
#define HLJAMAPEOJK_FMCJOKBCLJC_OFFSET UNITYSDK_OFFSET(0x3E3C830)
#define HLJAMAPEOJK_LFPOIGJIFGL_OFFSET UNITYSDK_OFFSET(0x3E3C8B0)
#define HLJAMAPEOJK_OAEHPMJGHAB_OFFSET UNITYSDK_OFFSET(0x3E3C840)

inline static constexpr unsigned int HLJAMAPEOJK_TypeDefinitionIndex = 58419;

	struct alignas(4) HLJAMAPEOJK
	{
		::System::Single EIBGEGPABFK; // 0x10
		::System::Single GCJMFBKLGHI; // 0x14
		::RPG::GameCore::CharacterMaterialEffectType FHAJMKJHNNJ; // 0x18
		::RPG::GameCore::CharacterMaterialEffectType JKJCEJJNBMN; // 0x1C
		::System::Void FMCJOKBCLJC(::RPG::Client::CharacterEffect* a1, ::RPG::GameCore::CharacterMaterialEffectType a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CharacterEffect*, ::RPG::GameCore::CharacterMaterialEffectType, ::System::Single))((::PBYTE)hIl2Cpp + HLJAMAPEOJK_FMCJOKBCLJC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OAEHPMJGHAB(::RPG::Client::CharacterEffect* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CharacterEffect*, ::System::Single))((::PBYTE)hIl2Cpp + HLJAMAPEOJK_OAEHPMJGHAB_OFFSET))(this, a1, a2);
		}

		::System::Void AMJJIDOGDAK(::RPG::Client::CharacterEffect* a1, ::RPG::GameCore::CharacterMaterialEffectType a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CharacterEffect*, ::RPG::GameCore::CharacterMaterialEffectType, ::System::Boolean))((::PBYTE)hIl2Cpp + HLJAMAPEOJK_AMJJIDOGDAK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LFPOIGJIFGL(::RPG::Client::CharacterEffect* a1, ::RPG::GameCore::CharacterMaterialEffectType a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CharacterEffect*, ::RPG::GameCore::CharacterMaterialEffectType, ::System::Single))((::PBYTE)hIl2Cpp + HLJAMAPEOJK_LFPOIGJIFGL_OFFSET))(this, a1, a2, a3);
		}

	};
