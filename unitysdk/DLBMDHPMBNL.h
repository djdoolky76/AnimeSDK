#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/DiceCombatAbilityState.h"
#include "unitysdk/System/Object.h"
class EHMBINMCDGN;
class ENPEGNGIAEI;
namespace RPG::GameCore { class DiceCombatAbilityConfig; }

#define DLBMDHPMBNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5C84D0)
#define DLBMDHPMBNL_FMPJJHKCNGG_OFFSET UNITYSDK_OFFSET(0x1C5C8700)
#define DLBMDHPMBNL_HCOFMFKFMDK_OFFSET UNITYSDK_OFFSET(0x1C5C8E70)
#define DLBMDHPMBNL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C5C8AC0)
#define DLBMDHPMBNL_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1C5C8E20)
#define DLBMDHPMBNL_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x1C5C88C0)

inline static constexpr unsigned int DLBMDHPMBNL_TypeDefinitionIndex = 36464;

	class DLBMDHPMBNL : public ::System::Object
	{
	public:
		::ENPEGNGIAEI* PPCEGDLCPJH; // 0x10
		::RPG::GameCore::DiceCombatAbilityConfig* IGHAHBNLIJA; // 0x18
		::ENPEGNGIAEI* OJEHBOBEDHL; // 0x20
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x28
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
