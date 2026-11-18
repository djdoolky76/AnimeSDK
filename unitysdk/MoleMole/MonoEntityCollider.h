#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class MBKPHCPCKBO;
class MMBKAKPDHIF;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision; }

#define MOLEMOLE_MONOENTITYCOLLIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x12B5B060)
#define MOLEMOLE_MONOENTITYCOLLIDER_EMPTY_OFFSET UNITYSDK_OFFSET(0x12B5ADE0)
#define MOLEMOLE_MONOENTITYCOLLIDER_GETCOMPONENTSAFELY_OFFSET UNITYSDK_OFFSET(0x12B5AEF0)
#define MOLEMOLE_MONOENTITYCOLLIDER_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x12B5ADD0)
#define MOLEMOLE_MONOENTITYCOLLIDER_KINAGMIJLGC_OFFSET UNITYSDK_OFFSET(0x12B5B0B0)
#define MOLEMOLE_MONOENTITYCOLLIDER_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x12B5B6B0)
#define MOLEMOLE_MONOENTITYCOLLIDER_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0x12B5B750)
#define MOLEMOLE_MONOENTITYCOLLIDER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12B5B530)
#define MOLEMOLE_MONOENTITYCOLLIDER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12B5B420)
#define MOLEMOLE_MONOENTITYCOLLIDER_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x12B5B7F0)
#define MOLEMOLE_MONOENTITYCOLLIDER_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x12B5B850)
#define MOLEMOLE_MONOENTITYCOLLIDER_SET_ENTITY_OFFSET UNITYSDK_OFFSET(0x12B5AC10)
#define MOLEMOLE_MONOENTITYCOLLIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B5B910)
#define MOLEMOLE_MONOENTITYCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x12B5B8C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEntityCollider_TypeDefinitionIndex = 39993;

	class MonoEntityCollider : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoEntityCollider*>** StaticGet_LBKDPPFMADB()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoEntityCollider*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEntityCollider_TypeDefinitionIndex)->GetStaticField(0x4D830);
		}
		::MoleMole::Battle::Entity* LEOKEOFNDLH; // 0x18
		::MMBKAKPDHIF* OKMNAMAKBPL; // 0x20
		::MBKPHCPCKBO* AFDANLOAOIL; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDER__CCTOR_OFFSET))();
		}

		::System::Void set_Entity(::MoleMole::Battle::Entity* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDER_SET_ENTITY_OFFSET))(this, EGEGIMGMJHN);
		}

		::MoleMole::Battle::Entity* get_Entity()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDER_GET_ENTITY_OFFSET))(this);
		}

		static ::System::Void Empty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDER_EMPTY_OFFSET))();
		}

		static ::MoleMole::MonoEntityCollider* GetComponentSafely(::System::Int32 HLJEFIIDMFA)
		{
			return ((::MoleMole::MonoEntityCollider*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDER_GETCOMPONENTSAFELY_OFFSET))(HLJEFIIDMFA);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* GMKILPBDCFN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDER_ONCOLLISIONENTER_OFFSET))(this, GMKILPBDCFN);
		}

		::System::Void OnCollisionExit(::UnityEngine::Collision* GMKILPBDCFN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDER_ONCOLLISIONEXIT_OFFSET))(this, GMKILPBDCFN);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* LIBPKNHDIGP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDER_ONTRIGGERENTER_OFFSET))(this, LIBPKNHDIGP);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* LIBPKNHDIGP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDER_ONTRIGGEREXIT_OFFSET))(this, LIBPKNHDIGP);
		}

		::System::Void KINAGMIJLGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDER_KINAGMIJLGC_OFFSET))(this);
		}
	};
}
