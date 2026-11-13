#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/DiceCombatAbilityState.h"
#include "unitysdk/System/Object.h"
class EHMBINMCDGN;
class ENPEGNGIAEI;
namespace RPG::GameCore { class DiceCombatAbilityConfig; }

#define DLBMDHPMBNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA7CDB0)
#define DLBMDHPMBNL_FMPJJHKCNGG_OFFSET UNITYSDK_OFFSET(0x1BA7CFE0)
#define DLBMDHPMBNL_HCOFMFKFMDK_OFFSET UNITYSDK_OFFSET(0x1BA7D750)
#define DLBMDHPMBNL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1BA7D3A0)
#define DLBMDHPMBNL_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1BA7D700)
#define DLBMDHPMBNL_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x1BA7D1A0)

inline static constexpr unsigned int DLBMDHPMBNL_TypeDefinitionIndex = 37392;

	class DLBMDHPMBNL : public ::System::Object
	{
	public:
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x10
		::ENPEGNGIAEI* OJEHBOBEDHL; // 0x18
		::ENPEGNGIAEI* PPCEGDLCPJH; // 0x20
		::RPG::GameCore::DiceCombatAbilityConfig* IGHAHBNLIJA; // 0x28
		::RPG::LittleGameShare::DiceCombatCore::DiceCombatAbilityState DLNIGFGLPLJ; // 0x30
		::System::Void _ctor(::EHMBINMCDGN* a1, ::RPG::GameCore::DiceCombatAbilityConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EHMBINMCDGN*, ::RPG::GameCore::DiceCombatAbilityConfig*))((::PBYTE)hIl2Cpp + DLBMDHPMBNL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void FMPJJHKCNGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLBMDHPMBNL_FMPJJHKCNGG_OFFSET))(this);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLBMDHPMBNL_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DLBMDHPMBNL_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLBMDHPMBNL_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Boolean HCOFMFKFMDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLBMDHPMBNL_HCOFMFKFMDK_OFFSET))(this);
		}

	};
