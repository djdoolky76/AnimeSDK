#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODEFBOOANPF.h"
#include "unitysdk/RPG/GameCore/InsertAbilityFinishSource.h"
#include "unitysdk/RPG/GameCore/InsertAbilityState.h"
#include "unitysdk/System/Object.h"
class ENGBNDIPDJL;
class GELIALJDFBL;
class HPICNGFLLCA;
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class String; }

#define ENGBNDIPDJL_CLEAR_OFFSET UNITYSDK_OFFSET(0x155ABB30)
#define ENGBNDIPDJL_CTOR_OFFSET UNITYSDK_OFFSET(0x155AC260)
#define ENGBNDIPDJL_FLMMCMIBMDH_OFFSET UNITYSDK_OFFSET(0x155ABDE0)
#define ENGBNDIPDJL_KGAFHLGGNHJ_OFFSET UNITYSDK_OFFSET(0x155ABBE0)
#define ENGBNDIPDJL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x155ABCF0)

	class ENGBNDIPDJL : public ::System::Object
	{
	public:
		::GELIALJDFBL* OIAJDCOCNNM; // 0x10
		::RPG::GameCore::SkillCharacterComponent* JBPPALPNMAE; // 0x18
		::HPICNGFLLCA* HHGBFEPDMMJ; // 0x20
		::RPG::GameCore::TurnBasedAbilityComponent* FMGPEEBAGBK; // 0x28
		::ODEFBOOANPF EJHODPJIFIN; // 0x30
		::RPG::GameCore::InsertAbilityFinishSource JCCHNHKLCPN; // 0xA0
		::System::Int32 NALMBOOCCIN; // 0xA4
		::System::Boolean OOBGNNNGEEC; // 0xA8
		::RPG::GameCore::InsertAbilityState PEMMFHMLGGL; // 0xA9
		::System::Boolean ABLGCIDFIKM; // 0xAA
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGBNDIPDJL_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGBNDIPDJL_CLEAR_OFFSET))(this);
		}

		::System::Int32 KGAFHLGGNHJ(::ENGBNDIPDJL* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::ENGBNDIPDJL*))((::PBYTE)hIl2Cpp + ENGBNDIPDJL_KGAFHLGGNHJ_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGBNDIPDJL_TOSTRING_OFFSET))(this);
		}

		::System::Void FLMMCMIBMDH(::RPG::GameCore::TurnBasedGameMode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + ENGBNDIPDJL_FLMMCMIBMDH_OFFSET))(this, a1);
		}

	};
