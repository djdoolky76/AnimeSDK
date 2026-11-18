#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

class JJCFGFANEFB;
namespace DG::Tweening { class Tween; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMainStoryPageController; }
namespace MoleMole { class UITapesConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Texture2D; }

#define MOLEMOLE_UITAPE3DMODELCONTROLLER_COLOR_OFFSET UNITYSDK_OFFSET(0x14839790)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_DONTSHOW_OFFSET UNITYSDK_OFFSET(0x14838CE0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_EASINGSLIDE_OFFSET UNITYSDK_OFFSET(0x148392D0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_FIRSTBOOKPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x14837410)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_FLIP_OFFSET UNITYSDK_OFFSET(0x14836A50)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_BASEROTATION_OFFSET UNITYSDK_OFFSET(0x148345B0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x14834830)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_CURANIMCLIPLENGTH_OFFSET UNITYSDK_OFFSET(0x148345F0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_FLIPANIMLENGTH_OFFSET UNITYSDK_OFFSET(0x148346B0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_FLIPANIMNORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x148345D0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_INDEXL_OFFSET UNITYSDK_OFFSET(0x14834570)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_INDEXR_OFFSET UNITYSDK_OFFSET(0x14834590)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x14834550)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_ISDONTSHOWINGANIM_OFFSET UNITYSDK_OFFSET(0x14834810)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_ISEASING_OFFSET UNITYSDK_OFFSET(0x148347B0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_ISSHOWINGANIM_OFFSET UNITYSDK_OFFSET(0x148347F0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_ISSHOWING_OFFSET UNITYSDK_OFFSET(0x148347D0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_ISTAPELOCKED_OFFSET UNITYSDK_OFFSET(0x14834740)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_MAINPAGE_OFFSET UNITYSDK_OFFSET(0x148348F0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_VHSTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x14834530)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_ISPLAYINGFLIPANIM_OFFSET UNITYSDK_OFFSET(0x148377F0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x148349B0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x14834B00)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14834B90)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14834A40)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14834AB0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_PUSHBOOKPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x148375A0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x14835480)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_ROTATE_1_OFFSET UNITYSDK_OFFSET(0x14836C60)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_ROTATE_OFFSET UNITYSDK_OFFSET(0x148376F0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SCALE_OFFSET UNITYSDK_OFFSET(0x148366C0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SETDEFAULTROT_OFFSET UNITYSDK_OFFSET(0x14837310)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SETLOCKVIEW_OFFSET UNITYSDK_OFFSET(0x14834C40)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_BASEROTATION_OFFSET UNITYSDK_OFFSET(0x148345C0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x14834890)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_FLIPANIMNORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x148345E0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_INDEXL_OFFSET UNITYSDK_OFFSET(0x14834580)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_INDEXR_OFFSET UNITYSDK_OFFSET(0x148345A0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x14834560)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_ISDONTSHOWINGANIM_OFFSET UNITYSDK_OFFSET(0x14834820)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_ISEASING_OFFSET UNITYSDK_OFFSET(0x148347C0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_ISSHOWINGANIM_OFFSET UNITYSDK_OFFSET(0x14834800)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_ISSHOWING_OFFSET UNITYSDK_OFFSET(0x148347E0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_MAINPAGE_OFFSET UNITYSDK_OFFSET(0x14834950)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_VHSTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x14834540)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SHOWTAPE_OFFSET UNITYSDK_OFFSET(0x14837860)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SKIPSHOWANIM_OFFSET UNITYSDK_OFFSET(0x14837B60)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SLIDE_OFFSET UNITYSDK_OFFSET(0x14838F60)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SYNCLOCALROTATIONANDSCALEFROMSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x14835A70)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_TRANSLATE_OFFSET UNITYSDK_OFFSET(0x148357D0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x14837BB0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x14839920)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14839890)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14839BC0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x14839C50)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14839D10)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14839D20)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14839D30)

namespace MoleMole
{
	inline static constexpr unsigned int UITape3DModelController_TypeDefinitionIndex = 72061;

