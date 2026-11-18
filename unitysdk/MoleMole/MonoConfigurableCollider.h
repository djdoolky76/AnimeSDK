#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBGABOFHFHL.h"
#include "unitysdk/FFINLFNBLBG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/LayerMaskStatic_LDGDJLOILCG.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/Foundation/Tuple_3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class OEEMDJPPNBM;
namespace MoleMole::Config { class ConfigTimeDrivenAttackCollider; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_BPHMCJFHCLG_OFFSET UNITYSDK_OFFSET(0x130EA8F0)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_CGADIPLIANC_OFFSET UNITYSDK_OFFSET(0x130EA840)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x130EA2D0)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_CLEAN_OFFSET UNITYSDK_OFFSET(0x130EAED0)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x130EA310)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_GETCONFIGCOLLIDERPARAMS_OFFSET UNITYSDK_OFFSET(0x130EB2A0)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_GET_COLLIDERTYPE_OFFSET UNITYSDK_OFFSET(0x130EAEB0)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_GET_CONFIGURABLECOLTYPE_OFFSET UNITYSDK_OFFSET(0x130EAE80)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_GET_OWNERCOLLIDER_OFFSET UNITYSDK_OFFSET(0x130EAE90)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x130EACD0)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_GET_ROOTGO_OFFSET UNITYSDK_OFFSET(0x130EAEC0)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_JPLMKKOGGCK_OFFSET UNITYSDK_OFFSET(0x130EB520)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x130EA4B0)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x130EA360)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x130EA600)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x130EA950)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_PCJGFAKKDBO_OFFSET UNITYSDK_OFFSET(0x130EAC50)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_PKJHDIJLBNE_OFFSET UNITYSDK_OFFSET(0x130EA000)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_SETUPCOLLIDER_OFFSET UNITYSDK_OFFSET(0x130E9F90)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_SETUPINSTANCEDCOLLIDER_OFFSET UNITYSDK_OFFSET(0x130E9EF0)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_SETUPTIMEDRIVENCOLLIDER_OFFSET UNITYSDK_OFFSET(0x130E9E70)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_SET_COLLIDERTYPE_OFFSET UNITYSDK_OFFSET(0x130EAEA0)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_SET_CONFIGURABLECOLTYPE_OFFSET UNITYSDK_OFFSET(0x130EAE70)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x130EAB90)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x130EB4C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoConfigurableCollider_TypeDefinitionIndex = 57652;

	class MonoConfigurableCollider : public ::UnityEngine::MonoBehaviour
	{
	public:
		::OEEMDJPPNBM* FHKIIDIIPCA; // 0x18
		::MoleMole::EntityHandle FEFFFPGCIIO; // 0x20
		::UnityEngine::LayerMask OOHCNKPKMHL; // 0x30
		::MoleMole::LayerMaskStatic_LDGDJLOILCG KJBDHAIJPFK; // 0x34
		::FFINLFNBLBG JCGADLBKHKC; // 0x38
		::System::Byte _padding0[0x4];
		::UnityEngine::Collider* ALBOBDDMFPN; // 0x40
		::MoleMole::Config::ConfigTimeDrivenAttackCollider* CNKCEGLIGNK; // 0x48
		::EBGABOFHFHL CKOMLFAEFHG; // 0x50
		::System::Byte _padding1[0x4];
		::UnityEngine::GameObject* KGFOGNGLHOC; // 0x58
		::System::String* DALCKDGHCPH; // 0x60
		::System::Action_1<::UnityEngine::Collider*>* OnTriggerEnterCallback; // 0x68
		::System::Action_1<::UnityEngine::Collider*>* OnTriggerExitCallback; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER__CTOR_OFFSET))(this);
		}

		::System::Void SetupTimeDrivenCollider(::UnityEngine::GameObject* IAPKABMDJNF, ::MoleMole::Config::ConfigTimeDrivenAttackCollider* DFMKILICPFB, ::UnityEngine::LayerMask FBNGKPGLADH, ::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_SETUPTIMEDRIVENCOLLIDER_OFFSET))(this, IAPKABMDJNF, DFMKILICPFB, FBNGKPGLADH, BBFAJBKOAOB);
		}

		::System::Void SetupInstancedCollider(::System::String* CJBJONJDOLI, ::UnityEngine::GameObject* IAPKABMDJNF, ::MoleMole::Config::ConfigTimeDrivenAttackCollider* DFMKILICPFB, ::UnityEngine::LayerMask FBNGKPGLADH, ::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_SETUPINSTANCEDCOLLIDER_OFFSET))(this, CJBJONJDOLI, IAPKABMDJNF, DFMKILICPFB, FBNGKPGLADH, BBFAJBKOAOB);
		}

		::System::Void SetupCollider(::MoleMole::Config::ConfigTimeDrivenAttackCollider* DFMKILICPFB)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_SETUPCOLLIDER_OFFSET))(this, DFMKILICPFB);
		}

		::System::Void PKJHDIJLBNE(::MoleMole::Config::ConfigTimeDrivenAttackCollider* DFMKILICPFB, ::UnityEngine::LayerMask FBNGKPGLADH, ::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_PKJHDIJLBNE_OFFSET))(this, DFMKILICPFB, FBNGKPGLADH, BBFAJBKOAOB);
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_CLEANUP_OFFSET))(this);
		}

		::System::Void DrawLine(::System::Boolean KBJJDPHGEDI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_DRAWLINE_OFFSET))(this, KBJJDPHGEDI);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* LIBPKNHDIGP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_ONTRIGGERENTER_OFFSET))(this, LIBPKNHDIGP);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* LIBPKNHDIGP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_ONTRIGGEREXIT_OFFSET))(this, LIBPKNHDIGP);
		}

		::System::Void set_Owner(::MoleMole::EntityHandle EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_SET_OWNER_OFFSET))(this, EGEGIMGMJHN);
		}

		::MoleMole::EntityHandle get_Owner()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_ConfigurableColType(::FFINLFNBLBG EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::FFINLFNBLBG))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_SET_CONFIGURABLECOLTYPE_OFFSET))(this, EGEGIMGMJHN);
		}

		::FFINLFNBLBG get_ConfigurableColType()
		{
			return ((::FFINLFNBLBG(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_GET_CONFIGURABLECOLTYPE_OFFSET))(this);
		}

		::UnityEngine::Collider* get_OwnerCollider()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_GET_OWNERCOLLIDER_OFFSET))(this);
		}

		::System::Void set_ColliderType(::EBGABOFHFHL EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::EBGABOFHFHL))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_SET_COLLIDERTYPE_OFFSET))(this, EGEGIMGMJHN);
		}

		::EBGABOFHFHL get_ColliderType()
		{
			return ((::EBGABOFHFHL(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_GET_COLLIDERTYPE_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_RootGo()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_GET_ROOTGO_OFFSET))(this);
		}

		::System::Void Clean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_CLEAN_OFFSET))(this);
		}

		::Foundation::Tuple_3<::System::Single, ::System::Single, ::System::Single> GetConfigColliderParams()
		{
			return ((::Foundation::Tuple_3<::System::Single, ::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_GETCONFIGCOLLIDERPARAMS_OFFSET))(this);
		}

		::System::Boolean CGADIPLIANC(::UnityEngine::Collider* LIBPKNHDIGP)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_CGADIPLIANC_OFFSET))(this, LIBPKNHDIGP);
		}

		::OEEMDJPPNBM* BPHMCJFHCLG()
		{
			return ((::OEEMDJPPNBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_BPHMCJFHCLG_OFFSET))(this);
		}

		::UnityEngine::Vector3 JPLMKKOGGCK(::UnityEngine::Vector3 FBHDMHOBIEE)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_JPLMKKOGGCK_OFFSET))(this, FBHDMHOBIEE);
		}

		::System::Void PCJGFAKKDBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_PCJGFAKKDBO_OFFSET))(this);
		}
	};
}
