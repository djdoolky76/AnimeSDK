#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/ConfigUIAvatarShowData_RuntimeMainPage3DInfo.h"
#include "unitysdk/MoleMole/UIMainPageBG3DModelController___c__DisplayClass59_0.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class LIPKFNPMALN;
class PHBGAINMEEM;
namespace MoleMole { class AvatarShowSetting; }
namespace MoleMole { class MainPageItemShowSetting; }
namespace MoleMole { class UIAvatarAnimator; }
namespace MoleMole { class UIAvatarAnimatorParamsSetting; }
namespace MoleMole { class UIAvatarGraphics; }
namespace MoleMole { class UIAvatarLightSetting; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMainPageBGContext; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Timeline::TimelineComponent { class RuntimeTimelineRebindComp; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalCameraData; }
namespace UnityEngine::Rendering::Universal { class VisualEnvironmentE; }

#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_BAMADFOGKDO_OFFSET UNITYSDK_OFFSET(0x14C9B790)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_CJAEIBADDOH_OFFSET UNITYSDK_OFFSET(0x14C99580)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_CLBIPKLIJMN_OFFSET UNITYSDK_OFFSET(0x14C99C30)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_DFDOJBHFKLK_OFFSET UNITYSDK_OFFSET(0x14C976C0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_DMCCHMAPNHA_OFFSET UNITYSDK_OFFSET(0x14C97B60)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_DMHAHMCNDJK_OFFSET UNITYSDK_OFFSET(0x14C9D140)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_EICCLBGILCF_1_OFFSET UNITYSDK_OFFSET(0x14C9C740)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_EICCLBGILCF_OFFSET UNITYSDK_OFFSET(0x14C9C6C0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_EMODLFLBLMB_OFFSET UNITYSDK_OFFSET(0x14C9A860)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ENABLEOVERRIDEMAINLIGHT_OFFSET UNITYSDK_OFFSET(0x14C9A500)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_GAHEFBDFLNL_OFFSET UNITYSDK_OFFSET(0x14C9C320)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_GBJHKMMPCLM_OFFSET UNITYSDK_OFFSET(0x14C9CF00)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_GGIGEDFBCMJ_OFFSET UNITYSDK_OFFSET(0x14C9EF70)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_HDCNPBGDIBD_OFFSET UNITYSDK_OFFSET(0x14C9EBB0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ICKABHKPBFD_OFFSET UNITYSDK_OFFSET(0x14C9CC90)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_JHHHCJODNAM_OFFSET UNITYSDK_OFFSET(0x14C9E8E0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_JJJNMKHECDE_OFFSET UNITYSDK_OFFSET(0x14C986F0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_KAILDKFPLHO_OFFSET UNITYSDK_OFFSET(0x14C9F190)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_KBBHPLLEBDK_OFFSET UNITYSDK_OFFSET(0x14C9B8B0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_KEJGKPIPELA_OFFSET UNITYSDK_OFFSET(0x14C9C390)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_LBHOEPAMCMG_OFFSET UNITYSDK_OFFSET(0x14C98E90)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_LCEMINGJDFE_OFFSET UNITYSDK_OFFSET(0x14C9CA10)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_LCJNPHGPMEE_OFFSET UNITYSDK_OFFSET(0x14C98CE0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_NIKEGKACFLD_OFFSET UNITYSDK_OFFSET(0x14C9E6D0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_OFGFKPMJIDG_OFFSET UNITYSDK_OFFSET(0x14C9C360)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_OMHEHBMBFME_OFFSET UNITYSDK_OFFSET(0x14C9E2E0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14C975B0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x14C98630)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ONPREPAREHIDE_OFFSET UNITYSDK_OFFSET(0x14C99640)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14C97870)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x14C98D40)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14C98F00)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C97640)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_OOGJDMCLMIJ_OFFSET UNITYSDK_OFFSET(0x14C9F5B0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_PDBGGEBDCGL_OFFSET UNITYSDK_OFFSET(0x14C9D2D0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x14C97D30)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_PROCESSMAINPAGEGO_OFFSET UNITYSDK_OFFSET(0x14C996C0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_PROCESSMAINPAGEITEM_OFFSET UNITYSDK_OFFSET(0x14C9A030)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_PROCESSUIAVATAR_1_OFFSET UNITYSDK_OFFSET(0x14C9A0D0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_PROCESSUIAVATAR_OFFSET UNITYSDK_OFFSET(0x14C99AF0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_PROCESSUIBUDDY_OFFSET UNITYSDK_OFFSET(0x14C9A1B0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_PROCESSUISKIN_OFFSET UNITYSDK_OFFSET(0x14C9A270)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_REALLOCRTUNIT_OFFSET UNITYSDK_OFFSET(0x14C97B10)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_REBINDSHOWTIMELINE_OFFSET UNITYSDK_OFFSET(0x14C9A9E0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_SETHAIRSHADOWOFFSETS_OFFSET UNITYSDK_OFFSET(0x14C9A360)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_SETVIEWLIGHTROTOFFSET_OFFSET UNITYSDK_OFFSET(0x14C9A6A0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER__APPLYAVATARSHOWSETTINGFORGO_G__HANDLESHADERUIOUTLINE_59_8_OFFSET UNITYSDK_OFFSET(0x14C9C0B0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER__APPLYAVATARSHOWSETTINGFORGO_G__PLAYAVATARANIMATIONBYSETTING_59_6_OFFSET UNITYSDK_OFFSET(0x14C9BB70)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C9BB30)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14C9BA30)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14C9C100)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x14C9C190)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER___BASE_ONPREPAREHIDE_OFFSET UNITYSDK_OFFSET(0x14C9C220)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14C9C230)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x14C9C240)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14C9C300)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C9C310)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainPageBG3DModelController_TypeDefinitionIndex = 80987;