	class UITape3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>** StaticGet_GOAPKBOONMI()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(UITape3DModelController_TypeDefinitionIndex)->GetStaticField(0x3C6F0);
		}
		static ::MoleMole::UITapesConfig** StaticGet__HPMJLHGNENP_k__BackingField()
		{
			return (::MoleMole::UITapesConfig**)Il2CppClass::FromTypeDefinitionIndex(UITape3DModelController_TypeDefinitionIndex)->GetStaticField(0x3C6F8);
		}
		static ::UnityEngine::Texture2D** StaticGet_PMPPCGFHENJ()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(UITape3DModelController_TypeDefinitionIndex)->GetStaticField(0x3C700);
		}
		static ::System::String** StaticGet_IJHMMCPECHK()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UITape3DModelController_TypeDefinitionIndex)->GetStaticField(0x3C708);
		}
		static ::MoleMole::UIMainStoryPageController** StaticGet__LKAMJAOMODA_k__BackingField()
		{
			return (::MoleMole::UIMainStoryPageController**)Il2CppClass::FromTypeDefinitionIndex(UITape3DModelController_TypeDefinitionIndex)->GetStaticField(0x3C710);
		}
		static ::System::String** StaticGet_MDIKANGGPNL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UITape3DModelController_TypeDefinitionIndex)->GetStaticField(0x3C718);
		}
		static ::UnityEngine::Texture2D** StaticGet_PEIMBFLNAPP()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(UITape3DModelController_TypeDefinitionIndex)->GetStaticField(0x3C720);
		}
		static ::System::String** StaticGet_EJJLOOFAFLE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UITape3DModelController_TypeDefinitionIndex)->GetStaticField(0x3C728);
		}
		static ::System::String** StaticGet_BFFHHDNHMKG()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UITape3DModelController_TypeDefinitionIndex)->GetStaticField(0x3C730);
		}
		static ::UnityEngine::Texture2D** StaticGet_OJCCMIICKNH()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(UITape3DModelController_TypeDefinitionIndex)->GetStaticField(0x3C738);
		}
		static ::UnityEngine::Texture2D** StaticGet_KKDLDPNCHKN()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(UITape3DModelController_TypeDefinitionIndex)->GetStaticField(0x3C740);
		}
		static ::System::Int32* StaticGet_HNPAFPPDOJA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UITape3DModelController_TypeDefinitionIndex)->GetStaticField(0xDDB0);
		}
		static ::System::Single* StaticGet_ShowAnimStretchDistance()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UITape3DModelController_TypeDefinitionIndex)->GetStaticField(0xDDB4);
		}
		// static const ::System::String* kCoverLockFront1; // 0x0
		// static const ::System::String* kCoverLockBack; // 0x0
		// static const ::System::String* kCoverLockSide; // 0x0
		// static const ::System::String* kCoverLockFront2; // 0x0
		::System::Int32 _JAEFHDGBEPG_k__BackingField; // 0x368
		::System::Boolean isTest; // 0x36C
		::System::Byte _padding0[0x3];
		::System::Int32 _EGBKMJIFEKN_k__BackingField; // 0x370
		::System::Int32 _GOPLINDFOIB_k__BackingField; // 0x374
		::System::Int32 _FOJBENLJIIG_k__BackingField; // 0x378
		::UnityEngine::Quaternion _NGIGICEPCPM_k__BackingField; // 0x37C
		::System::Single _DGANIIODLEF_k__BackingField; // 0x38C
		::System::Boolean _JIOBNHOEHLE_k__BackingField; // 0x390
		::System::Boolean _BGPIIGMAMGJ_k__BackingField; // 0x391
		::System::Boolean _PBNHIFJGJHD_k__BackingField; // 0x392
		::System::Boolean _LHGDEPBJIBM_k__BackingField; // 0x393
		::System::Boolean DMBOCIAPOGK; // 0x394
		::System::Byte _padding1[0x3];
		::JJCFGFANEFB* _view; // 0x398
		::System::Boolean PCPBKKPKOIM; // 0x3A0
		::System::Boolean FAPEKINNCCG; // 0x3A1
		::System::Byte _padding2[0x2];
		::UnityEngine::Vector3 PLBIFOINIMM; // 0x3A4
		::System::Single DOADHOJNKOO; // 0x3B0
		::System::Byte _padding3[0x4];
		::DG::Tweening::Tween* DDIELGBJLEP; // 0x3B8
		::UnityEngine::Vector3 OPOJIHLBAAF; // 0x3C0
		::System::Single IAKJMIHJAIO; // 0x3CC
		::System::Single CJLFBOPFAIG; // 0x3D0
		::System::Single IFMPCKODDOJ; // 0x3D4
		::System::Single DGPCDGIMIAP; // 0x3D8
		::System::Boolean ILEAMBOHHKF; // 0x3DC
		::System::Byte _padding4[0x3];
		::System::Single IKHOBGGMEBJ; // 0x3E0
		::System::Single JGDGLGCDEHA; // 0x3E4
		::System::Boolean GPCIJLEKLAH; // 0x3E8
		::System::Byte _padding5[0x3];
		::System::Single HLFBNAHINNC; // 0x3EC
		::System::Single DACMKJANNAL; // 0x3F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Int32 get_VhsTemplateID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_VHSTEMPLATEID_OFFSET))(this);
		}

		::System::Void set_VhsTemplateID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_VHSTEMPLATEID_OFFSET))(this, value);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_INDEX_OFFSET))(this, value);
		}

		::System::Int32 get_IndexL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_INDEXL_OFFSET))(this);
		}

		::System::Void set_IndexL(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_INDEXL_OFFSET))(this, value);
		}

		::System::Int32 get_IndexR()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_INDEXR_OFFSET))(this);
		}

		::System::Void set_IndexR(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_INDEXR_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_BaseRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_BASEROTATION_OFFSET))(this);
		}

		::System::Void set_BaseRotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_BASEROTATION_OFFSET))(this, value);
		}

		::System::Single get_FlipAnimNormalizedTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_FLIPANIMNORMALIZEDTIME_OFFSET))(this);
		}

		::System::Void set_FlipAnimNormalizedTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_FLIPANIMNORMALIZEDTIME_OFFSET))(this, value);
		}

		::System::Single get_CurAnimClipLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_CURANIMCLIPLENGTH_OFFSET))(this);
		}

		::System::Single get_FlipAnimLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_FLIPANIMLENGTH_OFFSET))(this);
		}

		::System::Boolean get_IsTapeLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_ISTAPELOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsEasing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_ISEASING_OFFSET))(this);
		}

		::System::Void set_IsEasing(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_ISEASING_OFFSET))(this, value);
		}

		::System::Boolean get_IsShowing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_ISSHOWING_OFFSET))(this);
		}

		::System::Void set_IsShowing(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_ISSHOWING_OFFSET))(this, value);
		}

		::System::Boolean get_IsShowingAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_ISSHOWINGANIM_OFFSET))(this);
		}

		::System::Void set_IsShowingAnim(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_ISSHOWINGANIM_OFFSET))(this, value);
		}

		::System::Boolean get_IsDontShowingAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_ISDONTSHOWINGANIM_OFFSET))(this);
		}

		::System::Void set_IsDontShowingAnim(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_ISDONTSHOWINGANIM_OFFSET))(this, value);
		}

		static ::MoleMole::UITapesConfig* get_Config()
		{
			return ((::MoleMole::UITapesConfig*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_CONFIG_OFFSET))();
		}

		static ::System::Void set_Config(::MoleMole::UITapesConfig* value)
		{
			return ((::System::Void(*)(::MoleMole::UITapesConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_CONFIG_OFFSET))(value);
		}

		static ::MoleMole::UIMainStoryPageController* get_MainPage()
		{
			return ((::MoleMole::UIMainStoryPageController*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_MAINPAGE_OFFSET))();
		}

		static ::System::Void set_MainPage(::MoleMole::UIMainStoryPageController* value)
		{
			return ((::System::Void(*)(::MoleMole::UIMainStoryPageController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_MAINPAGE_OFFSET))(value);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetLockView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SETLOCKVIEW_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void Translate(::UnityEngine::Vector3 tarPosition, ::System::Single duration, ::UnityEngine::AnimationCurve* curve, ::System::Action* onTick, ::System::Action* onComplete)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_TRANSLATE_OFFSET))(this, tarPosition, duration, curve, onTick, onComplete);
		}

		::System::Void SyncLocalRotationAndScaleFromScrollView(::System::Single normalizedPosition, ::UnityEngine::AnimationCurve* flipAnimCurve, ::UnityEngine::Vector3 kDefaultTapeRotation, ::System::Single fieldNormalized, ::System::Single dist)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SYNCLOCALROTATIONANDSCALEFROMSCROLLVIEW_OFFSET))(this, normalizedPosition, flipAnimCurve, kDefaultTapeRotation, fieldNormalized, dist);
		}

		::System::Void SetDefaultRot(::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SETDEFAULTROT_OFFSET))(this, rot);
		}

		::System::Void FirstBookPerformance(::System::Single scale, ::System::Single duration, ::System::Single scaleDelayTime, ::UnityEngine::AnimationCurve* animCurve, ::UnityEngine::AnimationCurve* scaleCurve, ::System::Action* onDone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_FIRSTBOOKPERFORMANCE_OFFSET))(this, scale, duration, scaleDelayTime, animCurve, scaleCurve, onDone);
		}

		::System::Void PushBookPerformance(::System::Single scale, ::System::Single duration, ::System::Single scaleDelayTime, ::UnityEngine::AnimationCurve* scaleCurve)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_PUSHBOOKPERFORMANCE_OFFSET))(this, scale, duration, scaleDelayTime, scaleCurve);
		}

		::System::Void Flip(::System::Single normalizedTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_FLIP_OFFSET))(this, normalizedTime);
		}

		::System::Void Scale(::System::Single scale, ::System::Single duration, ::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SCALE_OFFSET))(this, scale, duration, curve);
		}

		::System::Void Rotate(::UnityEngine::Quaternion baseQuaternion, ::System::Boolean local, ::UnityEngine::Vector3 tarAngle, ::System::Single duration, ::UnityEngine::AnimationCurve* curve, ::System::Action* onComplete)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::System::Boolean, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_ROTATE_OFFSET))(this, baseQuaternion, local, tarAngle, duration, curve, onComplete);
		}

		::System::Void Rotate_1(::UnityEngine::Quaternion baseQuaternion, ::System::Boolean local, ::System::Single tarAngleX, ::System::Single tarAngleY, ::System::Single tarAngleZ, ::System::Single duration, ::UnityEngine::AnimationCurve* curve, ::System::Action* onComplete)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_ROTATE_1_OFFSET))(this, baseQuaternion, local, tarAngleX, tarAngleY, tarAngleZ, duration, curve, onComplete);
		}

		::System::Boolean IsPlayingFlipAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_ISPLAYINGFLIPANIM_OFFSET))(this);
		}

		::System::Void ShowTape(::UnityEngine::Vector3 positionOffset, ::System::Single protectNormalizedTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SHOWTAPE_OFFSET))(this, positionOffset, protectNormalizedTime);
		}

		::System::Void SkipShowAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SKIPSHOWANIM_OFFSET))(this);
		}

		::System::Void DontShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_DONTSHOW_OFFSET))(this);
		}

		::UnityEngine::Vector3 Slide(::UnityEngine::Vector2 worldPointDelta)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SLIDE_OFFSET))(this, worldPointDelta);
		}

		::System::Void EasingSlide(::UnityEngine::Vector2 worldPointDelta, ::System::Single duration, ::UnityEngine::AnimationCurve* easingCurve, ::System::Action_1<::MoleMole::UITape3DModelController*>* onEasing, ::System::Action* onEasingComplete)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Action_1<::MoleMole::UITape3DModelController*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_EASINGSLIDE_OFFSET))(this, worldPointDelta, duration, easingCurve, onEasing, onEasingComplete);
		}

		::System::Void Color(::UnityEngine::Color c)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_COLOR_OFFSET))(this, c);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
