#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCABJANIDKP.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"

class GHOMKECPKCL;
class GLCAPFEELDN;
class LHPMKCPOPFH;
namespace MoleMole { class BuddyCameraConfig; }
namespace MoleMole { class BuddyChangeDepthConfig; }
namespace MoleMole { class BuddyDepthConfig; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIModificationShop3DModelController_BuddyFadeGroup; }
namespace MoleMole { class UIModificationShop3DModelController_Context; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class BuddyDiyPageCamera; }
namespace MoleMole::Config { class CameraTargetConfig; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Rendering::Universal { class DepthOfField; }

#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_BFNPNFHEPNO_OFFSET UNITYSDK_OFFSET(0x1741E470)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_DFKNOJEDHBE_OFFSET UNITYSDK_OFFSET(0x174212F0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_GETTVSCREEN_OFFSET UNITYSDK_OFFSET(0x1741F500)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_HFALFFAOOIF_OFFSET UNITYSDK_OFFSET(0x1741FFD0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_IFFICIDICEI_OFFSET UNITYSDK_OFFSET(0x17420BB0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_JLIDFCMBCGO_OFFSET UNITYSDK_OFFSET(0x1741F470)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_LMIDOGIKJNI_OFFSET UNITYSDK_OFFSET(0x17420EC0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_OIEDNNGFBIA_OFFSET UNITYSDK_OFFSET(0x1741FBC0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1741E790)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1741E8E0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1741D6C0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1741E820)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_PBDCDBAELKP_OFFSET UNITYSDK_OFFSET(0x174213B0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_PCOOFLAICGL_OFFSET UNITYSDK_OFFSET(0x17420F70)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_PICODNKAKML_OFFSET UNITYSDK_OFFSET(0x1741EDA0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_PIENPGJJBAL_OFFSET UNITYSDK_OFFSET(0x174211B0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_PLAYENTEREDITOREFFECT_OFFSET UNITYSDK_OFFSET(0x17420830)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_PLAYEXITEDITOREFFECT_OFFSET UNITYSDK_OFFSET(0x17420870)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_PLAYFIRSTBUDDY_OFFSET UNITYSDK_OFFSET(0x1741F9E0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_PLAYSWITCHBUDDY_OFFSET UNITYSDK_OFFSET(0x1741F800)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_PLLKOHAOBCH_OFFSET UNITYSDK_OFFSET(0x17421290)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_REMOVEBUDDY_OFFSET UNITYSDK_OFFSET(0x17420660)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_RESERGAMEPADCONTROL_OFFSET UNITYSDK_OFFSET(0x1741F100)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_SETBUDDYCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x17420040)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_SETCURRENTBUDDY_OFFSET UNITYSDK_OFFSET(0x1741F570)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_TICKGAMEPADCONTROL_OFFSET UNITYSDK_OFFSET(0x1741F040)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1741F190)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x174208B0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17420AF0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17420B80)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17420B90)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17420BA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIModificationShop3DModelController_TypeDefinitionIndex = 56454;

