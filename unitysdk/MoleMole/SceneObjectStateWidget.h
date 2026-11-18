#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEIADOBKMML.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/GMBANJOGEPD.h"
#include "unitysdk/LJGGDAGJMII.h"
#include "unitysdk/NHMECLPHCFP.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/SceneObjectType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/PCODMIJEJEP.h"

class DIFNAMIJCHM;
class JDCJAJHEDDA;
class JDKIIIOGHAN;
class NFGGAMBGCLM;
class ScreenPlayData;
namespace MoleMole { class ScreenPlayer; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class LODGroup; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_AJAHJOJFIOP_OFFSET UNITYSDK_OFFSET(0x10D5CC60)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_AWAKE_OFFSET UNITYSDK_OFFSET(0x10D595C0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_BAFGMINIKHA_OFFSET UNITYSDK_OFFSET(0x10D59790)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_BGKNOMMDIOB_OFFSET UNITYSDK_OFFSET(0x10D5A290)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_BJMOCICPJIH_OFFSET UNITYSDK_OFFSET(0x10D5AFE0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_CHECKSKIPSTATE_OFFSET UNITYSDK_OFFSET(0x10D5B4F0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_CLEAR_OFFSET UNITYSDK_OFFSET(0x10D59F90)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_EMFJLOGGDJK_OFFSET UNITYSDK_OFFSET(0x10D59B40)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_GETMYSTATE_OFFSET UNITYSDK_OFFSET(0x10D5A3E0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_GETNAVMESHMARKTYPE_OFFSET UNITYSDK_OFFSET(0x10D5C660)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_GETOBJECTTAG_OFFSET UNITYSDK_OFFSET(0x10D5C190)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x10D5C290)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_GETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x10D5C6B0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x10D59590)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_GET_PLAYERDEBUGER_OFFSET UNITYSDK_OFFSET(0x10D595B0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_GET_SCREENPLAYER_OFFSET UNITYSDK_OFFSET(0x10D595A0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_GIIEGALDCHC_OFFSET UNITYSDK_OFFSET(0x10D5CA90)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_HMCGPJFFPFO_OFFSET UNITYSDK_OFFSET(0x10D5BF70)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_INITSTATE_OFFSET UNITYSDK_OFFSET(0x10D59E10)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_ISAIMOVEAVATAR_OFFSET UNITYSDK_OFFSET(0x10D5B540)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_ISTRIGGERMAINAVATAR_OFFSET UNITYSDK_OFFSET(0x10D5B700)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_JEJHLBCGMFF_OFFSET UNITYSDK_OFFSET(0x10D5CB50)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_NLEFCHGPBIH_OFFSET UNITYSDK_OFFSET(0x10D5C750)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_OIBDJAGIPBI_OFFSET UNITYSDK_OFFSET(0x10D5AF80)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_ONBECAMEINVISIBLE_OFFSET UNITYSDK_OFFSET(0x10D5BE00)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_ONBECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x10D5BD50)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10D5BD00)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x10D5AAC0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10D5A970)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_ONLEAVESCENE_OFFSET UNITYSDK_OFFSET(0x10D5B910)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x10D5AC10)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_OPOOOJNMJGG_OFFSET UNITYSDK_OFFSET(0x10D5CA30)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_REGISTERWIDGET_OFFSET UNITYSDK_OFFSET(0x10D598B0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_RESETACTIVE_OFFSET UNITYSDK_OFFSET(0x10D5C560)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_RESETINITSTATE_OFFSET UNITYSDK_OFFSET(0x10D5BE70)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_RESETPOSITION_OFFSET UNITYSDK_OFFSET(0x10D5BEC0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_RUNINCG_OFFSET UNITYSDK_OFFSET(0x10D59FF0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_SETACCESSORYLODLEVEL_OFFSET UNITYSDK_OFFSET(0x10D5C5C0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x10D5C2E0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_SETDYNAMICWIDGET_OFFSET UNITYSDK_OFFSET(0x10D59C60)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_SETMAINCITYID_OFFSET UNITYSDK_OFFSET(0x10D59EE0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_STARTWIDGETLOGIC_OFFSET UNITYSDK_OFFSET(0x10D59C10)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_START_OFFSET UNITYSDK_OFFSET(0x10D59AF0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_STOPWITHTIMELINE_OFFSET UNITYSDK_OFFSET(0x10D5A350)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_SWITCHSTATE_1_OFFSET UNITYSDK_OFFSET(0x10D5AD50)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_SWITCHSTATE_OFFSET UNITYSDK_OFFSET(0x10D5AC60)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_UPDATEWITHTIMELINE_OFFSET UNITYSDK_OFFSET(0x10D5A230)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET__CTOR_OFFSET UNITYSDK_OFFSET(0x10D5C700)

namespace MoleMole
{
	inline static constexpr unsigned int SceneObjectStateWidget_TypeDefinitionIndex = 63265;

	class SceneObjectStateWidget : public ::UnityEngine::MonoBehaviour
	{
	public:
		::GMBANJOGEPD CreateSrc; // 0x18
		::CEIADOBKMML CreateType; // 0x1C
		::System::Int32 ID; // 0x20
		::SceneObjectType type; // 0x24
		::System::Int32 childID; // 0x28
		::UnityEngine::Vector2 pos; // 0x2C
		::LJGGDAGJMII trafficObjectType; // 0x34
		::NFGGAMBGCLM* INNGCFNDKFF; // 0x38
		::DIFNAMIJCHM* LGEOOBHMAPF; // 0x40
		::MoleMole::ScreenPlayer* KDICDGJEFNL; // 0x48
		::Foundation::Coroutine::CoroutineHandle CIPMCJKJCPO; // 0x50
		::System::Boolean OMEJBHCDJBK; // 0x54
		::System::Byte _padding0[0x3];
		::JDKIIIOGHAN* KEMNGHALMFC; // 0x58
		::System::Int32 currentStateID; // 0x60
		::System::Boolean IsInTrigger; // 0x64
		::System::Byte _padding1[0x3];
		::System::String* textureSheetKey; // 0x68
		::System::Boolean IsInit; // 0x70
		::System::Byte _padding2[0x7];
		::System::Action_1<::UnityEngine::Collider*>* OnControllerAvatarTriggerEnter; // 0x78
		::System::Action_1<::UnityEngine::Collider*>* OnControllerAvatarTriggerExit; // 0x80
		::UnityEngine::LODGroup* BAKBGFKHIDD; // 0x88
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* AGONLDGPNPB; // 0x90
		::UnityEngine::Vector3 OPBDABIGOFJ; // 0x98
		::UnityEngine::Quaternion OHMBJBIACGK; // 0xA4
		::System::Byte _padding3[0x4];
		::UnityEngine::Renderer* LIHLKMEHGEE; // 0xB8
		::UnityEngine::Transform* LKAGDENLLML; // 0xC0
		::System::Boolean HINCLJKOPCJ; // 0xC8
		::System::Boolean FPOPIHKIFCN; // 0xC9
		::System::Byte _padding4[0x2];
		::NPCCrowd::Lod::ELODLevel PDEOLNBPHJP; // 0xCC
		::System::String* NIKCNOADGFK; // 0xD0
		::System::Boolean FACPICEMPDH; // 0xD8
		::System::Byte _padding5[0x3];
		::NHMECLPHCFP NavmeshType; // 0xDC
		::System::Boolean DefaultActiveState; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET__CTOR_OFFSET))(this);
		}

		::DIFNAMIJCHM* get_CurrentState()
		{
			return ((::DIFNAMIJCHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_GET_CURRENTSTATE_OFFSET))(this);
		}

		::MoleMole::ScreenPlayer* get_ScreenPlayer()
		{
			return ((::MoleMole::ScreenPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_GET_SCREENPLAYER_OFFSET))(this);
		}

		::MoleMole::ScreenPlayer* get_playerDebuger()
		{
			return ((::MoleMole::ScreenPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_GET_PLAYERDEBUGER_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_START_OFFSET))(this);
		}

		::System::Void RegisterWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_REGISTERWIDGET_OFFSET))(this);
		}

		::System::Void SetDynamicWidget(::SceneObjectType OBNIAHNMHPF, ::System::Int32 PGHPLBHIIDK, ::CEIADOBKMML GABMGKNDJCF)
		{
			return ((::System::Void(*)(::PVOID, ::SceneObjectType, ::System::Int32, ::CEIADOBKMML))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_SETDYNAMICWIDGET_OFFSET))(this, OBNIAHNMHPF, PGHPLBHIIDK, GABMGKNDJCF);
		}

		::System::Void StartWidgetLogic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_STARTWIDGETLOGIC_OFFSET))(this);
		}

		::System::Void SetMainCityID(::System::Int32 MGMDLMBEDJF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_SETMAINCITYID_OFFSET))(this, MGMDLMBEDJF);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_CLEAR_OFFSET))(this);
		}

		::System::Void RunInCG(::System::String* MCOHLHMKLIP)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_RUNINCG_OFFSET))(this, MCOHLHMKLIP);
		}

		::System::Void UpdateWithTimeLine(::System::Single FNIOPKPHDEH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_UPDATEWITHTIMELINE_OFFSET))(this, FNIOPKPHDEH);
		}

		::System::Void StopWithTimeLine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_STOPWITHTIMELINE_OFFSET))(this);
		}

		::System::Void InitState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_INITSTATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_ONUPDATE_OFFSET))(this);
		}

		::System::Void SwitchState(::System::Int32 MGMDLMBEDJF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_SWITCHSTATE_OFFSET))(this, MGMDLMBEDJF);
		}

		::System::Boolean CheckSkipState(::NPCCrowd::Lod::ELODLevel MOBNMDEDJIP)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_CHECKSKIPSTATE_OFFSET))(this, MOBNMDEDJIP);
		}

		::System::Void SwitchState_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_SWITCHSTATE_1_OFFSET))(this);
		}

		static ::System::Boolean IsAIMoveAvatar(::UnityEngine::Collider* EIFONLCJOPG)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_ISAIMOVEAVATAR_OFFSET))(EIFONLCJOPG);
		}

		static ::System::Boolean IsTriggerMainAvatar(::UnityEngine::Collider* EIFONLCJOPG)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_ISTRIGGERMAINAVATAR_OFFSET))(EIFONLCJOPG);
		}

		::System::Void GetMyState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_GETMYSTATE_OFFSET))(this);
		}

		::System::Void OnLeaveScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_ONLEAVESCENE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnBecameVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_ONBECAMEVISIBLE_OFFSET))(this);
		}

		::System::Void OnBecameInvisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_ONBECAMEINVISIBLE_OFFSET))(this);
		}

		::System::Void ResetInitState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_RESETINITSTATE_OFFSET))(this);
		}

		::System::Void ResetPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_RESETPOSITION_OFFSET))(this);
		}

		::MoleMole::GameplayTag GetObjectTag()
		{
			return ((::MoleMole::GameplayTag(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_GETOBJECTTAG_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_GETOBJECT_OFFSET))(this);
		}

		::System::Void SetActive(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_SETACTIVE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void ResetActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_RESETACTIVE_OFFSET))(this);
		}

		::System::Void SetAccessoryLodLevel(::NPCCrowd::Lod::ELODLevel MOBNMDEDJIP)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_SETACCESSORYLODLEVEL_OFFSET))(this, MOBNMDEDJIP);
		}

		::NHMECLPHCFP GetNavmeshMarkType()
		{
			return ((::NHMECLPHCFP(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_GETNAVMESHMARKTYPE_OFFSET))(this);
		}

		::UnityEngine::Transform* GetTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_GETTRANSFORM_OFFSET))(this);
		}

		::System::Void NLEFCHGPBIH(::JDCJAJHEDDA* LILKIGNNLAJ)
		{
			return ((::System::Void(*)(::PVOID, ::JDCJAJHEDDA*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_NLEFCHGPBIH_OFFSET))(this, LILKIGNNLAJ);
		}

		::System::Void BJMOCICPJIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_BJMOCICPJIH_OFFSET))(this);
		}

		::System::Void BGKNOMMDIOB(::System::Single FNIOPKPHDEH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_BGKNOMMDIOB_OFFSET))(this, FNIOPKPHDEH);
		}

		::System::Void OPOOOJNMJGG(::PCODMIJEJEP IGAAKDOIPNN)
		{
			return ((::System::Void(*)(::PVOID, ::PCODMIJEJEP))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_OPOOOJNMJGG_OFFSET))(this, IGAAKDOIPNN);
		}

		::System::Void GIIEGALDCHC(::UnityEngine::Collider* EIFONLCJOPG)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_GIIEGALDCHC_OFFSET))(this, EIFONLCJOPG);
		}

		::System::Void EMFJLOGGDJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_EMFJLOGGDJK_OFFSET))(this);
		}

		::System::Void JEJHLBCGMFF(::UnityEngine::Collider* EIFONLCJOPG)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_JEJHLBCGMFF_OFFSET))(this, EIFONLCJOPG);
		}

		::System::Void BAFGMINIKHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_BAFGMINIKHA_OFFSET))(this);
		}

		::System::Void OIBDJAGIPBI(::System::Action* KJEGEDODKCE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_OIBDJAGIPBI_OFFSET))(this, KJEGEDODKCE);
		}

		::System::Void HMCGPJFFPFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_HMCGPJFFPFO_OFFSET))(this);
		}

		::ScreenPlayData* AJAHJOJFIOP()
		{
			return ((::ScreenPlayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_AJAHJOJFIOP_OFFSET))(this);
		}
	};
}
