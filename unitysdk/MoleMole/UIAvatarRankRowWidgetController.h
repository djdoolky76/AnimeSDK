#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class CDAIGCIBMAH;
class FKOGJPBGILO;
class KOIDMLPJGML;
class OAEFGCLEHHO;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIAVATARRANKROWWIDGETCONTROLLER_DFCEPHCKMND_OFFSET UNITYSDK_OFFSET(0x159467C0)
#define MOLEMOLE_UIAVATARRANKROWWIDGETCONTROLLER_LFPBCAPLAGN_OFFSET UNITYSDK_OFFSET(0x15946870)
#define MOLEMOLE_UIAVATARRANKROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x159457B0)
#define MOLEMOLE_UIAVATARRANKROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x159458C0)
#define MOLEMOLE_UIAVATARRANKROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15945840)
#define MOLEMOLE_UIAVATARRANKROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x159455F0)
#define MOLEMOLE_UIAVATARRANKROWWIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x15945AF0)
#define MOLEMOLE_UIAVATARRANKROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x159465C0)
#define MOLEMOLE_UIAVATARRANKROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15946650)
#define MOLEMOLE_UIAVATARRANKROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x159466A0)
#define MOLEMOLE_UIAVATARRANKROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15946740)
#define MOLEMOLE_UIAVATARRANKROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15946780)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarRankRowWidgetController_TypeDefinitionIndex = 38947;

	class UIAvatarRankRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::CDAIGCIBMAH* _view; // 0x2F8
		::FKOGJPBGILO* LFNPDIELMGF; // 0x300
		::System::Action* OnTakeAdvanceRewardHandle; // 0x308
		::MoleMole::UIItemIconBtnSmallWidgetController* KOPDABDDNBF; // 0x310
		::System::Collections::Generic::List_1<::KOIDMLPJGML*>* GLFICDPGBPG; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARRANKROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARRANKROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARRANKROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARRANKROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARRANKROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARRANKROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARRANKROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARRANKROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARRANKROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void DFCEPHCKMND(::OAEFGCLEHHO* KGFGOODAFDH)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARRANKROWWIDGETCONTROLLER_DFCEPHCKMND_OFFSET))(this, KGFGOODAFDH);
		}

		::System::Void PDKCHDBODJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARRANKROWWIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this);
		}

		::System::Void LFPBCAPLAGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARRANKROWWIDGETCONTROLLER_LFPBCAPLAGN_OFFSET))(this);
		}
	};
}