	class UIModificationShop3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		// static const ::System::String* DPBABFAAKCH; // 0x0
		// static const ::System::String* HNGIOLDHIPI; // 0x0
		// static const ::System::String* NAMLFAMHJCD; // 0x0
		// static const ::System::String* IMIJECKFOIF; // 0x0
		// static const ::System::String* MGEDABNCMNA; // 0x0
		// static const ::System::String* PCCAFFPBNOH; // 0x0
		::LHPMKCPOPFH* _view; // 0x368
		::MoleMole::UIModificationShop3DModelController_Context* DAAAEJDBNFI; // 0x370
		::System::Boolean PNDKMACFGEI; // 0x378
		::System::Byte _padding0[0x7];
		::MoleMole::UIModificationShop3DModelController_BuddyFadeGroup* JAGMLPKPFBC; // 0x380
		::UnityEngine::Animator* KBCKLGCOOBA; // 0x388
		::System::Single DICENAHFINB; // 0x390
		::System::Boolean EIAEAEMNOLD; // 0x394
		::System::Byte _padding1[0x3];
		::MoleMole::BuddyCameraConfig* HJIJFCPFGAL; // 0x398
		::GHOMKECPKCL* JMJFJFLPBCD; // 0x3A0
		::System::String* EPBOHHMBHHF; // 0x3A8
		::System::String* ADCBALOBLNI; // 0x3B0
		::System::String* KCBAEPMMIDO; // 0x3B8
		::System::String* MOLFIDGCNMK; // 0x3C0
		::System::String* OBFCEFDPCLC; // 0x3C8
		::MoleMole::Config::BuddyDiyPageCamera* LBPDEJDDJPE; // 0x3D0
		::MoleMole::Config::CameraTargetConfig* IJFOFKHFOEF; // 0x3D8
		::MoleMole::Config::CameraTargetConfig* GJFONMCGOBG; // 0x3E0
		::MoleMole::Config::CameraTargetConfig* FIGCAKDEMKI; // 0x3E8
		::UnityEngine::Animation* BEBABIECKLA; // 0x3F0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::Entity*>* EEDIEGNEBGB; // 0x3F8
		::System::Boolean BMBDJBCDBHE; // 0x400
		::System::Byte _padding2[0x3];
		::System::Single FBKBPAFFHOB; // 0x404
		::System::Single CELAGGIAIIA; // 0x408
		::System::Byte _padding3[0x4];
		::MoleMole::BuddyChangeDepthConfig* BJHNCJNNKCC; // 0x410
		::MoleMole::BuddyDepthConfig* CMKEALEEGDN; // 0x418
		::System::Boolean JALGLJAIHEC; // 0x420
		::System::Byte _padding4[0x7];
		::UnityEngine::Rendering::Universal::DepthOfField* DCFOJAAAEKA; // 0x428
		::System::Single HNFDFLDLPIM; // 0x430
		::System::Boolean CGGAJBOAMML; // 0x434
		::System::Byte _padding5[0x3];
		::System::Collections::Generic::List_1<::FCABJANIDKP>* waitFadeActions; // 0x438
		::System::Int32 currentBuddy; // 0x440
		::System::Int32 willRemoveBuddy; // 0x444
		::System::Boolean NOICPNKDABI; // 0x448

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void TickGamePadControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_TICKGAMEPADCONTROL_OFFSET))(this);
		}

		::System::Void ReserGamePadControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_RESERGAMEPADCONTROL_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_UPDATE_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetTVScreen()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_GETTVSCREEN_OFFSET))(this);
		}

		::System::Void SetCurrentBuddy(::GLCAPFEELDN* buddyData, ::System::Boolean isLeft)
		{
			return ((::System::Void(*)(::PVOID, ::GLCAPFEELDN*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_SETCURRENTBUDDY_OFFSET))(this, buddyData, isLeft);
		}

		::System::Void PlayFirstBuddy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_PLAYFIRSTBUDDY_OFFSET))(this);
		}

		::System::Void PlaySwitchBuddy(::System::Boolean isLeft)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_PLAYSWITCHBUDDY_OFFSET))(this, isLeft);
		}

		::System::Void SetBuddyCameraConfig(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_SETBUDDYCAMERACONFIG_OFFSET))(this, key);
		}

		::System::Void RemoveBuddy(::System::Int32 buddyID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_REMOVEBUDDY_OFFSET))(this, buddyID);
		}

		::System::Void PlayEnterEditorEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_PLAYENTEREDITOREFFECT_OFFSET))(this);
		}

		::System::Void PlayExitEditorEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_PLAYEXITEDITOREFFECT_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::MoleMole::Battle::Entity* IFFICIDICEI(::GLCAPFEELDN* PMIDNALMHOP)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::GLCAPFEELDN*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_IFFICIDICEI_OFFSET))(this, PMIDNALMHOP);
		}

		::System::Void LMIDOGIKJNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_LMIDOGIKJNI_OFFSET))(this);
		}

		::System::Void HFALFFAOOIF(::UnityEngine::Animator* ICAAMDMMDDJ, ::System::String* ILBGFFAJJGO)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_HFALFFAOOIF_OFFSET))(this, ICAAMDMMDDJ, ILBGFFAJJGO);
		}

		::System::Void BFNPNFHEPNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_BFNPNFHEPNO_OFFSET))(this);
		}

		::System::Void PIENPGJJBAL(::System::EventArgs* MNDIBLLFAJI)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_PIENPGJJBAL_OFFSET))(this, MNDIBLLFAJI);
		}

		::System::Void PLLKOHAOBCH(::System::EventArgs* MNDIBLLFAJI)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_PLLKOHAOBCH_OFFSET))(this, MNDIBLLFAJI);
		}

		::System::Void JLIDFCMBCGO(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_JLIDFCMBCGO_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::Void PICODNKAKML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_PICODNKAKML_OFFSET))(this);
		}

		::UnityEngine::Animator* OIEDNNGFBIA(::GLCAPFEELDN* PMIDNALMHOP)
		{
			return ((::UnityEngine::Animator*(*)(::PVOID, ::GLCAPFEELDN*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_OIEDNNGFBIA_OFFSET))(this, PMIDNALMHOP);
		}

		::System::Void DFKNOJEDHBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_DFKNOJEDHBE_OFFSET))(this);
		}

		::System::Void PCOOFLAICGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_PCOOFLAICGL_OFFSET))(this);
		}

		::System::Void PBDCDBAELKP(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_PBDCDBAELKP_OFFSET))(this, PMNLNNGEIFM);
		}
	};
}
