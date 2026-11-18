#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BKGKJNHLCKC;
namespace MoleMole { class UIActivePropsPopWindowController; }

#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x188419F0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS27_0__SENDFAVORITECSREQ_B__0_OFFSET UNITYSDK_OFFSET(0x18841A00)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivePropsPopWindowController___c__DisplayClass27_0_TypeDefinitionIndex = 68097;

	class UIActivePropsPopWindowController___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::BKGKJNHLCKC* buddyData; // 0x10
		::MoleMole::UIActivePropsPopWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _SendFavoriteCsReq_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS27_0__SENDFAVORITECSREQ_B__0_OFFSET))(this);
		}
	};
}
