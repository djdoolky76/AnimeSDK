#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KJBNBAODGPN;
namespace MoleMole { class UIMainCityTimeTipsPopWindowController; }

#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16740950)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__REFRESHBTN_G__ONGETTIMEINFORSP_0_OFFSET UNITYSDK_OFFSET(0x16740960)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityTimeTipsPopWindowController___c__DisplayClass20_0_TypeDefinitionIndex = 57508;

	class UIMainCityTimeTipsPopWindowController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCityTimeTipsPopWindowController* __4__this; // 0x10
		::System::Boolean canPush; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshBtn_g__OnGetTimeInfoRsp_0(::KJBNBAODGPN* data)
		{
			return ((::System::Void(*)(::PVOID, ::KJBNBAODGPN*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__REFRESHBTN_G__ONGETTIMEINFORSP_0_OFFSET))(this, data);
		}
	};
}
