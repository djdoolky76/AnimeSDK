#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Config/MusicBattleMarkerNodeType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class ADPAOKFABDM;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIMusicBattleInLevelPerfectEffWidgetController; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_ELPGDDFGKCE_OFFSET UNITYSDK_OFFSET(0x147DE7A0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_FNODIPJLPAH_OFFSET UNITYSDK_OFFSET(0x147DECE0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x147DE400)
#define MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x147DE490)
#define MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x147DE2D0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_PLAYHITBTNLINK_OFFSET UNITYSDK_OFFSET(0x147DE510)
#define MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_POPJELIKFBB_OFFSET UNITYSDK_OFFSET(0x147DE720)
#define MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x147DEA10)
#define MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x147DEB30)
#define MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x147DEBC0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x147DEC50)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicBattleInLevelInteractWidgetController_TypeDefinitionIndex = 47463;

	class UIMusicBattleInLevelInteractWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::ADPAOKFABDM* _view; // 0x2C8
		::System::Single FFOJCOPJAHE; // 0x2D0
		::System::Single KMMHPBKLBNL; // 0x2D4
		::Foundation::Coroutine::CoroutineHandle GHBIGKKBCKE; // 0x2D8
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::MoleMole::UIMusicBattleInLevelPerfectEffWidgetController*>* KOJKHPBCPGC; // 0x2E0
		::System::Action_1<::MoleMole::UIMusicBattleInLevelPerfectEffWidgetController*>* JEFMMOPOEND; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void PlayHitBtnLink(::MoleMole::Config::MusicBattleMarkerNodeType color, ::System::Boolean isPerfect)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MusicBattleMarkerNodeType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_PLAYHITBTNLINK_OFFSET))(this, color, isPerfect);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void FNODIPJLPAH(::MoleMole::UIMusicBattleInLevelPerfectEffWidgetController* ALPANKAJAGK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMusicBattleInLevelPerfectEffWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_FNODIPJLPAH_OFFSET))(this, ALPANKAJAGK);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* POPJELIKFBB()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_POPJELIKFBB_OFFSET))(this);
		}

		::System::Void ELPGDDFGKCE(::System::Boolean IMEHMFONCLH, ::MoleMole::Config::MusicBattleMarkerNodeType JBBFCGAMDHI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Config::MusicBattleMarkerNodeType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_ELPGDDFGKCE_OFFSET))(this, IMEHMFONCLH, JBBFCGAMDHI);
		}
	};
}
