#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/UnityEngine/Vector4.h"

class APDCOGDCIDK;
class DDBCJHCAKFE;
class EDBLBIFDKAA;
class GJPKFPGNJCD;
class HGOGMHMPCCJ;
class JKFGIGCIGHA;
class MKDKFMPIIDD;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIYorozuyaConfig; }
namespace MoleMole { class UIYorozuyaPageController; }
namespace MoleMole { class UIYorozuyaSphereItemWidgetController; }
namespace MoleMole { class YorozuyaCubeGridData; }
namespace MoleMole::Config { class ChapterGridNoiseConfig; }
namespace MoleMole::Config { class HollowMap; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class ExpHeightFogConfig; }
namespace UnityEngine::Rendering::Universal { class NapBloom; }
namespace UnityEngine::Rendering::Universal { class VisualEnvironmentE; }

#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_ABYSSTONORMAL3D_OFFSET UNITYSDK_OFFSET(0x16716FA0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_BCAJCEMHNEJ_OFFSET UNITYSDK_OFFSET(0x16717E00)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_CHECKCUBEMESHRENDER_OFFSET UNITYSDK_OFFSET(0x16717280)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_DHAAHABBNKA_OFFSET UNITYSDK_OFFSET(0x16714240)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_EKOBIIMINFI_OFFSET UNITYSDK_OFFSET(0x16717BE0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_EOHIFENJKOD_OFFSET UNITYSDK_OFFSET(0x167177C0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_FCFENBDJPMN_OFFSET UNITYSDK_OFFSET(0x16717780)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_GEPMAMLPCEP_OFFSET UNITYSDK_OFFSET(0x167148B0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_GETANCHORPOINTS_OFFSET UNITYSDK_OFFSET(0x167153F0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_GETCUBEGRIDFADEOUTDURATION_OFFSET UNITYSDK_OFFSET(0x167162A0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_GETRALLYWIDGETAUTOOPENDELAY_OFFSET UNITYSDK_OFFSET(0x167173C0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x16713880)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_HBBOPOEJJEH_OFFSET UNITYSDK_OFFSET(0x16715A90)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_HJHKILMAKGH_OFFSET UNITYSDK_OFFSET(0x16714AD0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_IHPEENNFKCO_OFFSET UNITYSDK_OFFSET(0x167158A0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_INITCITYHOLLOWMAP_OFFSET UNITYSDK_OFFSET(0x16715440)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_IOPOCOCPJJM_OFFSET UNITYSDK_OFFSET(0x16717690)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_JABBHCJLBID_OFFSET UNITYSDK_OFFSET(0x16717CD0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_KILLMAPTIPSSHOWDELAY_OFFSET UNITYSDK_OFFSET(0x16716E10)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16714D00)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_NFNEKFFDOLE_OFFSET UNITYSDK_OFFSET(0x167163C0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_NGFFMGLGCBG_OFFSET UNITYSDK_OFFSET(0x16713CF0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_OBJMHPNFPPE_OFFSET UNITYSDK_OFFSET(0x16714D50)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_OLHKLHPDHDE_OFFSET UNITYSDK_OFFSET(0x16714320)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_ONCLICK_OFFSET UNITYSDK_OFFSET(0x167151A0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16713EC0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16713F50)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16714060)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x167138A0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16713E70)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_PFLJEBEBHHG_OFFSET UNITYSDK_OFFSET(0x167156B0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_PLAYHIDEMAP_OFFSET UNITYSDK_OFFSET(0x16716C50)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_PLAYSPHERETRACKFADEANI_OFFSET UNITYSDK_OFFSET(0x167162F0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_PLAYSTARTMAP_OFFSET UNITYSDK_OFFSET(0x167167E0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_REFRESHREFLECTIONPROBE_OFFSET UNITYSDK_OFFSET(0x16715070)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_SETCONTINER_OFFSET UNITYSDK_OFFSET(0x167153A0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_SETYOROZUYACAMERA_OFFSET UNITYSDK_OFFSET(0x16715110)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x16713890)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_SWITCHHOLLOWGROUP_OFFSET UNITYSDK_OFFSET(0x16716ED0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_TRYHIDEALLSPHEREANDSHOWNEW_OFFSET UNITYSDK_OFFSET(0x16715F50)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_UPDATETEST_OFFSET UNITYSDK_OFFSET(0x167161E0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x167142C0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16717550)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16717420)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16717560)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x167175F0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16717660)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16717670)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16717680)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaChapterMap3DModelController_TypeDefinitionIndex = 82300;

	class UIYorozuyaChapterMap3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		static ::System::Boolean* StaticGet_isDebugLight()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIYorozuyaChapterMap3DModelController_TypeDefinitionIndex)->GetStaticField(0x12480);
		}
		static ::System::Boolean* StaticGet_isDebugPotLight()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIYorozuyaChapterMap3DModelController_TypeDefinitionIndex)->GetStaticField(0x12481);
		}
		static ::System::Boolean* StaticGet_isDebugReflectProbe()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIYorozuyaChapterMap3DModelController_TypeDefinitionIndex)->GetStaticField(0x12482);
		}
		static ::System::Boolean* StaticGet_isDebugVolume()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIYorozuyaChapterMap3DModelController_TypeDefinitionIndex)->GetStaticField(0x12483);
		}
		::MoleMole::UIYorozuyaConfig* LGKIPMDGEHO; // 0x368
		::MoleMole::Config::HollowMap* MGBLHLLCLLL; // 0x370
		::Foundation::Coroutine::CoroutineHandle LOCCLDJBJEN; // 0x378
		::System::Single LMIHMPNMLFB; // 0x37C
		::System::Single FAOJNDGNLDG; // 0x380
		::System::Single BFKIEBJNAOP; // 0x384
		::HGOGMHMPCCJ* _view; // 0x388
		::DDBCJHCAKFE* CEGKFLHNIMN; // 0x390
		::UnityEngine::Rendering::Universal::ExpHeightFogConfig* PJLBKLIKFAF; // 0x398
		::UnityEngine::Rendering::Universal::VisualEnvironmentE* DIAEKHJCPGC; // 0x3A0
		::MoleMole::UIYorozuyaPageController* MACHGCHBMBO; // 0x3A8
		::System::Collections::Generic::List_1<::MoleMole::UIYorozuyaSphereItemWidgetController*>* HHEEJAPJBMB; // 0x3B0
		::System::Int32 PPBOJLDFDCG; // 0x3B8
		::System::Int32 GIPDHKFHBCJ; // 0x3BC
		::System::Int32 DNCENNHFHLF; // 0x3C0
		::System::Int32 MFGCIDAEMJP; // 0x3C4
		::System::Single EALJMJFFPFH; // 0x3C8
		::System::Int32 PHEOHJKJFPK; // 0x3CC
		::System::Int32 KNOGINMPIMN; // 0x3D0
		::System::Boolean IDLEJDEKFCC; // 0x3D4
		::System::Boolean NOAJNIAFALK; // 0x3D5
		::System::Boolean HPPDFNGIAPD; // 0x3D6
		::System::Boolean AHMNGOHPJEL; // 0x3D7
		::EDBLBIFDKAA* MGMOODAHLLC; // 0x3D8
		::UnityEngine::GameObject* HLOIIBJOBMD; // 0x3E0
		::UnityEngine::MeshRenderer* BMCABGEMEOP; // 0x3E8
		::UnityEngine::MeshRenderer* DPCABFLHMHA; // 0x3F0
		::UnityEngine::MeshRenderer* JFPJKNENAEC; // 0x3F8
		::UnityEngine::MaterialPropertyBlock* JHEPMADEOIN; // 0x400
		::JKFGIGCIGHA* IOKPHBNDCMD; // 0x408
		::System::Collections::Generic::List_1<::GJPKFPGNJCD*>* GGGFMEPNDPE; // 0x410
		::MKDKFMPIIDD* CCCFMICFMEH; // 0x418
		::System::Single NKADOBBJAOM; // 0x420
		::System::Single FCMMKFICOID; // 0x424
		::Il2CppArray<::UnityEngine::Vector4>* BAAPNKFLCDJ; // 0x428
		::Il2CppArray<::UnityEngine::Vector4>* MGJMNLHEEEM; // 0x430
		::APDCOGDCIDK* FAKAPPGKOIJ; // 0x438
		::UnityEngine::Rendering::Volume* PHLFMCCNEGD; // 0x440
		::UnityEngine::Rendering::Universal::NapBloom* MIKEEFJEIKI; // 0x448
		::System::Single APPAJFCKFEE; // 0x450
		::System::Single volumeTimeCounter; // 0x454

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER__CCTOR_OFFSET))();
		}

		::MoleMole::UIYorozuyaConfig* get_Config()
		{
			return ((::MoleMole::UIYorozuyaConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::MoleMole::UIYorozuyaConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIYorozuyaConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_SET_CONFIG_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void RefreshReflectionProbe()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_REFRESHREFLECTIONPROBE_OFFSET))(this);
		}

		::System::Void SetYorozuyaCamera(::DDBCJHCAKFE* cam, ::MoleMole::UIYorozuyaPageController* mainPage, ::MoleMole::UIYorozuyaChapterMap3DModelController* modelController)
		{
			return ((::System::Void(*)(::PVOID, ::DDBCJHCAKFE*, ::MoleMole::UIYorozuyaPageController*, ::MoleMole::UIYorozuyaChapterMap3DModelController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_SETYOROZUYACAMERA_OFFSET))(this, cam, mainPage, modelController);
		}

		::System::Void OnClick(::System::Int32 hollowID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_ONCLICK_OFFSET))(this, hollowID);
		}

		::System::Void SetContiner(::MKDKFMPIIDD* continer)
		{
			return ((::System::Void(*)(::PVOID, ::MKDKFMPIIDD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_SETCONTINER_OFFSET))(this, continer);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIYorozuyaSphereItemWidgetController*>* GetAnchorPoints()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIYorozuyaSphereItemWidgetController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_GETANCHORPOINTS_OFFSET))(this);
		}

		::System::Void InitCityHollowMap(::System::Int32 defaultSelectQuestID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_INITCITYHOLLOWMAP_OFFSET))(this, defaultSelectQuestID);
		}

		::System::Void UpdateTest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_UPDATETEST_OFFSET))(this);
		}

		::System::Single GetCubeGridFadeOutDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_GETCUBEGRIDFADEOUTDURATION_OFFSET))(this);
		}

		::System::Void PlaySphereTrackFadeAni(::System::Boolean isFadeIn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_PLAYSPHERETRACKFADEANI_OFFSET))(this, isFadeIn);
		}

		::System::Void TryHideAllSphereAndShowNew(::System::Single delay, ::System::Int32 defaultQuest, ::System::Single blockTimeReduce)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_TRYHIDEALLSPHEREANDSHOWNEW_OFFSET))(this, delay, defaultQuest, blockTimeReduce);
		}

		::System::Void KillMapTipsShowDelay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_KILLMAPTIPSSHOWDELAY_OFFSET))(this);
		}

		::System::Void SwitchHollowGroup(::System::Int32 defaultSelectQuestID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_SWITCHHOLLOWGROUP_OFFSET))(this, defaultSelectQuestID);
		}

		::System::Void AbyssToNormal3D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_ABYSSTONORMAL3D_OFFSET))(this);
		}

		::System::Void CheckCubeMeshRender()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_CHECKCUBEMESHRENDER_OFFSET))(this);
		}

		::System::Void PlayHideMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_PLAYHIDEMAP_OFFSET))(this);
		}

		::System::Void PlayStartMap(::System::Boolean isStartIn, ::System::Int32 defaultQuestID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_PLAYSTARTMAP_OFFSET))(this, isStartIn, defaultQuestID);
		}

		::System::Single GetRallyWidgetAutoOpenDelay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_GETRALLYWIDGETAUTOOPENDELAY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void IOPOCOCPJJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_IOPOCOCPJJM_OFFSET))(this);
		}

		::System::Void OLHKLHPDHDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_OLHKLHPDHDE_OFFSET))(this);
		}

		::System::Void NFNEKFFDOLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_NFNEKFFDOLE_OFFSET))(this);
		}

		::System::Void FCFENBDJPMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_FCFENBDJPMN_OFFSET))(this);
		}

		::System::Void NGFFMGLGCBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_NGFFMGLGCBG_OFFSET))(this);
		}

		::System::Void HJHKILMAKGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_HJHKILMAKGH_OFFSET))(this);
		}

		::System::Void GEPMAMLPCEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_GEPMAMLPCEP_OFFSET))(this);
		}

		::System::Void IHPEENNFKCO(::System::String* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_IHPEENNFKCO_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void DHAAHABBNKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_DHAAHABBNKA_OFFSET))(this);
		}

		::System::Boolean HBBOPOEJJEH(::APDCOGDCIDK* DFMKILICPFB, ::System::Boolean PBNMCJBMFAN, ::System::Boolean NKOHJFMMMDM)
		{
			return ((::System::Boolean(*)(::PVOID, ::APDCOGDCIDK*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_HBBOPOEJJEH_OFFSET))(this, DFMKILICPFB, PBNMCJBMFAN, NKOHJFMMMDM);
		}

		::System::Single EKOBIIMINFI(::UnityEngine::AnimationCurve* FAJHPKBELMF, ::System::Single GJIHOPCJODF, ::System::Single IGGPBPGAAKH, ::System::Single EPPCCEEAHLN, ::System::Single EEODALLOKMF)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_EKOBIIMINFI_OFFSET))(this, FAJHPKBELMF, GJIHOPCJODF, IGGPBPGAAKH, EPPCCEEAHLN, EEODALLOKMF);
		}

		::System::Void JABBHCJLBID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_JABBHCJLBID_OFFSET))(this);
		}

		::System::Void OBJMHPNFPPE(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_OBJMHPNFPPE_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::Void PFLJEBEBHHG(::System::String* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_PFLJEBEBHHG_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void EOHIFENJKOD(::UnityEngine::MeshRenderer* OCFHGOGFGPE, ::MoleMole::YorozuyaCubeGridData* LJBPECKCCEA, ::UnityEngine::Texture2D* PLFGAFNHOGH, ::UnityEngine::Texture2D* DCPDEFCFKBB, ::MoleMole::Config::ChapterGridNoiseConfig* DFMKILICPFB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshRenderer*, ::MoleMole::YorozuyaCubeGridData*, ::UnityEngine::Texture2D*, ::UnityEngine::Texture2D*, ::MoleMole::Config::ChapterGridNoiseConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_EOHIFENJKOD_OFFSET))(this, OCFHGOGFGPE, LJBPECKCCEA, PLFGAFNHOGH, DCPDEFCFKBB, DFMKILICPFB);
		}

		::System::Void BCAJCEMHNEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_BCAJCEMHNEJ_OFFSET))(this);
		}
	};
}
