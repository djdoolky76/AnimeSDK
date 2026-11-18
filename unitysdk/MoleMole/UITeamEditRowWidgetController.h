#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class BFGFHCCEKPI;
class BPHGNMNLLHF;
class JDEGKAENALE;
class OEIOJGKBFEG;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UITeamEditIconWidgetController; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_CEADLMDDJED_OFFSET UNITYSDK_OFFSET(0x166F0880)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_GAEBEJAOIEK_OFFSET UNITYSDK_OFFSET(0x166F0650)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_GETREWARDCUSTOMLISTISFOCUS_OFFSET UNITYSDK_OFFSET(0x166EE230)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_HJNJLKMIJPH_OFFSET UNITYSDK_OFFSET(0x166F04D0)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_LDHHJAGFEGB_OFFSET UNITYSDK_OFFSET(0x166EE4E0)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_NMKEOFEBLNC_OFFSET UNITYSDK_OFFSET(0x166EF6C0)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_OBOPCKFAFLM_OFFSET UNITYSDK_OFFSET(0x166F0510)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_OJMLDPOEAKP_OFFSET UNITYSDK_OFFSET(0x166F06B0)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONCLICKCHANGENAME_OFFSET UNITYSDK_OFFSET(0x166EF760)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x166EFE50)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x166EE2C0)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x166EDD50)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x166EFD80)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x166EE3D0)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x166EE350)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x166ED630)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x166EEC90)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_PLAYAPPLYTEAMANIM_OFFSET UNITYSDK_OFFSET(0x166EFFD0)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_PLAYBUDDYCHANGEANI_OFFSET UNITYSDK_OFFSET(0x166EFBA0)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_REFRESHMUTISELECTED_OFFSET UNITYSDK_OFFSET(0x166EF920)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_SETBIGSCENE_OFFSET UNITYSDK_OFFSET(0x166EF870)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x166F0090)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x166F01B0)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x166F01C0)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x166F0250)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x166F0280)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x166F0310)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x166F03B0)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x166F0440)

namespace MoleMole
{
	inline static constexpr unsigned int UITeamEditRowWidgetController_TypeDefinitionIndex = 41538;

	class UITeamEditRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::OEIOJGKBFEG* _view; // 0x2F8
		::System::Collections::Generic::List_1<::MoleMole::UITeamEditIconWidgetController*>* KAAADAJBIAH; // 0x300
		::MoleMole::UITeamEditIconWidgetController* JJDGEDGDPAD; // 0x308
		::System::Int32 PFNFLIPBOJF; // 0x310
		::System::Byte _padding0[0x4];
		::JDEGKAENALE* GIMMJKDGLOG; // 0x318
		::System::Collections::Generic::List_1<::System::Int32>* CCLPJNJCEMB; // 0x320
		::BFGFHCCEKPI* ILNBKBOCJLL; // 0x328
		::Il2CppArray<::BPHGNMNLLHF*>* KNEEPFPMMDP; // 0x330
		::System::Collections::Generic::List_1<::BPHGNMNLLHF*>* NPOOGGGNJEA; // 0x338
		::System::UInt32 FAHCONDLIAF; // 0x340
		::System::Byte _padding1[0x4];
		::System::Action_1<::System::Int32>* SetMutiSelectAction; // 0x348
		::System::Boolean IsMutiSelect; // 0x350
		::System::Boolean WithOutBattle; // 0x351
		::System::Byte _padding2[0x6];
		::System::Action_2<::System::Int32, ::System::Int32>* IconClickAction; // 0x358
		::System::Action* OnRootCustomListFocusChange; // 0x360
		::System::Boolean IsHasLockAvatar; // 0x368
		::System::Boolean IsHasLockBuddy; // 0x369
		::System::Boolean BKPPKMIGBNM; // 0x36A
		::System::Boolean CGDFBGFFKME; // 0x36B
		::System::Byte _padding3[0x4];
		::System::String* EAMKFOHIGPJ; // 0x370
		::System::String* KEILMPKHEAC; // 0x378

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Boolean GetRewardCustomListIsFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_GETREWARDCUSTOMLISTISFOCUS_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnClickChangeName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONCLICKCHANGENAME_OFFSET))(this);
		}

		::System::Void SetBigScene(::System::Boolean isBigScene)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_SETBIGSCENE_OFFSET))(this, isBigScene);
		}

		::System::Void RefreshMutiSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_REFRESHMUTISELECTED_OFFSET))(this);
		}

		::System::Void PlayBuddyChangeAni(::System::Int32 changeState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_PLAYBUDDYCHANGEANI_OFFSET))(this, changeState);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void PlayApplyTeamAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_PLAYAPPLYTEAMANIM_OFFSET))(this);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void NMKEOFEBLNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_NMKEOFEBLNC_OFFSET))(this);
		}

		::System::Void HJNJLKMIJPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_HJNJLKMIJPH_OFFSET))(this);
		}

		::System::Void OBOPCKFAFLM(::System::String* EIFONLCJOPG)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_OBOPCKFAFLM_OFFSET))(this, EIFONLCJOPG);
		}

		::System::Void GAEBEJAOIEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_GAEBEJAOIEK_OFFSET))(this);
		}

		::System::Void OJMLDPOEAKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_OJMLDPOEAKP_OFFSET))(this);
		}

		::System::Void PDKCHDBODJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this);
		}

		::System::Void LDHHJAGFEGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_LDHHJAGFEGB_OFFSET))(this);
		}

		::System::Void CEADLMDDJED(::System::Int32 EIFONLCJOPG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_CEADLMDDJED_OFFSET))(this, EIFONLCJOPG);
		}
	};
}
