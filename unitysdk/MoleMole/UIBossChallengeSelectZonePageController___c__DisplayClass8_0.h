#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BNFIIBMAMDO;
namespace MoleMole { class UIBossChallengeSelectZonePageController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x170501A0)
#define MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER___C__DISPLAYCLASS8_0__ONUIINIT_B__1_OFFSET UNITYSDK_OFFSET(0x17050230)
#define MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER___C__DISPLAYCLASS8_0__ONUIINIT_B__2_OFFSET UNITYSDK_OFFSET(0x170503A0)
#define MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER___C__DISPLAYCLASS8_0__ONUIINIT_B__3_OFFSET UNITYSDK_OFFSET(0x17050510)
#define MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER___C__DISPLAYCLASS8_0__ONUIINIT_G__SORTKEY_0_OFFSET UNITYSDK_OFFSET(0x170501B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeSelectZonePageController___c__DisplayClass8_0_TypeDefinitionIndex = 54720;

	class UIBossChallengeSelectZonePageController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::BNFIIBMAMDO* hadalModel; // 0x10
		::UnityEngine::Events::UnityAction* __9__3; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* allNewHadalZoneIDs; // 0x20
		::MoleMole::UIBossChallengeSelectZonePageController* __4__this; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Int64 _OnUIInit_g__SortKey_0(::System::Int32 zoneID)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER___C__DISPLAYCLASS8_0__ONUIINIT_G__SORTKEY_0_OFFSET))(this, zoneID);
		}

		::System::Int32 _OnUIInit_b__1(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER___C__DISPLAYCLASS8_0__ONUIINIT_B__1_OFFSET))(this, a, b);
		}

		::System::Int32 _OnUIInit_b__2(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER___C__DISPLAYCLASS8_0__ONUIINIT_B__2_OFFSET))(this, a, b);
		}

		::System::Void _OnUIInit_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER___C__DISPLAYCLASS8_0__ONUIINIT_B__3_OFFSET))(this);
		}
	};
}
