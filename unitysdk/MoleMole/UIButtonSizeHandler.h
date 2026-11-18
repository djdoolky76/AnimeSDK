#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_ButtonType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_PositionType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_SceneType.h"
#include "unitysdk/MoleMole/UIButtonSizeHandler_KNILJNGFNCP.h"
#include "unitysdk/MoleMole/UIButtonSizeHandler_MNJBEPIPEOO.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_MobileButtonPositionInfo.h"
#include "unitysdk/MoleMole/UIPhysicalPosHandler_BDCIINGEKMH.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace MoleMole { class ConfigUICommon_Input_ConfigMobilePanelLayout; }
namespace MoleMole { class UserLocalDataItem_OverrideMobileButtonPanel; }
namespace UnityEngine { class Canvas; }

#define MOLEMOLE_UIBUTTONSIZEHANDLER_AJLHDDDDNHH_OFFSET UNITYSDK_OFFSET(0x19663A20)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_APPLYLAYOUTRESULT_OFFSET UNITYSDK_OFFSET(0x19664D80)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_APPLYUGUIMINMAX_OFFSET UNITYSDK_OFFSET(0x19664280)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_BMOGOLBNPCF_OFFSET UNITYSDK_OFFSET(0x196660E0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_CALCULATELAYOUT_OFFSET UNITYSDK_OFFSET(0x19662D00)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_DIHEAENGGOC_OFFSET UNITYSDK_OFFSET(0x19665D40)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_DJFLFBMCHLH_OFFSET UNITYSDK_OFFSET(0x19665210)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_EEJLGPENPMA_OFFSET UNITYSDK_OFFSET(0x196658B0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_GETLAYOUTRESULT_OFFSET UNITYSDK_OFFSET(0x19664660)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_GET_ISBUTTONMODE_OFFSET UNITYSDK_OFFSET(0x19662800)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_GHDGDPMONDA_OFFSET UNITYSDK_OFFSET(0x19662850)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_GHNAIJKPLKK_OFFSET UNITYSDK_OFFSET(0x196637A0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_HCIACPPDKGD_OFFSET UNITYSDK_OFFSET(0x19665A40)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_IGCLGNLFMKK_OFFSET UNITYSDK_OFFSET(0x196652B0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x19665BE0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_IMEEHLLLGDJ_OFFSET UNITYSDK_OFFSET(0x19664440)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_INBMNEKNPMA_OFFSET UNITYSDK_OFFSET(0x19663AA0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_INLEAIPJAHP_OFFSET UNITYSDK_OFFSET(0x19664080)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_KCHJPIBHHPP_OFFSET UNITYSDK_OFFSET(0x19663AF0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_KCOMMPBPJEF_OFFSET UNITYSDK_OFFSET(0x19665F40)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x19665220)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_KFJICOHPNJL_OFFSET UNITYSDK_OFFSET(0x19665C70)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_KINAEDGIABH_OFFSET UNITYSDK_OFFSET(0x19665190)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19662A90)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19662940)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x19662BE0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_PIBOKBGAAIA_OFFSET UNITYSDK_OFFSET(0x19665DA0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_PIOOPLAPDPK_OFFSET UNITYSDK_OFFSET(0x19665A00)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_SETBUTTONSCENEOVERRIDE_OFFSET UNITYSDK_OFFSET(0x196628B0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_SETBUTTONTYPE_OFFSET UNITYSDK_OFFSET(0x196626E0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_SETSCENETYPE_OFFSET UNITYSDK_OFFSET(0x19662770)
#define MOLEMOLE_UIBUTTONSIZEHANDLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x196651F0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x196651A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIButtonSizeHandler_TypeDefinitionIndex = 58802;

	class UIButtonSizeHandler : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		static ::UnityEngine::Vector2* StaticGet_LGJKBKMCDBI()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(UIButtonSizeHandler_TypeDefinitionIndex)->GetStaticField(0x13550);
		}
		static ::System::Single* StaticGet_GEBOLAMCLOF()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIButtonSizeHandler_TypeDefinitionIndex)->GetStaticField(0x13558);
		}
		::MoleMole::ConfigUICommon_Input_ButtonType _buttonTypeV2; // 0x18
		::MoleMole::ConfigUICommon_Input_SceneType _sceneTypeV2; // 0x1C
		::MoleMole::ConfigUICommon_Input_PositionType _positionTypeV2; // 0x20
		::System::Single _xSize; // 0x24
		::System::Single _ySize; // 0x28
		::MoleMole::UIButtonSizeHandler_MNJBEPIPEOO _constraintSizeType; // 0x2C
		::MoleMole::ConfigUICommon_Input_SceneType NPGKODLFKEM; // 0x30
		::System::Byte _padding0[0x4];
		::UnityEngine::Canvas* LHHCBJMINFM; // 0x38
		::System::Boolean JJJFLPOLELO; // 0x40
		::System::Boolean IANHKOLCODN; // 0x41
		::System::Boolean NHBJNGHHKMC; // 0x42
		::System::Boolean _ADPHDBHIELK_k__BackingField; // 0x43

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER__CCTOR_OFFSET))();
		}

		::System::Void SetButtonType(::MoleMole::ConfigUICommon_Input_ButtonType DFOLAGMLFPB)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_ButtonType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_SETBUTTONTYPE_OFFSET))(this, DFOLAGMLFPB);
		}

		::System::Void SetSceneType(::MoleMole::ConfigUICommon_Input_SceneType DAKFBIOBNBN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_SceneType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_SETSCENETYPE_OFFSET))(this, DAKFBIOBNBN);
		}

		::System::Boolean get_IsButtonMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_GET_ISBUTTONMODE_OFFSET))(this);
		}

		::System::Void SetButtonSceneOverride(::MoleMole::ConfigUICommon_Input_SceneType DAKFBIOBNBN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_SceneType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_SETBUTTONSCENEOVERRIDE_OFFSET))(this, DAKFBIOBNBN);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_ONLATEUPDATE_OFFSET))(this);
		}

		::System::Void CalculateLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_CALCULATELAYOUT_OFFSET))(this);
		}

		::MoleMole::UIPhysicalPosHandler_BDCIINGEKMH GetLayoutResult(::System::Single ODDJPOJDPMH)
		{
			return ((::MoleMole::UIPhysicalPosHandler_BDCIINGEKMH(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_GETLAYOUTRESULT_OFFSET))(this, ODDJPOJDPMH);
		}

		::System::Void ApplyLayoutResult(::MoleMole::UIPhysicalPosHandler_BDCIINGEKMH EKAAIJAKBPM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIPhysicalPosHandler_BDCIINGEKMH))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_APPLYLAYOUTRESULT_OFFSET))(this, EKAAIJAKBPM);
		}

		::System::Void ApplyUguiMinMax(::UnityEngine::Vector2 INADNNOPKDE, ::UnityEngine::Vector2 AHFLBPBELCI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_APPLYUGUIMINMAX_OFFSET))(this, INADNNOPKDE, AHFLBPBELCI);
		}

		::System::Boolean DJFLFBMCHLH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_DJFLFBMCHLH_OFFSET))(this);
		}

		static ::MoleMole::ConfigUICommon_Input_ButtonType AJLHDDDDNHH(::MoleMole::ConfigUICommon_Input_ButtonType PNIBHPIGMME)
		{
			return ((::MoleMole::ConfigUICommon_Input_ButtonType(*)(::MoleMole::ConfigUICommon_Input_ButtonType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_AJLHDDDDNHH_OFFSET))(PNIBHPIGMME);
		}

		::MoleMole::ConfigUICommon_Input_MobileButtonPositionInfo KCHJPIBHHPP()
		{
			return ((::MoleMole::ConfigUICommon_Input_MobileButtonPositionInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_KCHJPIBHHPP_OFFSET))(this);
		}

		::System::Boolean GHNAIJKPLKK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_GHNAIJKPLKK_OFFSET))(this);
		}

		::UnityEngine::Canvas* INLEAIPJAHP()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_INLEAIPJAHP_OFFSET))(this);
		}

		::System::Void KDOIBCBFBAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_KDOIBCBFBAG_OFFSET))(this);
		}

		::UnityEngine::Vector2 IGCLGNLFMKK()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_IGCLGNLFMKK_OFFSET))(this);
		}

		::MoleMole::ConfigUICommon_Input_ConfigMobilePanelLayout* EEJLGPENPMA()
		{
			return ((::MoleMole::ConfigUICommon_Input_ConfigMobilePanelLayout*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_EEJLGPENPMA_OFFSET))(this);
		}

		::System::Void PIOOPLAPDPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_PIOOPLAPDPK_OFFSET))(this);
		}

		::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel* HCIACPPDKGD()
		{
			return ((::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_HCIACPPDKGD_OFFSET))(this);
		}

		::UnityEngine::Vector2 KINAEDGIABH()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_KINAEDGIABH_OFFSET))(this);
		}

		static ::MoleMole::ConfigUICommon_Input_ButtonType INBMNEKNPMA(::MoleMole::ConfigUICommon_Input_ButtonType PNIBHPIGMME)
		{
			return ((::MoleMole::ConfigUICommon_Input_ButtonType(*)(::MoleMole::ConfigUICommon_Input_ButtonType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_INBMNEKNPMA_OFFSET))(PNIBHPIGMME);
		}

		::System::Void ILHIIDBCNEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_ILHIIDBCNEC_OFFSET))(this);
		}

		::System::Single IMEEHLLLGDJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_IMEEHLLLGDJ_OFFSET))(this);
		}

		::System::Int32 KFJICOHPNJL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_KFJICOHPNJL_OFFSET))(this);
		}

		::UnityEngine::Vector2Int DIHEAENGGOC()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_DIHEAENGGOC_OFFSET))(this);
		}

		::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel* PIBOKBGAAIA()
		{
			return ((::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_PIBOKBGAAIA_OFFSET))(this);
		}

		::MoleMole::UIButtonSizeHandler_KNILJNGFNCP GHDGDPMONDA()
		{
			return ((::MoleMole::UIButtonSizeHandler_KNILJNGFNCP(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_GHDGDPMONDA_OFFSET))(this);
		}

		::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel* KCOMMPBPJEF()
		{
			return ((::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_KCOMMPBPJEF_OFFSET))(this);
		}

		::System::Void BMOGOLBNPCF(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_BMOGOLBNPCF_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
