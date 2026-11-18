#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFNPKMPGOMB;
class DOJFNBKAOMN;
namespace MoleMole { class UIVideoshopForgeWidgetChildWindowController; }
template <typename T> class DFDEIDBBGHG_1;

#define MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS63_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15644C70)
#define MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS63_0__SEND_B__2_OFFSET UNITYSDK_OFFSET(0x15644DA0)
#define MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS63_0__SEND_B__3_OFFSET UNITYSDK_OFFSET(0x15644FE0)
#define MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS63_0__SEND_G__SENDEQUIPGACHA_0_OFFSET UNITYSDK_OFFSET(0x15644C80)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoshopForgeWidgetChildWindowController___c__DisplayClass63_0_TypeDefinitionIndex = 66891;

	class UIVideoshopForgeWidgetChildWindowController___c__DisplayClass63_0 : public ::System::Object
	{
	public:
		::CFNPKMPGOMB* model; // 0x10
		::MoleMole::UIVideoshopForgeWidgetChildWindowController* __4__this; // 0x18
		::System::Int32 gachaId; // 0x20
		::System::Int32 times; // 0x24
		::System::Int32 sendPart; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS63_0__CTOR_OFFSET))(this);
		}

		::System::Void _Send_g__SendEquipGacha_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS63_0__SEND_G__SENDEQUIPGACHA_0_OFFSET))(this);
		}

		::System::Void _Send_b__2(::DFDEIDBBGHG_1<::DOJFNBKAOMN*>* itemList)
		{
			return ((::System::Void(*)(::PVOID, ::DFDEIDBBGHG_1<::DOJFNBKAOMN*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS63_0__SEND_B__2_OFFSET))(this, itemList);
		}

		::System::Void _Send_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS63_0__SEND_B__3_OFFSET))(this);
		}
	};
}
