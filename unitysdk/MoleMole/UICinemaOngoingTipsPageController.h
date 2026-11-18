#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class EHIOIDAPPPH;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UICINEMAONGOINGTIPSPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16EB7EE0)
#define MOLEMOLE_UICINEMAONGOINGTIPSPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16EB7EF0)
#define MOLEMOLE_UICINEMAONGOINGTIPSPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16EB7FD0)
#define MOLEMOLE_UICINEMAONGOINGTIPSPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16EB7F80)
#define MOLEMOLE_UICINEMAONGOINGTIPSPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB8040)
#define MOLEMOLE_UICINEMAONGOINGTIPSPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16EB8050)
#define MOLEMOLE_UICINEMAONGOINGTIPSPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16EB80E0)
#define MOLEMOLE_UICINEMAONGOINGTIPSPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16EB80F0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaOngoingTipsPageController_TypeDefinitionIndex = 91728;

	class UICinemaOngoingTipsPageController : public ::MoleMole::UIWindowController
	{
	public:
		::EHIOIDAPPPH* _view; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAONGOINGTIPSPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAONGOINGTIPSPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAONGOINGTIPSPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAONGOINGTIPSPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAONGOINGTIPSPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAONGOINGTIPSPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAONGOINGTIPSPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAONGOINGTIPSPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
