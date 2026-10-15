#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LoopScene_LoginSceneState.h"
#include "unitysdk/RPG/GameCore/LoopSceneMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class AttachMoveObject; }
namespace RPG::Client { class LoopSceneMoveObject; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LOOPSCENE_AAIBIHJHDMM_OFFSET UNITYSDK_OFFSET(0xD4E9B10)
#define RPG_CLIENT_LOOPSCENE_ADDATTACHMOVEOBJECT_OFFSET UNITYSDK_OFFSET(0xD4E8BD0)
#define RPG_CLIENT_LOOPSCENE_AWAKE_OFFSET UNITYSDK_OFFSET(0xD4E9200)
#define RPG_CLIENT_LOOPSCENE_BLCOGFNGAPH_OFFSET UNITYSDK_OFFSET(0xD4E9430)
#define RPG_CLIENT_LOOPSCENE_CTOR_OFFSET UNITYSDK_OFFSET(0xD4E9FC0)
#define RPG_CLIENT_LOOPSCENE_DGFPGHDBHEO_OFFSET UNITYSDK_OFFSET(0xD4E9AC0)
#define RPG_CLIENT_LOOPSCENE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD4E8E00)
#define RPG_CLIENT_LOOPSCENE_FINDMOVEOBJECT_OFFSET UNITYSDK_OFFSET(0xD4E8CB0)
#define RPG_CLIENT_LOOPSCENE_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xD4E9330)
#define RPG_CLIENT_LOOPSCENE_INIT_OFFSET UNITYSDK_OFFSET(0xD4E8530)
#define RPG_CLIENT_LOOPSCENE_IOCLEGCLOPH_OFFSET UNITYSDK_OFFSET(0xD4E9660)
#define RPG_CLIENT_LOOPSCENE_KPEEIACDGJJ_OFFSET UNITYSDK_OFFSET(0xD4E92E0)
#define RPG_CLIENT_LOOPSCENE_LAJIKFMMOIN_OFFSET UNITYSDK_OFFSET(0xD4E93E0)
#define RPG_CLIENT_LOOPSCENE_NAHKLJMAAMF_OFFSET UNITYSDK_OFFSET(0xD4E9480)
#define RPG_CLIENT_LOOPSCENE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD4E9270)
#define RPG_CLIENT_LOOPSCENE_OPLNFDGOIGO_OFFSET UNITYSDK_OFFSET(0xD4E9A50)
#define RPG_CLIENT_LOOPSCENE_RESETCAMERA_OFFSET UNITYSDK_OFFSET(0xD4E8A60)

namespace RPG::Client
{
	class LoopScene : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::LoopScene_LoginSceneState CurState; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::GameObject* SceneObj; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::AttachMoveObject*>* MoveObjs; // 0x28
		::System::Single MoveSpeed; // 0x30
		::System::Single StopMoveSpeed; // 0x34
		::System::Int32 SceneSize; // 0x38
		::System::Single SceneLength; // 0x3C
		::System::Single MaxRollbackLen; // 0x40
		::UnityEngine::Vector3 CameraDir; // 0x44
		::RPG::GameCore::LoopSceneMode LoopMode; // 0x50
		::System::Boolean TestMode; // 0x54
		::System::Byte _padding1[0x3];
		::System::Single KENILPHIGEO; // 0x58
		::System::Int32 GONFDFDGNEH; // 0x5C
		::System::Single GGEDBNJDJNN; // 0x60
		::System::Byte _padding2[0x4];
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* KNNAHKABMFG; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::LoopSceneMoveObject*>* CLCGGPNDELG; // 0x70
		::UnityEngine::Transform* ILPDLGIJMNN; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::GameCore::LoopSceneMode a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LoopSceneMode, ::System::Int32, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_INIT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ResetCamera(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_RESETCAMERA_OFFSET))(this, a1, a2);
		}

		::System::Void AddAttachMoveObject(::RPG::Client::AttachMoveObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AttachMoveObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_ADDATTACHMOVEOBJECT_OFFSET))(this, a1);
		}

		::RPG::Client::LoopSceneMoveObject* FindMoveObject(::System::String* a1)
		{
			return ((::RPG::Client::LoopSceneMoveObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_FINDMOVEOBJECT_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_DISPOSE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_ONDESTROY_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void LAJIKFMMOIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_LAJIKFMMOIN_OFFSET))(this);
		}

		::System::Void OPLNFDGOIGO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_OPLNFDGOIGO_OFFSET))(this, a1);
		}

		::System::Void BLCOGFNGAPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_BLCOGFNGAPH_OFFSET))(this);
		}

		::System::Void NAHKLJMAAMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_NAHKLJMAAMF_OFFSET))(this);
		}

		::System::Void IOCLEGCLOPH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_IOCLEGCLOPH_OFFSET))(this, a1);
		}

		::System::Void AAIBIHJHDMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_AAIBIHJHDMM_OFFSET))(this);
		}

		::System::Single DGFPGHDBHEO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_DGFPGHDBHEO_OFFSET))(this);
		}

		::System::Void KPEEIACDGJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_KPEEIACDGJJ_OFFSET))(this);
		}

	};
}