	class UIMainPageBG3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		static ::System::Int32* StaticGet_ACFKFBHOGBP()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMainPageBG3DModelController_TypeDefinitionIndex)->GetStaticField(0xE9E0);
		}
		// static const ::System::String* CameraShowTrack; // 0x0
		// static const ::System::String* VolumeName; // 0x0
		::PHBGAINMEEM* LLJLEPAFACC; // 0x368
		::MoleMole::AvatarShowSetting* CGNIBMPDNED; // 0x370
		::MoleMole::UIMainPageBGContext* PBMDOGIKHNN; // 0x378
		::System::String* OMGCCLOBJNB; // 0x380
		::UnityEngine::GameObject* AHMLILBDGCE; // 0x388
		::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* GPBKDGGEBCF; // 0x390
		::System::Single BBMFIKKKKKD; // 0x398
		::System::Boolean AAPBHGPOLDE; // 0x39C
		::System::Boolean PIDDMFOFOFL; // 0x39D
		::System::Boolean ACCIGHEBGEM; // 0x39E
		::System::Byte _padding0[0x1];
		::UnityEngine::Animator* FMEMBDKALDP; // 0x3A0
		::UnityEngine::Animation* DFJFMCCLDII; // 0x3A8
		::System::String* AEPKIPJNDPP; // 0x3B0
		::System::String* GMDNNGNOGNB; // 0x3B8
		::System::String* LJFONGGDAFI; // 0x3C0
		::System::String* NKHPKKLENII; // 0x3C8
		::UnityEngine::GameObject* KFCPPJCDNPI; // 0x3D0
		::LIPKFNPMALN* _view; // 0x3D8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::Entity*>* OGBIDNEKGHA; // 0x3E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ReAllocRTUnit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_REALLOCRTUNIT_OFFSET))(this);
		}

		::System::Void OnPrepareHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ONPREPAREHIDE_OFFSET))(this);
		}

		::System::Void ProcessMainPageGo(::System::String* configPrefabPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_PROCESSMAINPAGEGO_OFFSET))(this, configPrefabPath);
		}

		::System::Void ProcessUIAvatar(::System::Int32 avatarID, ::System::Int32 showTypeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_PROCESSUIAVATAR_OFFSET))(this, avatarID, showTypeIndex);
		}

		::System::Void ProcessMainPageItem(::MoleMole::MainPageItemShowSetting* setting)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MainPageItemShowSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_PROCESSMAINPAGEITEM_OFFSET))(this, setting);
		}

		::System::Void ProcessUIAvatar_1(::System::Int32 avatarID, ::MoleMole::AvatarShowSetting* avatarShowSetting)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::AvatarShowSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_PROCESSUIAVATAR_1_OFFSET))(this, avatarID, avatarShowSetting);
		}

		::System::Void ProcessUIBuddy(::System::Int32 buddyID, ::MoleMole::AvatarShowSetting* avatarShowSetting)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::AvatarShowSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_PROCESSUIBUDDY_OFFSET))(this, buddyID, avatarShowSetting);
		}

		::System::Void ProcessUISkin(::System::Int32 skinID, ::MoleMole::AvatarShowSetting* avatarShowSetting)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::AvatarShowSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_PROCESSUISKIN_OFFSET))(this, skinID, avatarShowSetting);
		}

		::System::Void SetHairShadowOffsets(::System::Boolean enable, ::UnityEngine::Vector2 offset, ::MoleMole::UIAvatarGraphics* avatarGraphics)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector2, ::MoleMole::UIAvatarGraphics*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_SETHAIRSHADOWOFFSETS_OFFSET))(this, enable, offset, avatarGraphics);
		}

		::System::Void EnableOverrideMainLight(::System::Boolean overrideMainLightDir, ::UnityEngine::Vector4 lightDir, ::MoleMole::UIAvatarGraphics* avatarGraphics)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector4, ::MoleMole::UIAvatarGraphics*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ENABLEOVERRIDEMAINLIGHT_OFFSET))(this, overrideMainLightDir, lightDir, avatarGraphics);
		}

		::System::Void SetViewLightRotOffset(::UnityEngine::Vector3 mainPageLightRotOffset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_SETVIEWLIGHTROTOFFSET_OFFSET))(this, mainPageLightRotOffset);
		}

		static ::System::Void RebindShowTimeline(::UnityEngine::Playables::PlayableDirector* playableDirector, ::MoleMole::Timeline::TimelineComponent::RuntimeTimelineRebindComp* runtimeTimelineRebindComp, ::UnityEngine::Animator* cameraAnimator, ::UnityEngine::GameObject* mainPagePrefabModelGo, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* uiAvatars)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::MoleMole::Timeline::TimelineComponent::RuntimeTimelineRebindComp*, ::UnityEngine::Animator*, ::UnityEngine::GameObject*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_REBINDSHOWTIMELINE_OFFSET))(playableDirector, runtimeTimelineRebindComp, cameraAnimator, mainPagePrefabModelGo, uiAvatars);
		}

		static ::System::Void _ApplyAvatarShowSettingForGo_g__PlayAvatarAnimationBySetting_59_6(::MoleMole::UIAvatarAnimator* animator, ::MoleMole::UIAvatarAnimatorParamsSetting* setting)
		{
			return ((::System::Void(*)(::MoleMole::UIAvatarAnimator*, ::MoleMole::UIAvatarAnimatorParamsSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER__APPLYAVATARSHOWSETTINGFORGO_G__PLAYAVATARANIMATIONBYSETTING_59_6_OFFSET))(animator, setting);
		}

		static ::System::Single _ApplyAvatarShowSettingForGo_g__HandleShaderUIOutline_59_8(::System::Single rtHeight)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER__APPLYAVATARSHOWSETTINGFORGO_G__HANDLESHADERUIOUTLINE_59_8_OFFSET))(rtHeight);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnPrepareHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER___BASE_ONPREPAREHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void GAHEFBDFLNL(::MoleMole::UIMainPageBG3DModelController___c__DisplayClass59_0& param_0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainPageBG3DModelController___c__DisplayClass59_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_GAHEFBDFLNL_OFFSET))(this, param_0);
		}

		::System::Int32 OFGFKPMJIDG(::MoleMole::UIMainPageBG3DModelController___c__DisplayClass59_0& param_0)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIMainPageBG3DModelController___c__DisplayClass59_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_OFGFKPMJIDG_OFFSET))(this, param_0);
		}

		::System::Void EICCLBGILCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_EICCLBGILCF_OFFSET))(this);
		}

		::System::Void LCEMINGJDFE(::MoleMole::UIMainPageBG3DModelController___c__DisplayClass59_0& param_0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainPageBG3DModelController___c__DisplayClass59_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_LCEMINGJDFE_OFFSET))(this, param_0);
		}

		::System::Void LCJNPHGPMEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_LCJNPHGPMEE_OFFSET))(this);
		}

		static ::UnityEngine::Rendering::Volume* BAMADFOGKDO(::UnityEngine::GameObject* AHMLILBDGCE)
		{
			return ((::UnityEngine::Rendering::Volume*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_BAMADFOGKDO_OFFSET))(AHMLILBDGCE);
		}

		::System::Void DFDOJBHFKLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_DFDOJBHFKLK_OFFSET))(this);
		}

		static ::UnityEngine::Light* KBBHPLLEBDK(::UnityEngine::GameObject* AHMLILBDGCE)
		{
			return ((::UnityEngine::Light*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_KBBHPLLEBDK_OFFSET))(AHMLILBDGCE);
		}

		::System::Void ICKABHKPBFD(::MoleMole::UIAvatarAnimator* ICAAMDMMDDJ, ::MoleMole::UIMainPageBG3DModelController___c__DisplayClass59_0& param_1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarAnimator*, ::MoleMole::UIMainPageBG3DModelController___c__DisplayClass59_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ICKABHKPBFD_OFFSET))(this, ICAAMDMMDDJ, param_1);
		}

		static ::UnityEngine::Rendering::Universal::VisualEnvironmentE* EMODLFLBLMB(::UnityEngine::GameObject* AHMLILBDGCE)
		{
			return ((::UnityEngine::Rendering::Universal::VisualEnvironmentE*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_EMODLFLBLMB_OFFSET))(AHMLILBDGCE);
		}

		::System::Void GBJHKMMPCLM(::Il2CppArray<::UnityEngine::Renderer*>* AEPONOJONAA, ::MoleMole::UIMainPageBG3DModelController___c__DisplayClass59_0& param_1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*, ::MoleMole::UIMainPageBG3DModelController___c__DisplayClass59_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_GBJHKMMPCLM_OFFSET))(this, AEPONOJONAA, param_1);
		}

		::Foundation::AssetPath DMHAHMCNDJK(::MoleMole::MainPageItemShowSetting* AOIBJAIMEAC)
		{
			return ((::Foundation::AssetPath(*)(::PVOID, ::MoleMole::MainPageItemShowSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_DMHAHMCNDJK_OFFSET))(this, AOIBJAIMEAC);
		}

		::System::Void PDBGGEBDCGL(::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo HMMMOCJAEOA)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_PDBGGEBDCGL_OFFSET))(this, HMMMOCJAEOA);
		}

		::System::Void NIKEGKACFLD(::UnityEngine::GameObject* NJOAJLDJCCJ, ::MoleMole::AvatarShowSetting* HFIFEDCJNAL, ::MoleMole::UIAvatarLightSetting* FPOMNEPHBAF)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::AvatarShowSetting*, ::MoleMole::UIAvatarLightSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_NIKEGKACFLD_OFFSET))(this, NJOAJLDJCCJ, HFIFEDCJNAL, FPOMNEPHBAF);
		}

		::System::Void JJJNMKHECDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_JJJNMKHECDE_OFFSET))(this);
		}

		::System::Void EICCLBGILCF_1(::UnityEngine::GameObject* NJOAJLDJCCJ, ::MoleMole::AvatarShowSetting* HFIFEDCJNAL)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::AvatarShowSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_EICCLBGILCF_1_OFFSET))(this, NJOAJLDJCCJ, HFIFEDCJNAL);
		}

		::System::Void LBHOEPAMCMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_LBHOEPAMCMG_OFFSET))(this);
		}

		::System::Void JHHHCJODNAM(::MoleMole::UIMainPageBG3DModelController___c__DisplayClass59_0& param_0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainPageBG3DModelController___c__DisplayClass59_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_JHHHCJODNAM_OFFSET))(this, param_0);
		}

		::System::Void DMCCHMAPNHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_DMCCHMAPNHA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* OMHEHBMBFME()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_OMHEHBMBFME_OFFSET))(this);
		}

		::System::Int32 KEJGKPIPELA(::MoleMole::UIMainPageBG3DModelController___c__DisplayClass59_0& param_0)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIMainPageBG3DModelController___c__DisplayClass59_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_KEJGKPIPELA_OFFSET))(this, param_0);
		}

		::MoleMole::Battle::Entity* HDCNPBGDIBD(::MoleMole::Config::EntityType MKCOMJHINNJ, ::System::Int32 APKIKLPPHEA, ::Foundation::AssetPath ABOMFKBGCAJ, ::MoleMole::AvatarShowSetting* HFIFEDCJNAL, ::MoleMole::UIAvatarLightSetting* FPOMNEPHBAF)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Config::EntityType, ::System::Int32, ::Foundation::AssetPath, ::MoleMole::AvatarShowSetting*, ::MoleMole::UIAvatarLightSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_HDCNPBGDIBD_OFFSET))(this, MKCOMJHINNJ, APKIKLPPHEA, ABOMFKBGCAJ, HFIFEDCJNAL, FPOMNEPHBAF);
		}

		::System::Void GGIGEDFBCMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_GGIGEDFBCMJ_OFFSET))(this);
		}

		::System::Void KAILDKFPLHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_KAILDKFPLHO_OFFSET))(this);
		}

		::MoleMole::Config::EntityType OOGJDMCLMIJ(::MoleMole::MainPageItemShowSetting* AOIBJAIMEAC)
		{
			return ((::MoleMole::Config::EntityType(*)(::PVOID, ::MoleMole::MainPageItemShowSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_OOGJDMCLMIJ_OFFSET))(this, AOIBJAIMEAC);
		}

		::System::Void CLBIPKLIJMN(::Foundation::AssetPath ABOMFKBGCAJ, ::MoleMole::AvatarShowSetting* HFIFEDCJNAL, ::System::Int32 HKHHHJHCGKL, ::MoleMole::Config::EntityType MKCOMJHINNJ)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::AvatarShowSetting*, ::System::Int32, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_CLBIPKLIJMN_OFFSET))(this, ABOMFKBGCAJ, HFIFEDCJNAL, HKHHHJHCGKL, MKCOMJHINNJ);
		}

		::System::Void CJAEIBADDOH(::System::Boolean NJIGFMEAOKN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_CJAEIBADDOH_OFFSET))(this, NJIGFMEAOKN);
		}

		::System::Void PDKCHDBODJB(::System::Int32 MKKDGLGFANH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_PDKCHDBODJB_OFFSET))(this, MKKDGLGFANH);
		}
	};
}
