#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class IPECLFHNCLI;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UILinkTermCollector; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIDUELBATTLECARDINFOPOPWINDOWCONTROLLER_FHDDMEOLKMO_OFFSET UNITYSDK_OFFSET(0x16ECC340)
#define MOLEMOLE_UIDUELBATTLECARDINFOPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16ECB210)
#define MOLEMOLE_UIDUELBATTLECARDINFOPOPWINDOWCONTROLLER_KIABILFABOP_OFFSET UNITYSDK_OFFSET(0x16ECB7C0)
#define MOLEMOLE_UIDUELBATTLECARDINFOPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16ECBCB0)
#define MOLEMOLE_UIDUELBATTLECARDINFOPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16ECBD40)
#define MOLEMOLE_UIDUELBATTLECARDINFOPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16ECB220)
#define MOLEMOLE_UIDUELBATTLECARDINFOPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16ECB560)
#define MOLEMOLE_UIDUELBATTLECARDINFOPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16ECC160)
#define MOLEMOLE_UIDUELBATTLECARDINFOPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16ECC200)
#define MOLEMOLE_UIDUELBATTLECARDINFOPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16ECC290)
#define MOLEMOLE_UIDUELBATTLECARDINFOPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16ECC2A0)
#define MOLEMOLE_UIDUELBATTLECARDINFOPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16ECC2B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDuelBattleCardInfoPopWindowController_TypeDefinitionIndex = 49181;

	class UIDuelBattleCardInfoPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::IPECLFHNCLI* _view; // 0x320
		::MoleMole::UILinkTermCollector* MPAMBKPCELB; // 0x328
		::System::Collections::Generic::Dictionary_2<::MoleMole::MonoGamepadSelectable*, ::UnityEngine::Transform*>* EGCJABBPFEO; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLECARDINFOPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLECARDINFOPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLECARDINFOPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLECARDINFOPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLECARDINFOPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLECARDINFOPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLECARDINFOPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLECARDINFOPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLECARDINFOPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLECARDINFOPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void FHDDMEOLKMO(::UnityEngine::GameObject* IPMMCGDMODG, ::System::Int32 ABHBKFJKINO, ::System::Object* LJBPECKCCEA, ::System::Boolean JBJFINAFFKO)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLECARDINFOPOPWINDOWCONTROLLER_FHDDMEOLKMO_OFFSET))(this, IPMMCGDMODG, ABHBKFJKINO, LJBPECKCCEA, JBJFINAFFKO);
		}

		::System::Void KIABILFABOP(::System::Boolean GCKPCMEMKMM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLECARDINFOPOPWINDOWCONTROLLER_KIABILFABOP_OFFSET))(this, GCKPCMEMKMM);
		}
	};
}
