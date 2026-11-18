#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOODBBDOICG.h"
#include "unitysdk/System/Object.h"

class PGPEKBONDHI;
namespace MoleMole { class UIGachaBtnWidgetController; }
namespace MoleMole { class UIGachaPageController; }

#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1809A5C0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS29_0__REFRESHGACHATABS_G__CREATETABBTN_0_OFFSET UNITYSDK_OFFSET(0x1809A5D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPageController___c__DisplayClass29_0_TypeDefinitionIndex = 58544;

	class UIGachaPageController___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGachaBtnWidgetController* selectedTab; // 0x10
		::PGPEKBONDHI* selectedGacha; // 0x18
		::MoleMole::UIGachaPageController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshGachaTabs_g__CreateTabBtn_0(::System::Int32 tabIdx, ::IOODBBDOICG gachaType, ::Il2CppArray<::PGPEKBONDHI*>* gachas)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::IOODBBDOICG, ::Il2CppArray<::PGPEKBONDHI*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS29_0__REFRESHGACHATABS_G__CREATETABBTN_0_OFFSET))(this, tabIdx, gachaType, gachas);
		}
	};
}
