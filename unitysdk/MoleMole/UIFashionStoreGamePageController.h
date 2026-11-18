#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCJFHFJFBLL.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class ABBHGEIPOAN;
class AEINDKLBMFN;
class LEMCNAEGCJH;
class NHMIBDFNCNE;
class OCCHEBFLDEG;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFashionStore3DModelController; }
namespace MoleMole { class UIFashionStoreGameKeyOnTrailWidgetController; }
namespace MoleMole { class UIFashionStoreKeyItemWidgetController; }
namespace MoleMole { class UIFashionStoreMiniGameRowWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_CLEANKEYSCTRLS_OFFSET UNITYSDK_OFFSET(0x184B70D0)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_CLEANKEYSONTRAILCTRLS_OFFSET UNITYSDK_OFFSET(0x184B7260)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_CLEANTRAILROWS_OFFSET UNITYSDK_OFFSET(0x184B73F0)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_GETRANGE_OFFSET UNITYSDK_OFFSET(0x184B7580)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_GET_CURPLAYINGLEVELCFG_OFFSET UNITYSDK_OFFSET(0x184B6990)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_GET_CURTIMESCALE_OFFSET UNITYSDK_OFFSET(0x184B6AB0)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_GET_KEYSONTRAILCTRLS_OFFSET UNITYSDK_OFFSET(0x184B7A10)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x184B5C10)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_HAEPBCFIKIN_OFFSET UNITYSDK_OFFSET(0x184B69A0)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_ONCLICKPAUSEORRESUME_OFFSET UNITYSDK_OFFSET(0x184B6BA0)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x184B5C20)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_ONKEYCALLBACK_OFFSET UNITYSDK_OFFSET(0x184B61F0)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_ONLEVELEND_OFFSET UNITYSDK_OFFSET(0x184B6B00)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_ONSTARTLEVEL_OFFSET UNITYSDK_OFFSET(0x184B5F60)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x184B7AD0)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x184B5CB0)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x184B5EA0)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_REFRESHSCOREPROGRESS_OFFSET UNITYSDK_OFFSET(0x184B62B0)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_RESETKEYBOARDBYROUND_OFFSET UNITYSDK_OFFSET(0x184B6C40)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_SETROUNDMSG_OFFSET UNITYSDK_OFFSET(0x184B6790)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_SETROUNDPROG_OFFSET UNITYSDK_OFFSET(0x184B6890)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x184B7A20)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x184B7B40)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x184B7B50)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x184B7BE0)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x184B7BF0)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x184B7C00)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStoreGamePageController_TypeDefinitionIndex = 41450;

	class UIFashionStoreGamePageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::LEMCNAEGCJH* _view; // 0x330
		::MoleMole::UIFashionStore3DModelController* LKENOGCFFJG; // 0x338
		::OCCHEBFLDEG* NBFAAGODCLF; // 0x340
		::ABBHGEIPOAN* FOPNJFNENKM; // 0x348
		::NHMIBDFNCNE* EJNKDJNPJLA; // 0x350
		::OCCHEBFLDEG* FCKIADIGDHM; // 0x358
		::System::Boolean ONMLHFMBHHC; // 0x360
		::System::Byte _padding0[0x3];
		::System::Int32 DMINPGGNNLI; // 0x364
		::System::Int32 BKHBCANPPCH; // 0x368
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::List_1<::MoleMole::UIFashionStoreMiniGameRowWidgetController*>* HIGLIMNMAOJ; // 0x370
		::System::Collections::Generic::List_1<::MoleMole::UIFashionStoreGameKeyOnTrailWidgetController*>* MAMMIDJDPHD; // 0x378
		::System::Collections::Generic::List_1<::MoleMole::UIFashionStoreKeyItemWidgetController*>* GPIJEKMJACN; // 0x380

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnKeyCallBack(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_ONKEYCALLBACK_OFFSET))(this, args);
		}

		::System::Void SetRoundMsg(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_SETROUNDMSG_OFFSET))(this, msg);
		}

		::System::Void SetRoundProg(::System::Int32 curRound)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_SETROUNDPROG_OFFSET))(this, curRound);
		}

		::OCCHEBFLDEG* get_CurPlayingLevelCfg()
		{
			return ((::OCCHEBFLDEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_GET_CURPLAYINGLEVELCFG_OFFSET))(this);
		}

		::System::Void OnStartLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_ONSTARTLEVEL_OFFSET))(this);
		}

		::System::Single get_CurTimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_GET_CURTIMESCALE_OFFSET))(this);
		}

		::System::Void OnLevelEnd(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_ONLEVELEND_OFFSET))(this, args);
		}

		::System::Void OnClickPauseOrResume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_ONCLICKPAUSEORRESUME_OFFSET))(this);
		}

		::System::Void ResetKeyBoardByRound(::AEINDKLBMFN* roundCfg)
		{
			return ((::System::Void(*)(::PVOID, ::AEINDKLBMFN*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_RESETKEYBOARDBYROUND_OFFSET))(this, roundCfg);
		}

		::System::Void RefreshScoreProgress(::DCJFHFJFBLL beatActionType)
		{
			return ((::System::Void(*)(::PVOID, ::DCJFHFJFBLL))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_REFRESHSCOREPROGRESS_OFFSET))(this, beatActionType);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetRange(::System::Collections::Generic::List_1<::System::Int32>* original, ::System::Int32 partIdx)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_GETRANGE_OFFSET))(this, original, partIdx);
		}

		::System::Void CleanKeysCtrls()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_CLEANKEYSCTRLS_OFFSET))(this);
		}

		::System::Void CleanKeysOnTrailCtrls()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_CLEANKEYSONTRAILCTRLS_OFFSET))(this);
		}

		::System::Void CleanTrailRows()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_CLEANTRAILROWS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIFashionStoreGameKeyOnTrailWidgetController*>* get_KeysOnTrailCtrls()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIFashionStoreGameKeyOnTrailWidgetController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_GET_KEYSONTRAILCTRLS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::ABBHGEIPOAN* HAEPBCFIKIN()
		{
			return ((::ABBHGEIPOAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_HAEPBCFIKIN_OFFSET))(this);
		}
	};
}
