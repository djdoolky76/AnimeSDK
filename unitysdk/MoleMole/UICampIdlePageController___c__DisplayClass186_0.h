#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DEDDPKGLKHI_LODLFMBCLAH.h"

class KOIDMLPJGML;

#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS186_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1738C640)
#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS186_0__REFRESHBATTLEREWARD_B__0_OFFSET UNITYSDK_OFFSET(0x1738C650)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdlePageController___c__DisplayClass186_0_TypeDefinitionIndex = 38832;

	class UICampIdlePageController___c__DisplayClass186_0 : public ::System::Object
	{
	public:
		::System::Boolean isDoneEver; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS186_0__CTOR_OFFSET))(this);
		}

		::KOIDMLPJGML* _RefreshBattleReward_b__0(::DEDDPKGLKHI_LODLFMBCLAH x)
		{
			return ((::KOIDMLPJGML*(*)(::PVOID, ::DEDDPKGLKHI_LODLFMBCLAH))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS186_0__REFRESHBATTLEREWARD_B__0_OFFSET))(this, x);
		}
	};
}
