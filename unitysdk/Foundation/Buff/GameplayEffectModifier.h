#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPJMHAAEIKO.h"
#include "unitysdk/NCJLKIIGPIC.h"
#include "unitysdk/PABMDBLGGPH.h"
#include "unitysdk/System/ValueType.h"

class GDGBPCOGIEN;
class GLDJGBDLOKG;
namespace Foundation { class IEntity; }

#define FOUNDATION_BUFF_GAMEPLAYEFFECTMODIFIER_BICCBEEMNJJ_OFFSET UNITYSDK_OFFSET(0x937E80)
#define FOUNDATION_BUFF_GAMEPLAYEFFECTMODIFIER_DHMLDCOBNEO_OFFSET UNITYSDK_OFFSET(0x937E90)
#define FOUNDATION_BUFF_GAMEPLAYEFFECTMODIFIER_JKOCMLOFMAN_OFFSET UNITYSDK_OFFSET(0x937EA0)
#define FOUNDATION_BUFF_GAMEPLAYEFFECTMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x937E60)

namespace Foundation::Buff
{
	inline static constexpr unsigned int GameplayEffectModifier_TypeDefinitionIndex = 18740;

	struct alignas(8) GameplayEffectModifier
	{
		::NCJLKIIGPIC AttributeSetEnum; // 0x10
		::GPJMHAAEIKO AttributeShortEnum; // 0x14
		::System::Single ModiferMagnitude; // 0x18
		::PABMDBLGGPH Operation; // 0x1C
		::GLDJGBDLOKG* MMC; // 0x20

		::System::Void _ctor(::NCJLKIIGPIC BEAFGFFDNBL, ::GPJMHAAEIKO HNMEDKMHKMF, ::System::Single IGDNMLHEBOD, ::PABMDBLGGPH CBBCJFPGBOK, ::GLDJGBDLOKG* IEMLBHAHGFG)
		{
			return ((::System::Void(*)(::PVOID, ::NCJLKIIGPIC, ::GPJMHAAEIKO, ::System::Single, ::PABMDBLGGPH, ::GLDJGBDLOKG*))((::PBYTE)hIl2Cpp + FOUNDATION_BUFF_GAMEPLAYEFFECTMODIFIER__CTOR_OFFSET))(this, BEAFGFFDNBL, HNMEDKMHKMF, IGDNMLHEBOD, CBBCJFPGBOK, IEMLBHAHGFG);
		}

		::System::Single BICCBEEMNJJ(::GDGBPCOGIEN* JIJFBNLHFGK, ::System::Single GLBEHPNEPCO)
		{
			return ((::System::Single(*)(::PVOID, ::GDGBPCOGIEN*, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_BUFF_GAMEPLAYEFFECTMODIFIER_BICCBEEMNJJ_OFFSET))(this, JIJFBNLHFGK, GLBEHPNEPCO);
		}

		::System::Void DHMLDCOBNEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUFF_GAMEPLAYEFFECTMODIFIER_DHMLDCOBNEO_OFFSET))(this);
		}

		::System::Void JKOCMLOFMAN(::Foundation::IEntity* AMNIHACKELI)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::IEntity*))((::PBYTE)hIl2Cpp + FOUNDATION_BUFF_GAMEPLAYEFFECTMODIFIER_JKOCMLOFMAN_OFFSET))(this, AMNIHACKELI);
		}
	};
}
