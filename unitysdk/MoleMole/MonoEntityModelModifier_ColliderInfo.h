#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEntityModelModifier_ColliderInfo_ELPCPMFBKGJ.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define MOLEMOLE_MONOENTITYMODELMODIFIER_COLLIDERINFO_OIAAGHNEACK_OFFSET UNITYSDK_OFFSET(0x1A917AD0)
#define MOLEMOLE_MONOENTITYMODELMODIFIER_COLLIDERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A917AC0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEntityModelModifier_ColliderInfo_TypeDefinitionIndex = 45078;

	class MonoEntityModelModifier_ColliderInfo : public ::System::Object
	{
	public:
		::MoleMole::MonoEntityModelModifier_ColliderInfo_ELPCPMFBKGJ Type; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* Name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYMODELMODIFIER_COLLIDERINFO__CTOR_OFFSET))(this);
		}

		::UnityEngine::Collider* OIAAGHNEACK(::MoleMole::Battle::Entity* KECKGDFIALJ)
		{
			return ((::UnityEngine::Collider*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYMODELMODIFIER_COLLIDERINFO_OIAAGHNEACK_OFFSET))(this, KECKGDFIALJ);
		}
	};
}
