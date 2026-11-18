#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBattleInfoWidgetControllerBase.h"
#include "unitysdk/System/ValueTuple_2.h"

class KEDCFOLEAPM;
class KOIDMLPJGML;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER_FGENNBGPFJI_OFFSET UNITYSDK_OFFSET(0x195E51B0)
#define MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER_FILLCARDLIST_OFFSET UNITYSDK_OFFSET(0x195E56D0)
#define MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER_FILLREWARDMAP_OFFSET UNITYSDK_OFFSET(0x195E58E0)
#define MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER_GETPROGRESS_OFFSET UNITYSDK_OFFSET(0x195E5100)
#define MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x195E55D0)
#define MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x195E5150)
#define MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x195E5C00)
#define MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER___BASE_GETPROGRESS_OFFSET UNITYSDK_OFFSET(0x195E5C10)
#define MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x195E5CA0)
#define MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x195E5D70)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelDoubleEliteInfoWidgetController_TypeDefinitionIndex = 68657;

	class UIInLevelDoubleEliteInfoWidgetController : public ::MoleMole::UIBattleInfoWidgetControllerBase
	{
	public:
		::KEDCFOLEAPM* _view; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> GetProgress()
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER_GETPROGRESS_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void FillCardList(::System::Collections::Generic::List_1<::System::Int32>* cardList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER_FILLCARDLIST_OFFSET))(this, cardList);
		}

		::System::Void FillRewardMap(::System::Collections::Generic::List_1<::KOIDMLPJGML*>* rewardMap)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KOIDMLPJGML*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER_FILLREWARDMAP_OFFSET))(this, rewardMap);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> __base_GetProgress()
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER___BASE_GETPROGRESS_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void FGENNBGPFJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER_FGENNBGPFJI_OFFSET))(this);
		}
	};
}
