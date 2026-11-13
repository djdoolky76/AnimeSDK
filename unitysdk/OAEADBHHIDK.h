#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class OAEADBHHIDK;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define OAEADBHHIDK_ALENHNCGPBI_OFFSET UNITYSDK_OFFSET(0x1AB58420)
#define OAEADBHHIDK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1AB58060)
#define OAEADBHHIDK_CAJFDDIBPMI_OFFSET UNITYSDK_OFFSET(0x1AB580E0)
#define OAEADBHHIDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1AB580D0)
#define OAEADBHHIDK_JDAPMOBEPPB_OFFSET UNITYSDK_OFFSET(0x1AB582C0)
#define OAEADBHHIDK_MACOMAHJKIH_OFFSET UNITYSDK_OFFSET(0x1AB58520)
#define OAEADBHHIDK_OHEOHGJNBHP_OFFSET UNITYSDK_OFFSET(0x1AB581D0)

inline static constexpr unsigned int OAEADBHHIDK_TypeDefinitionIndex = 74044;

	class OAEADBHHIDK : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedAbilityComponent* HFFKONIDMGL; // 0x10
		::RPG::GameCore::SkillCharacterComponent* DLKGKDBPHOH; // 0x18
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAEADBHHIDK_CTOR_OFFSET))(this);
		}

		static ::OAEADBHHIDK* BPLPBPMEODA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::OAEADBHHIDK*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OAEADBHHIDK_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void CAJFDDIBPMI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OAEADBHHIDK_CAJFDDIBPMI_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint OHEOHGJNBHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + OAEADBHHIDK_OHEOHGJNBHP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint JDAPMOBEPPB()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + OAEADBHHIDK_JDAPMOBEPPB_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint ALENHNCGPBI()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + OAEADBHHIDK_ALENHNCGPBI_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint MACOMAHJKIH()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + OAEADBHHIDK_MACOMAHJKIH_OFFSET))(this);
		}

	};
