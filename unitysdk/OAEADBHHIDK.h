#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class OAEADBHHIDK;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define OAEADBHHIDK_ALENHNCGPBI_OFFSET UNITYSDK_OFFSET(0xBD16B50)
#define OAEADBHHIDK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBD168E0)
#define OAEADBHHIDK_CAJFDDIBPMI_OFFSET UNITYSDK_OFFSET(0xBD16960)
#define OAEADBHHIDK_CTOR_OFFSET UNITYSDK_OFFSET(0xBD16950)
#define OAEADBHHIDK_JDAPMOBEPPB_OFFSET UNITYSDK_OFFSET(0xBD16AC0)
#define OAEADBHHIDK_MACOMAHJKIH_OFFSET UNITYSDK_OFFSET(0xBD16BC0)
#define OAEADBHHIDK_OHEOHGJNBHP_OFFSET UNITYSDK_OFFSET(0xBD16A30)

inline static constexpr unsigned int OAEADBHHIDK_TypeDefinitionIndex = 72015;

	class OAEADBHHIDK : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedAbilityComponent* HFFKONIDMGL; // 0x10
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x18
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
