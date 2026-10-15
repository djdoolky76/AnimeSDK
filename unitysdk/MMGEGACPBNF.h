#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOOHMOLKDCA;
class GOJNGCCBOGI;
namespace RPG::Client { class BattleBuffToastNotify; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define MMGEGACPBNF_CTOR_OFFSET UNITYSDK_OFFSET(0xB9BF320)
#define MMGEGACPBNF_DGEDEBKMBPG_1_OFFSET UNITYSDK_OFFSET(0xB9BF1B0)
#define MMGEGACPBNF_DGEDEBKMBPG_OFFSET UNITYSDK_OFFSET(0xB9BF0A0)
#define MMGEGACPBNF_PDILJIFEFKB_1_OFFSET UNITYSDK_OFFSET(0xB9BF2C0)
#define MMGEGACPBNF_PDILJIFEFKB_OFFSET UNITYSDK_OFFSET(0xB9BF150)

inline static constexpr unsigned int MMGEGACPBNF_TypeDefinitionIndex = 71551;

	class MMGEGACPBNF : public ::System::Object
	{
	public:
		::BOOHMOLKDCA* ODMGBEOIEEB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMGEGACPBNF_CTOR_OFFSET))(this);
		}

		::GOJNGCCBOGI* DGEDEBKMBPG(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::GOJNGCCBOGI*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + MMGEGACPBNF_DGEDEBKMBPG_OFFSET))(this, a1);
		}

		::GOJNGCCBOGI* DGEDEBKMBPG_1(::RPG::Client::BattleBuffToastNotify* a1)
		{
			return ((::GOJNGCCBOGI*(*)(::PVOID, ::RPG::Client::BattleBuffToastNotify*))((::PBYTE)hIl2Cpp + MMGEGACPBNF_DGEDEBKMBPG_1_OFFSET))(this, a1);
		}

		::System::Boolean PDILJIFEFKB(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + MMGEGACPBNF_PDILJIFEFKB_OFFSET))(this, a1);
		}

		::System::Boolean PDILJIFEFKB_1(::RPG::Client::BattleBuffToastNotify* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BattleBuffToastNotify*))((::PBYTE)hIl2Cpp + MMGEGACPBNF_PDILJIFEFKB_1_OFFSET))(this, a1);
		}

	};
