#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABLJDBEJNNI.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision; }

#define MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_AWAKE_OFFSET UNITYSDK_OFFSET(0xFA881C0)
#define MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_GBIGECMKDCG_OFFSET UNITYSDK_OFFSET(0xFA88380)
#define MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_GET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0xFA88120)
#define MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_GET_LAYERMASK_OFFSET UNITYSDK_OFFSET(0xFA881B0)
#define MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_GET_OBSERVETAG_OFFSET UNITYSDK_OFFSET(0xFA88150)
#define MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_GET_SELFCOLLIDER_OFFSET UNITYSDK_OFFSET(0xFA88140)
#define MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0xFA882D0)
#define MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0xFA88860)
#define MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xFA88290)
#define MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xFA88910)
#define MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0xFA889C0)
#define MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_SETCOLLIDERENABLE_OFFSET UNITYSDK_OFFSET(0xFA88A70)
#define MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_SET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0xFA88130)
#define MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_SET_OBSERVETAG_OFFSET UNITYSDK_OFFSET(0xFA88160)
#define MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0xFA88AD0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ColliderEventDispatcher_TypeDefinitionIndex = 75505;

	class ColliderEventDispatcher : public ::UnityEngine::MonoBehaviour
	{
	public:
		::ABLJDBEJNNI Mode; // 0x18
		::System::Byte _padding0[0x4];
		::System::Object* CallbackPara; // 0x20
		::System::Boolean _NFHKCGHGBAL_k__BackingField; // 0x28
		::System::Byte _padding1[0x7];
		::UnityEngine::Collider* GAJPKCHGFPE; // 0x30
		::System::Action_2<::UnityEngine::Collision*, ::System::Object*>* E_OnCollisionEnter; // 0x38
		::System::Action_2<::UnityEngine::Collision*, ::System::Object*>* E_OnCollisionExit; // 0x40
		::System::Action_2<::UnityEngine::Collider*, ::System::Object*>* E_OnTriggerEnter; // 0x48
		::System::Action_2<::UnityEngine::Collider*, ::System::Object*>* E_OnTriggerExit; // 0x50
		::System::Action_2<::UnityEngine::Collider*, ::System::Object*>* OnTriggerEnterCb; // 0x58
		::System::Action_2<::UnityEngine::Collider*, ::System::Object*>* OnTriggerExitCb; // 0x60
		::System::String* IFLGOAOIFFD; // 0x68
		::UnityEngine::LayerMask NHFLELKLBBF; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsDestroyed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_GET_ISDESTROYED_OFFSET))(this);
		}

		::System::Void set_IsDestroyed(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_SET_ISDESTROYED_OFFSET))(this, EGEGIMGMJHN);
		}

		::UnityEngine::Collider* get_selfCollider()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_GET_SELFCOLLIDER_OFFSET))(this);
		}

		::System::String* get_ObserveTag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_GET_OBSERVETAG_OFFSET))(this);
		}

		::System::Void set_ObserveTag(::System::String* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_SET_OBSERVETAG_OFFSET))(this, EGEGIMGMJHN);
		}

		::UnityEngine::LayerMask get_layerMask()
		{
			return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_GET_LAYERMASK_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* GMKILPBDCFN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_ONCOLLISIONENTER_OFFSET))(this, GMKILPBDCFN);
		}

		::System::Void OnCollisionExit(::UnityEngine::Collision* GMKILPBDCFN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_ONCOLLISIONEXIT_OFFSET))(this, GMKILPBDCFN);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* LIBPKNHDIGP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_ONTRIGGERENTER_OFFSET))(this, LIBPKNHDIGP);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* LIBPKNHDIGP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_ONTRIGGEREXIT_OFFSET))(this, LIBPKNHDIGP);
		}

		::System::Void SetColliderEnable(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_SETCOLLIDERENABLE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean GBIGECMKDCG(::UnityEngine::Collider* EHHHMFKHNAI, ::ABLJDBEJNNI GEJCKFFFKCL)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*, ::ABLJDBEJNNI))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_GBIGECMKDCG_OFFSET))(this, EHHHMFKHNAI, GEJCKFFFKCL);
		}
	};
}
