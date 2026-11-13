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

#define ENGBNDIPDJL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1880B130)
#define ENGBNDIPDJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1880B890)
#define ENGBNDIPDJL_FLMMCMIBMDH_OFFSET UNITYSDK_OFFSET(0x1880B400)
#define ENGBNDIPDJL_KGAFHLGGNHJ_OFFSET UNITYSDK_OFFSET(0x1880B1F0)
#define ENGBNDIPDJL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1880B310)

inline static constexpr unsigned int ENGBNDIPDJL_TypeDefinitionIndex = 57440;

	class ENGBNDIPDJL : public ::System::Object
	{
	public:
		::ODEFBOOANPF EJHODPJIFIN; // 0x10
		::GELIALJDFBL* OIAJDCOCNNM; // 0x80
		::HPICNGFLLCA* HHGBFEPDMMJ; // 0x88
		::RPG::GameCore::SkillCharacterComponent* JBPPALPNMAE; // 0x90
		::RPG::GameCore::TurnBasedAbilityComponent* FMGPEEBAGBK; // 0x98
		::System::Boolean OOBGNNNGEEC; // 0xA0
		::System::Boolean ABLGCIDFIKM; // 0xA1
		::RPG::GameCore::InsertAbilityState PEMMFHMLGGL; // 0xA2
		::RPG::GameCore::InsertAbilityFinishSource JCCHNHKLCPN; // 0xA4
		::System::Int32 NALMBOOCCIN; // 0xA8
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
