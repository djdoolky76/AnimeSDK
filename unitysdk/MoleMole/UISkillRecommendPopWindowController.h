#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/GBJMDNJNIBO.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Share/EAvatarSkillType.h"

class BPHGNMNLLHF;
class CGFGKPILDDJ;
class IOBLKDEPBGJ;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UISkillRecommendRowWidgetController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_AAEHFHOLBNK_OFFSET UNITYSDK_OFFSET(0x15C6CA60)
#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_GEFMEOJLBON_OFFSET UNITYSDK_OFFSET(0x15C6BF50)
#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_GEHCCEMEEOH_OFFSET UNITYSDK_OFFSET(0x15C6D6E0)
#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x15C6B8F0)
#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15C6B8E0)
#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_LDPCBECGJHD_OFFSET UNITYSDK_OFFSET(0x15C6D4B0)
#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_NHACAFLOMMG_OFFSET UNITYSDK_OFFSET(0x15C6D660)
#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_OBDEAIKLMCM_OFFSET UNITYSDK_OFFSET(0x15C6CF40)
#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15C6C630)
#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15C6C6C0)
#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15C6B900)
#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15C6C1F0)
#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x15C6C380)
#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15C6C730)
#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15C6C920)
#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15C6C9B0)
#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15C6C9C0)
#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15C6C9D0)

namespace MoleMole
{
	inline static constexpr unsigned int UISkillRecommendPopWindowController_TypeDefinitionIndex = 53845;

	class UISkillRecommendPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::IOBLKDEPBGJ* _view; // 0x320
		::System::Collections::Generic::List_1<::MoleMole::UISkillRecommendRowWidgetController*>* AJOJDOKADOJ; // 0x328
		::System::Collections::Generic::List_1<::MoleMole::UISkillRecommendRowWidgetController*>* EKKDICBJGJL; // 0x330
		::System::Collections::Generic::List_1<::MoleMole::UISkillRecommendRowWidgetController*>* NNEKDOHFBEM; // 0x338
		::BPHGNMNLLHF* LCOPHLNFOPC; // 0x340
		::System::Collections::Generic::List_1<::CGFGKPILDDJ*>* BACGAGMCOEJ; // 0x348
		::CGFGKPILDDJ* BAMCLJBHKPA; // 0x350
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetPath>* CCLHHDCMHMP; // 0x358
		::System::Int32 HIFAJHJKOIH; // 0x360

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::GBJMDNJNIBO get_HotSwitchRootLayerState()
		{
			return ((::GBJMDNJNIBO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void AAEHFHOLBNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_AAEHFHOLBNK_OFFSET))(this);
		}

		::System::Void GEFMEOJLBON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_GEFMEOJLBON_OFFSET))(this);
		}

		::Foundation::AssetPath LDPCBECGJHD(::Share::EAvatarSkillType BBDHPBAPPPI)
		{
			return ((::Foundation::AssetPath(*)(::PVOID, ::Share::EAvatarSkillType))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_LDPCBECGJHD_OFFSET))(this, BBDHPBAPPPI);
		}

		::System::Void NHACAFLOMMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_NHACAFLOMMG_OFFSET))(this);
		}

		::System::Void GEHCCEMEEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_GEHCCEMEEOH_OFFSET))(this);
		}

		::System::Void PDKCHDBODJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_PDKCHDBODJB_OFFSET))(this);
		}

		::System::Void OBDEAIKLMCM(::System::Collections::Generic::List_1<::MoleMole::UISkillRecommendRowWidgetController*>* DHPEBPIHLJM, ::System::Collections::Generic::List_1<::System::Int32>* IAPIMLCDNNM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UISkillRecommendRowWidgetController*>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_OBDEAIKLMCM_OFFSET))(this, DHPEBPIHLJM, IAPIMLCDNNM);
		}
	};
}
