#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Collider; }

#define MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_BINDENTITY_OFFSET UNITYSDK_OFFSET(0x1A710260)
#define MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_DENPMBEGLJH_OFFSET UNITYSDK_OFFSET(0x1A710EC0)
#define MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_GET_BOUNDENTITY_OFFSET UNITYSDK_OFFSET(0x1A710240)
#define MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_GET_BOUNDWALLCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1A710250)
#define MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_GET_IGNORETAG_OFFSET UNITYSDK_OFFSET(0x1A710220)
#define MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_OHHNEPLGOPF_OFFSET UNITYSDK_OFFSET(0x1A710ED0)
#define MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1A7108E0)
#define MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1A710BC0)
#define MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_SET_IGNORETAG_OFFSET UNITYSDK_OFFSET(0x1A710230)
#define MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_UNBINDENTITY_OFFSET UNITYSDK_OFFSET(0x1A710600)
#define MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A710E70)

namespace MoleMole
{
	inline static constexpr unsigned int MonoWallCollisionIgnoreSensor_TypeDefinitionIndex = 48926;

	class MonoWallCollisionIgnoreSensor : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::HashSet_1<::UnityEngine::Collider*>* CollidersIgnored; // 0x18
		::System::String* _IJCMFFBKAOA_k__BackingField; // 0x20
		::MoleMole::EntityHandle _CILLPPPHKAH_k__BackingField; // 0x28
		::UnityEngine::Collider* _PLEHFCHLGCL_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR__CTOR_OFFSET))(this);
		}

		::System::String* get_IgnoreTag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_GET_IGNORETAG_OFFSET))(this);
		}

		::System::Void set_IgnoreTag(::System::String* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_SET_IGNORETAG_OFFSET))(this, EGEGIMGMJHN);
		}

		::MoleMole::EntityHandle get_BoundEntity()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_GET_BOUNDENTITY_OFFSET))(this);
		}

		::UnityEngine::Collider* get_BoundWallCollider()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_GET_BOUNDWALLCOLLIDER_OFFSET))(this);
		}

		::System::Void BindEntity(::MoleMole::EntityHandle KECKGDFIALJ)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_BINDENTITY_OFFSET))(this, KECKGDFIALJ);
		}

		::System::Void UnbindEntity(::MoleMole::EntityHandle KECKGDFIALJ)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_UNBINDENTITY_OFFSET))(this, KECKGDFIALJ);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* LIBPKNHDIGP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_ONTRIGGERENTER_OFFSET))(this, LIBPKNHDIGP);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* LIBPKNHDIGP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_ONTRIGGEREXIT_OFFSET))(this, LIBPKNHDIGP);
		}

		::System::Void DENPMBEGLJH(::UnityEngine::Collider* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_DENPMBEGLJH_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void OHHNEPLGOPF(::MoleMole::EntityHandle EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_OHHNEPLGOPF_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
