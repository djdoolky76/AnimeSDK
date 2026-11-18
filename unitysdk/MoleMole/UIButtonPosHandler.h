#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_ButtonType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_PanelType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_PositionType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_SceneType.h"
#include "unitysdk/MoleMole/UIButtonPosHandler_AlignMeta.h"
#include "unitysdk/MoleMole/UIButtonPosHandler_EBMBMCOBIEG.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_MobileButtonPositionInfo.h"
#include "unitysdk/MoleMole/UIButtonPosHandler_AIGPBFMCJGO.h"
#include "unitysdk/MoleMole/UIButtonPosHandler_LGBDJCGJMGD.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace MoleMole { class ConfigUICommon_Input_ConfigMobilePanelLayout; }
namespace MoleMole { class UIButtonSizeHandler; }
namespace MoleMole { class UserLocalDataItem_OverrideMobileButtonPanel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }

#define MOLEMOLE_UIBUTTONPOSHANDLER_ABMGCMCDKKE_OFFSET UNITYSDK_OFFSET(0x1738A3C0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_AFHPKGPLMLG_OFFSET UNITYSDK_OFFSET(0x17389330)
#define MOLEMOLE_UIBUTTONPOSHANDLER_AJLHDDDDNHH_OFFSET UNITYSDK_OFFSET(0x17387F20)
#define MOLEMOLE_UIBUTTONPOSHANDLER_APPLYLAYOUTRESULT_OFFSET UNITYSDK_OFFSET(0x17388AA0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x17383A30)
#define MOLEMOLE_UIBUTTONPOSHANDLER_BAIEOPEKJNM_OFFSET UNITYSDK_OFFSET(0x17385930)
#define MOLEMOLE_UIBUTTONPOSHANDLER_BJBPHPDGPKK_OFFSET UNITYSDK_OFFSET(0x17389CF0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_BMOGOLBNPCF_OFFSET UNITYSDK_OFFSET(0x1738B900)
#define MOLEMOLE_UIBUTTONPOSHANDLER_BNGOBBLDJHA_OFFSET UNITYSDK_OFFSET(0x17389320)
#define MOLEMOLE_UIBUTTONPOSHANDLER_CALCULATELAYOUT_OFFSET UNITYSDK_OFFSET(0x17384080)
#define MOLEMOLE_UIBUTTONPOSHANDLER_CLAMALDEDPL_OFFSET UNITYSDK_OFFSET(0x17388910)
#define MOLEMOLE_UIBUTTONPOSHANDLER_DBOHALHMJBF_OFFSET UNITYSDK_OFFSET(0x17385810)
#define MOLEMOLE_UIBUTTONPOSHANDLER_DIHEAENGGOC_OFFSET UNITYSDK_OFFSET(0x17389B70)
#define MOLEMOLE_UIBUTTONPOSHANDLER_DJFLFBMCHLH_OFFSET UNITYSDK_OFFSET(0x17389870)
#define MOLEMOLE_UIBUTTONPOSHANDLER_DJJDHFAKNJI_OFFSET UNITYSDK_OFFSET(0x17388FF0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_EEJLGPENPMA_OFFSET UNITYSDK_OFFSET(0x1738A270)
#define MOLEMOLE_UIBUTTONPOSHANDLER_EIBFCKNICHP_OFFSET UNITYSDK_OFFSET(0x1738A490)
#define MOLEMOLE_UIBUTTONPOSHANDLER_EMLLPAAAHNG_OFFSET UNITYSDK_OFFSET(0x17386440)
#define MOLEMOLE_UIBUTTONPOSHANDLER_EVALUATESCREENPOSATLEVELS_OFFSET UNITYSDK_OFFSET(0x17385F10)
#define MOLEMOLE_UIBUTTONPOSHANDLER_GETLAYOUTRESULT_1_OFFSET UNITYSDK_OFFSET(0x173865C0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_GETLAYOUTRESULT_OFFSET UNITYSDK_OFFSET(0x17388ED0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_GETPOSHANDLER_OFFSET UNITYSDK_OFFSET(0x17383790)
#define MOLEMOLE_UIBUTTONPOSHANDLER_GET_ALLPOSHANDLERS_OFFSET UNITYSDK_OFFSET(0x17383330)
#define MOLEMOLE_UIBUTTONPOSHANDLER_GET_BUTTONTYPE_OFFSET UNITYSDK_OFFSET(0x17383390)
#define MOLEMOLE_UIBUTTONPOSHANDLER_GET_COLLISIONGAP_OFFSET UNITYSDK_OFFSET(0x17383210)
#define MOLEMOLE_UIBUTTONPOSHANDLER_GET_COLLISIONHANDLERS_OFFSET UNITYSDK_OFFSET(0x173832D0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_GET_ENABLECOLLISIONPUSH_OFFSET UNITYSDK_OFFSET(0x17383200)
#define MOLEMOLE_UIBUTTONPOSHANDLER_GET_ISBUTTONMODE_OFFSET UNITYSDK_OFFSET(0x17383220)
#define MOLEMOLE_UIBUTTONPOSHANDLER_GET_POSITIONTYPE_OFFSET UNITYSDK_OFFSET(0x173833B0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_GET_REVERSESWITCHINLEVELRANGERIGHTSHRINKDESIGN_OFFSET UNITYSDK_OFFSET(0x173836E0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_GET_REVERSESWITCHJOYSTICKANCHORDESIGN_OFFSET UNITYSDK_OFFSET(0x17383580)
#define MOLEMOLE_UIBUTTONPOSHANDLER_GET_REVERSESWITCHMOVESPACESHIFTDESIGN_OFFSET UNITYSDK_OFFSET(0x17383630)
#define MOLEMOLE_UIBUTTONPOSHANDLER_GET_SCENETYPE_OFFSET UNITYSDK_OFFSET(0x173833A0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_GHDGDPMONDA_OFFSET UNITYSDK_OFFSET(0x17383270)
#define MOLEMOLE_UIBUTTONPOSHANDLER_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x1738B270)
#define MOLEMOLE_UIBUTTONPOSHANDLER_HCIACPPDKGD_OFFSET UNITYSDK_OFFSET(0x1738AFC0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_HCMIGEAJMPJ_OFFSET UNITYSDK_OFFSET(0x17387CA0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_HHJDFNNNIEO_OFFSET UNITYSDK_OFFSET(0x1738B1A0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_HOFPIOKFEGE_OFFSET UNITYSDK_OFFSET(0x17385C20)
#define MOLEMOLE_UIBUTTONPOSHANDLER_IBOHCHBCLHN_OFFSET UNITYSDK_OFFSET(0x17385990)
#define MOLEMOLE_UIBUTTONPOSHANDLER_IGCLGNLFMKK_OFFSET UNITYSDK_OFFSET(0x1738B300)
#define MOLEMOLE_UIBUTTONPOSHANDLER_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x1738B910)
#define MOLEMOLE_UIBUTTONPOSHANDLER_INBMNEKNPMA_OFFSET UNITYSDK_OFFSET(0x17387FA0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_INLEAIPJAHP_OFFSET UNITYSDK_OFFSET(0x17388570)
#define MOLEMOLE_UIBUTTONPOSHANDLER_IPMLECBCMMD_OFFSET UNITYSDK_OFFSET(0x17389880)
#define MOLEMOLE_UIBUTTONPOSHANDLER_KCHJPIBHHPP_OFFSET UNITYSDK_OFFSET(0x17387FF0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_KCOMMPBPJEF_OFFSET UNITYSDK_OFFSET(0x1738AD30)
#define MOLEMOLE_UIBUTTONPOSHANDLER_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x1738B9A0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_KEHPPNIHBOH_OFFSET UNITYSDK_OFFSET(0x17389660)
#define MOLEMOLE_UIBUTTONPOSHANDLER_KFJICOHPNJL_OFFSET UNITYSDK_OFFSET(0x17389AA0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_KHMDEAJICMA_OFFSET UNITYSDK_OFFSET(0x17388780)
#define MOLEMOLE_UIBUTTONPOSHANDLER_MDLKEBLNLGK_OFFSET UNITYSDK_OFFSET(0x1738A720)
#define MOLEMOLE_UIBUTTONPOSHANDLER_NDOKLBOHICD_OFFSET UNITYSDK_OFFSET(0x17389920)
#define MOLEMOLE_UIBUTTONPOSHANDLER_NJEDIICAJFH_OFFSET UNITYSDK_OFFSET(0x17388FE0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x17383D70)
#define MOLEMOLE_UIBUTTONPOSHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x17383B00)
#define MOLEMOLE_UIBUTTONPOSHANDLER_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x17383F50)
#define MOLEMOLE_UIBUTTONPOSHANDLER_PIBOKBGAAIA_OFFSET UNITYSDK_OFFSET(0x1738AAA0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_PIOOPLAPDPK_OFFSET UNITYSDK_OFFSET(0x1738B160)
#define MOLEMOLE_UIBUTTONPOSHANDLER_PLIIFNNBICH_OFFSET UNITYSDK_OFFSET(0x173862C0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_SETBUTTONSCENEOVERRIDE_OFFSET UNITYSDK_OFFSET(0x173834E0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_SETBUTTONTYPE_OFFSET UNITYSDK_OFFSET(0x173833C0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_SETSCENETYPE_OFFSET UNITYSDK_OFFSET(0x17383450)
#define MOLEMOLE_UIBUTTONPOSHANDLER_TRYPUSHAWAYFROM_OFFSET UNITYSDK_OFFSET(0x17384DC0)
#define MOLEMOLE_UIBUTTONPOSHANDLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17389760)
#define MOLEMOLE_UIBUTTONPOSHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17389710)

