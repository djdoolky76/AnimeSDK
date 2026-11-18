#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class FBHPDPBIGPK;
class LNFFHNCNOAK;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGrandMarcelAdventureChildWindowController; }
namespace MoleMole::MiniGame::BangbooPartyGame { class MonoDigitConfig; }
namespace System::Collections { class IEnumerator; }

#define MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_BPBKMLBNADE_OFFSET UNITYSDK_OFFSET(0x19AAC060)
#define MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_DELDLFAGJEJ_OFFSET UNITYSDK_OFFSET(0x19AACC60)
#define MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_FNKHJLMDHEJ_OFFSET UNITYSDK_OFFSET(0x19AAC9A0)
#define MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_HGNCFAPBMEC_OFFSET UNITYSDK_OFFSET(0x19AAC1F0)
#define MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_JFKGGDBBEDG_OFFSET UNITYSDK_OFFSET(0x19AAD1D0)
#define MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_JPKLGCNGMHD_OFFSET UNITYSDK_OFFSET(0x19AAC8D0)
#define MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19AABD80)
#define MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19AABE10)
#define MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19AABD00)
#define MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_OPKPKCIPEGO_OFFSET UNITYSDK_OFFSET(0x19AACF50)
#define MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_SETPARENT_OFFSET UNITYSDK_OFFSET(0x19AACCF0)
#define MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_UPDATENONERANK_OFFSET UNITYSDK_OFFSET(0x19AABE90)
#define MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_UPDATERANK_OFFSET UNITYSDK_OFFSET(0x19AACA20)
#define MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19AACD40)
#define MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19AACDA0)
#define MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19AACE30)
#define MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19AACEC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMarcelHudRankRowWidgetController_TypeDefinitionIndex = 82597;

	class UIMarcelHudRankRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::LNFFHNCNOAK* _view; // 0x2C8
		::MoleMole::UIGrandMarcelAdventureChildWindowController* KBJPABNJOOM; // 0x2D0
		::FBHPDPBIGPK* EHFBAPOFEDN; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void UpdateNoneRank(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_UPDATENONERANK_OFFSET))(this, uid);
		}

		::System::Void UpdateRank(::System::Int32 rank, ::System::UInt32 uid, ::MoleMole::MiniGame::BangbooPartyGame::MonoDigitConfig* monoDigit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::MoleMole::MiniGame::BangbooPartyGame::MonoDigitConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_UPDATERANK_OFFSET))(this, rank, uid, monoDigit);
		}

		::System::Void SetParent(::MoleMole::UIGrandMarcelAdventureChildWindowController* parentController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGrandMarcelAdventureChildWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_SETPARENT_OFFSET))(this, parentController);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void OPKPKCIPEGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_OPKPKCIPEGO_OFFSET))(this);
		}

		::System::Void HGNCFAPBMEC(::System::UInt32 ACHBBPJIBIE)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_HGNCFAPBMEC_OFFSET))(this, ACHBBPJIBIE);
		}

		::System::Void DELDLFAGJEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_DELDLFAGJEJ_OFFSET))(this);
		}

		::System::Collections::IEnumerator* FNKHJLMDHEJ()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_FNKHJLMDHEJ_OFFSET))(this);
		}

		::System::Void JPKLGCNGMHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_JPKLGCNGMHD_OFFSET))(this);
		}

		::System::Void BPBKMLBNADE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_BPBKMLBNADE_OFFSET))(this);
		}

		::System::Void JFKGGDBBEDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_JFKGGDBBEDG_OFFSET))(this);
		}
	};
}
