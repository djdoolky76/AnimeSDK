#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class JBIKMKCONPG;
class JOEJACHFJDJ;
class OAAHLIOMJOA;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UINEWSSTANDSUPPLEMENTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17D62AA0)
#define MOLEMOLE_UINEWSSTANDSUPPLEMENTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17D62B30)
#define MOLEMOLE_UINEWSSTANDSUPPLEMENTWIDGETCONTROLLER_UPDATEAD_OFFSET UNITYSDK_OFFSET(0x17D62980)
#define MOLEMOLE_UINEWSSTANDSUPPLEMENTWIDGETCONTROLLER_UPDATEHEADLINE_OFFSET UNITYSDK_OFFSET(0x17D62760)
#define MOLEMOLE_UINEWSSTANDSUPPLEMENTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D62BB0)
#define MOLEMOLE_UINEWSSTANDSUPPLEMENTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17D62C10)
#define MOLEMOLE_UINEWSSTANDSUPPLEMENTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17D62CA0)

namespace MoleMole
{
	inline static constexpr unsigned int UINewsStandSupplementWidgetController_TypeDefinitionIndex = 64595;

	class UINewsStandSupplementWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::JBIKMKCONPG* _view; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDSUPPLEMENTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void UpdateHeadLine(::OAAHLIOMJOA* config)
		{
			return ((::System::Void(*)(::PVOID, ::OAAHLIOMJOA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDSUPPLEMENTWIDGETCONTROLLER_UPDATEHEADLINE_OFFSET))(this, config);
		}

		::System::Void UpdateAD(::JOEJACHFJDJ* config)
		{
			return ((::System::Void(*)(::PVOID, ::JOEJACHFJDJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDSUPPLEMENTWIDGETCONTROLLER_UPDATEAD_OFFSET))(this, config);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDSUPPLEMENTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDSUPPLEMENTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDSUPPLEMENTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDSUPPLEMENTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
