#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFOPAEHFPMM.h"
#include "unitysdk/MoleMole/UIWholeEffectWidgetController_FoldType.h"
#include "unitysdk/MoleMole/UIWholeEffectWidgetController_SortType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Bounds.h"

class BDKDBJHFALN;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralDynamicTipsPopWindowController; }
namespace MoleMole { class UIHollowCardItemBtnWidgetController; }
namespace MoleMole { class UIHollowDamnationWidgetController; }
namespace MoleMole { class UIHollowHotEffectInfoWidgetWidgetController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_AEKDHCIINAH_OFFSET UNITYSDK_OFFSET(0x164DF020)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_ALNMDFJKCHA_OFFSET UNITYSDK_OFFSET(0x164E1200)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_BLFKLLFLCMD_OFFSET UNITYSDK_OFFSET(0x164DEFB0)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_CBCGEOMAAFO_OFFSET UNITYSDK_OFFSET(0x164E0E00)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_GET_ISCARDFOLD_OFFSET UNITYSDK_OFFSET(0x164E0100)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_GET_ISCURSEFOLD_OFFSET UNITYSDK_OFFSET(0x164E02E0)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_GET_ISEFFECTFOLD_OFFSET UNITYSDK_OFFSET(0x164E01F0)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_JEJLHLKNHMO_OFFSET UNITYSDK_OFFSET(0x164E11D0)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_JLANBGAJBLC_OFFSET UNITYSDK_OFFSET(0x164E0FB0)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_KCKFKOJMOPC_OFFSET UNITYSDK_OFFSET(0x164E22E0)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x164DEB40)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_LCMGPAMJHKM_OFFSET UNITYSDK_OFFSET(0x164E0880)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_LECKJGCIFFG_OFFSET UNITYSDK_OFFSET(0x164DF4C0)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_MAFMKGAFKCB_OFFSET UNITYSDK_OFFSET(0x164E2230)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_NIHCJBFGGJD_OFFSET UNITYSDK_OFFSET(0x164E22B0)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_OENEAJGGKJE_OFFSET UNITYSDK_OFFSET(0x164E08B0)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x164DFFF0)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x164E0080)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x164DE8E0)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x164DE940)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_PBEOHILADNB_OFFSET UNITYSDK_OFFSET(0x164E25B0)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_PHDLGJBAJEN_OFFSET UNITYSDK_OFFSET(0x164E1CA0)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x164E03D0)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x164E0640)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x164E06D0)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x164E0760)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x164E07F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWholeEffectWidgetController_TypeDefinitionIndex = 83314;

	class UIWholeEffectWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::BDKDBJHFALN* _view; // 0x2C8
		::System::Collections::Generic::List_1<::MoleMole::UIHollowCardItemBtnWidgetController*>* NFKBPBOJFCH; // 0x2D0
		::System::Int32 KACMKLKIHIE; // 0x2D8
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Boolean>* CCPJNDHIKJB; // 0x2E0
		::MoleMole::UIWholeEffectWidgetController_FoldType HFFMGIMJMJI; // 0x2E8
		::MoleMole::UIWholeEffectWidgetController_SortType AFHBIJKEPHE; // 0x2EC
		::MoleMole::UIGeneralDynamicTipsPopWindowController* GDJPBNKPKCJ; // 0x2F0
		::Il2CppArray<::BFOPAEHFPMM>* LCADKGIADDN; // 0x2F8
		::System::Collections::Generic::List_1<::MoleMole::UIHollowCardItemBtnWidgetController*>* IEAGPBNPHBK; // 0x300
		::System::Collections::Generic::List_1<::MoleMole::UIHollowHotEffectInfoWidgetWidgetController*>* DPHIBPAPCBJ; // 0x308
		::System::Collections::Generic::List_1<::MoleMole::UIHollowDamnationWidgetController*>* DEAMLEJIEBL; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean get_IsCardFold()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_GET_ISCARDFOLD_OFFSET))(this);
		}

		::System::Boolean get_IsEffectFold()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_GET_ISEFFECTFOLD_OFFSET))(this);
		}

		::System::Boolean get_IsCurseFold()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_GET_ISCURSEFOLD_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void LCMGPAMJHKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_LCMGPAMJHKM_OFFSET))(this);
		}

		::System::Void CBCGEOMAAFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_CBCGEOMAAFO_OFFSET))(this);
		}

		::MoleMole::UIHollowCardItemBtnWidgetController* JLANBGAJBLC()
		{
			return ((::MoleMole::UIHollowCardItemBtnWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_JLANBGAJBLC_OFFSET))(this);
		}

		::System::Void JEJLHLKNHMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_JEJLHLKNHMO_OFFSET))(this);
		}

		::System::Void OENEAJGGKJE(::MoleMole::UIWholeEffectWidgetController_FoldType OBNIAHNMHPF, ::System::Boolean JKBLDFBGBPK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWholeEffectWidgetController_FoldType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_OENEAJGGKJE_OFFSET))(this, OBNIAHNMHPF, JKBLDFBGBPK);
		}

		::System::Void LECKJGCIFFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_LECKJGCIFFG_OFFSET))(this);
		}

		::System::Void AEKDHCIINAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_AEKDHCIINAH_OFFSET))(this);
		}

		::UnityEngine::Bounds PHDLGJBAJEN(::UnityEngine::RectTransform* HACLFJIKAAO)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_PHDLGJBAJEN_OFFSET))(this, HACLFJIKAAO);
		}

		::System::Void ALNMDFJKCHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_ALNMDFJKCHA_OFFSET))(this);
		}

		::System::Void MAFMKGAFKCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_MAFMKGAFKCB_OFFSET))(this);
		}

		::System::Void NIHCJBFGGJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_NIHCJBFGGJD_OFFSET))(this);
		}

		::System::Void BLFKLLFLCMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_BLFKLLFLCMD_OFFSET))(this);
		}

		::System::Void KDGMEFEJMGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_KDGMEFEJMGJ_OFFSET))(this);
		}

		::System::Void KCKFKOJMOPC(::System::Int32 ABHBKFJKINO, ::System::Boolean IPLGNDKCANH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_KCKFKOJMOPC_OFFSET))(this, ABHBKFJKINO, IPLGNDKCANH);
		}

		::System::Void PBEOHILADNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_PBEOHILADNB_OFFSET))(this);
		}
	};
}