namespace MoleMole
{
	inline static constexpr unsigned int UIButtonPosHandler_TypeDefinitionIndex = 88979;

	class UIButtonPosHandler : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::MoleMole::UIButtonPosHandler*>** StaticGet_OFNJKOJPBPO()
		{
			return (::System::Collections::Generic::List_1<::MoleMole::UIButtonPosHandler*>**)Il2CppClass::FromTypeDefinitionIndex(UIButtonPosHandler_TypeDefinitionIndex)->GetStaticField(0x4CB50);
		}
		static ::System::Collections::Generic::List_1<::MoleMole::UIButtonPosHandler*>** StaticGet_KCCIHKBNBME()
		{
			return (::System::Collections::Generic::List_1<::MoleMole::UIButtonPosHandler*>**)Il2CppClass::FromTypeDefinitionIndex(UIButtonPosHandler_TypeDefinitionIndex)->GetStaticField(0x4CB58);
		}
		static ::UnityEngine::Vector2* StaticGet_LGJKBKMCDBI()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(UIButtonPosHandler_TypeDefinitionIndex)->GetStaticField(0x11F20);
		}
		static ::System::Single* StaticGet_GEBOLAMCLOF()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIButtonPosHandler_TypeDefinitionIndex)->GetStaticField(0x11F28);
		}
		::System::String* _name; // 0x18
		::MoleMole::ConfigUICommon_Input_ButtonType _buttonTypeV2; // 0x20
		::MoleMole::ConfigUICommon_Input_SceneType _sceneTypeV2; // 0x24
		::MoleMole::ConfigUICommon_Input_PositionType _positionTypeV2; // 0x28
		::System::Byte _padding0[0x4];
		::MoleMole::UIButtonPosHandler_AlignMeta _horizontalAlignMeta; // 0x30
		::MoleMole::UIButtonPosHandler_AlignMeta _verticalAlignMeta; // 0x58
		::System::Boolean _enableCollisionPush; // 0x80
		::System::Byte _padding1[0x3];
		::System::Single _collisionRadius; // 0x84
		::MoleMole::ConfigUICommon_Input_SceneType NPGKODLFKEM; // 0x88
		::System::Byte _padding2[0x4];
		::MoleMole::UIButtonSizeHandler* OHPODEPHPME; // 0x90
		::UnityEngine::Canvas* LHHCBJMINFM; // 0x98
		::System::Boolean JJJFLPOLELO; // 0xA0
		::System::Boolean HOCCNOAALHH; // 0xA1
		::System::Boolean IANHKOLCODN; // 0xA2
		::System::Boolean NHBJNGHHKMC; // 0xA3
		::System::Boolean _ADPHDBHIELK_k__BackingField; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER__CCTOR_OFFSET))();
		}

		::System::Boolean get_EnableCollisionPush()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_GET_ENABLECOLLISIONPUSH_OFFSET))(this);
		}

		::System::Single get_CollisionGap()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_GET_COLLISIONGAP_OFFSET))(this);
		}

		::System::Boolean get_IsButtonMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_GET_ISBUTTONMODE_OFFSET))(this);
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::UIButtonPosHandler*>* get_CollisionHandlers()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::MoleMole::UIButtonPosHandler*>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_GET_COLLISIONHANDLERS_OFFSET))();
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::UIButtonPosHandler*>* get_AllPosHandlers()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::MoleMole::UIButtonPosHandler*>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_GET_ALLPOSHANDLERS_OFFSET))();
		}

		::MoleMole::ConfigUICommon_Input_ButtonType get_ButtonType()
		{
			return ((::MoleMole::ConfigUICommon_Input_ButtonType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_GET_BUTTONTYPE_OFFSET))(this);
		}

		::MoleMole::ConfigUICommon_Input_SceneType get_SceneType()
		{
			return ((::MoleMole::ConfigUICommon_Input_SceneType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_GET_SCENETYPE_OFFSET))(this);
		}

		::MoleMole::ConfigUICommon_Input_PositionType get_PositionType()
		{
			return ((::MoleMole::ConfigUICommon_Input_PositionType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_GET_POSITIONTYPE_OFFSET))(this);
		}

		::System::Void SetButtonType(::MoleMole::ConfigUICommon_Input_ButtonType DFOLAGMLFPB)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_ButtonType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_SETBUTTONTYPE_OFFSET))(this, DFOLAGMLFPB);
		}

		::System::Void SetSceneType(::MoleMole::ConfigUICommon_Input_SceneType DAKFBIOBNBN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_SceneType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_SETSCENETYPE_OFFSET))(this, DAKFBIOBNBN);
		}

		::System::Void SetButtonSceneOverride(::MoleMole::ConfigUICommon_Input_SceneType DAKFBIOBNBN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_SceneType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_SETBUTTONSCENEOVERRIDE_OFFSET))(this, DAKFBIOBNBN);
		}

		static ::System::Single get_ReverseSwitchJoystickAnchorDesign()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_GET_REVERSESWITCHJOYSTICKANCHORDESIGN_OFFSET))();
		}

		static ::System::Single get_ReverseSwitchMoveSpaceShiftDesign()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_GET_REVERSESWITCHMOVESPACESHIFTDESIGN_OFFSET))();
		}

		static ::System::Single get_ReverseSwitchInLevelRangeRightShrinkDesign()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_GET_REVERSESWITCHINLEVELRANGERIGHTSHRINKDESIGN_OFFSET))();
		}

		static ::MoleMole::UIButtonPosHandler* GetPosHandler(::System::String* HIAIKHDFCLN)
		{
			return ((::MoleMole::UIButtonPosHandler*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_GETPOSHANDLER_OFFSET))(HIAIKHDFCLN);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_ONLATEUPDATE_OFFSET))(this);
		}

		::System::Boolean TryPushAwayFrom(::UnityEngine::Vector2 BBPOHHDKBCF, ::System::Single IHJAGGJLMEB, ::System::Single NFJCBMPKDGJ, ::MoleMole::ConfigUICommon_Input_SceneType DAKFBIOBNBN, ::MoleMole::ConfigUICommon_Input_PanelType EPEOEKBCOPM, ::System::Nullable_1<::System::Boolean> JGLJCGLFJPO)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::MoleMole::ConfigUICommon_Input_SceneType, ::MoleMole::ConfigUICommon_Input_PanelType, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_TRYPUSHAWAYFROM_OFFSET))(this, BBPOHHDKBCF, IHJAGGJLMEB, NFJCBMPKDGJ, DAKFBIOBNBN, EPEOEKBCOPM, JGLJCGLFJPO);
		}

		::System::Boolean EvaluateScreenPosAtLevels(::System::Int32 MMHJHOCHMOP, ::System::Int32 AOGOJBDBOIF, ::UnityEngine::Vector2Int NCHGPBBNCMN, ::UnityEngine::Camera* LLFDABJAHII, ::UnityEngine::Vector2& ILOHHLNGEHM)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector2Int, ::UnityEngine::Camera*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_EVALUATESCREENPOSATLEVELS_OFFSET))(this, MMHJHOCHMOP, AOGOJBDBOIF, NCHGPBBNCMN, LLFDABJAHII, ILOHHLNGEHM);
		}

		::System::Void CalculateLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_CALCULATELAYOUT_OFFSET))(this);
		}

		::MoleMole::UIButtonPosHandler_LGBDJCGJMGD GetLayoutResult()
		{
			return ((::MoleMole::UIButtonPosHandler_LGBDJCGJMGD(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_GETLAYOUTRESULT_OFFSET))(this);
		}

		::MoleMole::UIButtonPosHandler_LGBDJCGJMGD GetLayoutResult_1(::System::Single OLGNJIFMFIP, ::System::Single LFMBJLAANGA, ::System::Single FDMMAOACPOO, ::System::Single AHBJOMABFCD)
		{
			return ((::MoleMole::UIButtonPosHandler_LGBDJCGJMGD(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_GETLAYOUTRESULT_1_OFFSET))(this, OLGNJIFMFIP, LFMBJLAANGA, FDMMAOACPOO, AHBJOMABFCD);
		}

		::System::Void ApplyLayoutResult(::MoleMole::UIButtonPosHandler_LGBDJCGJMGD EKAAIJAKBPM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIButtonPosHandler_LGBDJCGJMGD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_APPLYLAYOUTRESULT_OFFSET))(this, EKAAIJAKBPM);
		}

		::System::Boolean DJFLFBMCHLH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_DJFLFBMCHLH_OFFSET))(this);
		}

		::MoleMole::UIButtonPosHandler_EBMBMCOBIEG GHDGDPMONDA()
		{
			return ((::MoleMole::UIButtonPosHandler_EBMBMCOBIEG(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_GHDGDPMONDA_OFFSET))(this);
		}

		::System::Single CLAMALDEDPL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_CLAMALDEDPL_OFFSET))(this);
		}

		::System::Boolean HCMIGEAJMPJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_HCMIGEAJMPJ_OFFSET))(this);
		}

		::System::Single EMLLPAAAHNG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_EMLLPAAAHNG_OFFSET))(this);
		}

		::System::Void DBOHALHMJBF(::UnityEngine::Camera* LLFDABJAHII, ::UnityEngine::Vector2& MPLDDNMCECG, ::System::Single& NCCDJLDKFGA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Vector2&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_DBOHALHMJBF_OFFSET))(this, LLFDABJAHII, MPLDDNMCECG, NCCDJLDKFGA);
		}

		::UnityEngine::Vector2 BJBPHPDGPKK()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_BJBPHPDGPKK_OFFSET))(this);
		}

		::UnityEngine::Vector2 MDLKEBLNLGK()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_MDLKEBLNLGK_OFFSET))(this);
		}

		::System::Int32 IPMLECBCMMD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_IPMLECBCMMD_OFFSET))(this);
		}

		::UnityEngine::Vector2 DJJDHFAKNJI()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_DJJDHFAKNJI_OFFSET))(this);
		}

		::System::Void PIOOPLAPDPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_PIOOPLAPDPK_OFFSET))(this);
		}

		::UnityEngine::Vector2 KEHPPNIHBOH(::System::Single NGIAEEBHCOC, ::System::Single EHEGJCCCJCA)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_KEHPPNIHBOH_OFFSET))(this, NGIAEEBHCOC, EHEGJCCCJCA);
		}

		static ::System::Int32 HOFPIOKFEGE(::System::Single JIFCIFNDKIP, ::System::Boolean JCEICLBFPJE, ::System::Int32 HECMHLHEDJF, ::System::Int32 FJFEFCDDPBK, ::MoleMole::UIButtonPosHandler_AIGPBFMCJGO& param_4)
		{
			return ((::System::Int32(*)(::System::Single, ::System::Boolean, ::System::Int32, ::System::Int32, ::MoleMole::UIButtonPosHandler_AIGPBFMCJGO&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_HOFPIOKFEGE_OFFSET))(JIFCIFNDKIP, JCEICLBFPJE, HECMHLHEDJF, FJFEFCDDPBK, param_4);
		}

		::System::Int32 HHJDFNNNIEO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_HHJDFNNNIEO_OFFSET))(this);
		}

		::System::Single PLIIFNNBICH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_PLIIFNNBICH_OFFSET))(this);
		}

		static ::System::Void IBOHCHBCLHN(::System::Boolean LFANEHACMKB, ::MoleMole::UIButtonPosHandler_AIGPBFMCJGO& param_1)
		{
			return ((::System::Void(*)(::System::Boolean, ::MoleMole::UIButtonPosHandler_AIGPBFMCJGO&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_IBOHCHBCLHN_OFFSET))(LFANEHACMKB, param_1);
		}

		::System::Void GPGLNOBDBGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_GPGLNOBDBGJ_OFFSET))(this);
		}

		::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel* PIBOKBGAAIA()
		{
			return ((::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_PIBOKBGAAIA_OFFSET))(this);
		}

		static ::MoleMole::ConfigUICommon_Input_ButtonType INBMNEKNPMA(::MoleMole::ConfigUICommon_Input_ButtonType PNIBHPIGMME)
		{
			return ((::MoleMole::ConfigUICommon_Input_ButtonType(*)(::MoleMole::ConfigUICommon_Input_ButtonType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_INBMNEKNPMA_OFFSET))(PNIBHPIGMME);
		}

		::UnityEngine::Vector2 NJEDIICAJFH()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_NJEDIICAJFH_OFFSET))(this);
		}

		::System::Void BMOGOLBNPCF(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_BMOGOLBNPCF_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean EIBFCKNICHP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_EIBFCKNICHP_OFFSET))(this);
		}

		::MoleMole::ConfigUICommon_Input_MobileButtonPositionInfo KCHJPIBHHPP()
		{
			return ((::MoleMole::ConfigUICommon_Input_MobileButtonPositionInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_KCHJPIBHHPP_OFFSET))(this);
		}

		static ::MoleMole::ConfigUICommon_Input_ButtonType AJLHDDDDNHH(::MoleMole::ConfigUICommon_Input_ButtonType PNIBHPIGMME)
		{
			return ((::MoleMole::ConfigUICommon_Input_ButtonType(*)(::MoleMole::ConfigUICommon_Input_ButtonType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_AJLHDDDDNHH_OFFSET))(PNIBHPIGMME);
		}

		::System::Void ILHIIDBCNEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_ILHIIDBCNEC_OFFSET))(this);
		}

		::UnityEngine::Vector2 AFHPKGPLMLG()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_AFHPKGPLMLG_OFFSET))(this);
		}

		::System::Int32 KFJICOHPNJL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_KFJICOHPNJL_OFFSET))(this);
		}

		::UnityEngine::Vector2 IGCLGNLFMKK()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_IGCLGNLFMKK_OFFSET))(this);
		}

		::MoleMole::ConfigUICommon_Input_ConfigMobilePanelLayout* EEJLGPENPMA()
		{
			return ((::MoleMole::ConfigUICommon_Input_ConfigMobilePanelLayout*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_EEJLGPENPMA_OFFSET))(this);
		}

		::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel* KCOMMPBPJEF()
		{
			return ((::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_KCOMMPBPJEF_OFFSET))(this);
		}

		static ::System::Boolean BAIEOPEKJNM(::System::Int32 MMHJHOCHMOP, ::System::Int32 AOGOJBDBOIF, ::UnityEngine::Vector2& ILOHHLNGEHM, ::MoleMole::UIButtonPosHandler_AIGPBFMCJGO& param_3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::UnityEngine::Vector2&, ::MoleMole::UIButtonPosHandler_AIGPBFMCJGO&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_BAIEOPEKJNM_OFFSET))(MMHJHOCHMOP, AOGOJBDBOIF, ILOHHLNGEHM, param_3);
		}

		::UnityEngine::Vector2Int DIHEAENGGOC()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_DIHEAENGGOC_OFFSET))(this);
		}

		::UnityEngine::Vector2Int NDOKLBOHICD()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_NDOKLBOHICD_OFFSET))(this);
		}

		::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel* HCIACPPDKGD()
		{
			return ((::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_HCIACPPDKGD_OFFSET))(this);
		}

		::UnityEngine::Canvas* INLEAIPJAHP()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_INLEAIPJAHP_OFFSET))(this);
		}

		::System::Single KHMDEAJICMA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_KHMDEAJICMA_OFFSET))(this);
		}

		::UnityEngine::Vector2 BNGOBBLDJHA()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_BNGOBBLDJHA_OFFSET))(this);
		}

		::System::Single ABMGCMCDKKE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_ABMGCMCDKKE_OFFSET))(this);
		}

		::System::Void KDOIBCBFBAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_KDOIBCBFBAG_OFFSET))(this);
		}
	};
}
