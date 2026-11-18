#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UIHandBookAvatarAwakenRewardItemWidgetController_RewardTakeState.h"
#include "unitysdk/DEDDPKGLKHI_LODLFMBCLAH.h"

class PPAHCHNLELC;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIHandBookAwakenItemRewardContext; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER_ABMGIDLKDMG_OFFSET UNITYSDK_OFFSET(0x16EF0EB0)
#define MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER_JHKHDNOICIJ_OFFSET UNITYSDK_OFFSET(0x16EF0A40)
#define MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16EF0620)
#define MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16EF0730)
#define MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16EF06B0)
#define MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16EF05C0)
#define MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER_REFRESHTAKEBTNSTATE_OFFSET UNITYSDK_OFFSET(0x16EF0790)
#define MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16EF0BA0)
#define MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16EF0C60)
#define MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16EF0CF0)
#define MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16EF0D90)
#define MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16EF0E20)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookAvatarAwakenRewardItemWidgetController_TypeDefinitionIndex = 44469;

	class UIHandBookAvatarAwakenRewardItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::PPAHCHNLELC* _view; // 0x2F8
		::MoleMole::UIHandBookAwakenItemRewardContext* MIPDAENBCII; // 0x300
		::System::Collections::Generic::List_1<::System::Object*>* CHFKPLNGELF; // 0x308
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* HLIPBPBPNPB; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshTakeBtnState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER_REFRESHTAKEBTNSTATE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void ABMGIDLKDMG(::DEDDPKGLKHI_LODLFMBCLAH IPMMCGDMODG, ::System::Boolean OPDJEKJBHAB)
		{
			return ((::System::Void(*)(::PVOID, ::DEDDPKGLKHI_LODLFMBCLAH, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER_ABMGIDLKDMG_OFFSET))(this, IPMMCGDMODG, OPDJEKJBHAB);
		}

		::MoleMole::UIHandBookAvatarAwakenRewardItemWidgetController_RewardTakeState JHKHDNOICIJ()
		{
			return ((::MoleMole::UIHandBookAvatarAwakenRewardItemWidgetController_RewardTakeState(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER_JHKHDNOICIJ_OFFSET))(this);
		}
	};
}
