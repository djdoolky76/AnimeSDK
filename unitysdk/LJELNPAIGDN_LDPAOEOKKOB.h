#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LJELNPAIGDN;
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class GameObject; }

#define LJELNPAIGDN_LDPAOEOKKOB_BFOJKLIEDPC_OFFSET UNITYSDK_OFFSET(0x16C5F050)
#define LJELNPAIGDN_LDPAOEOKKOB__CTOR_OFFSET UNITYSDK_OFFSET(0x16C5F040)

inline static constexpr unsigned int LJELNPAIGDN_LDPAOEOKKOB_TypeDefinitionIndex = 87235;

class LJELNPAIGDN_LDPAOEOKKOB : public ::System::Object
{
public:
	::LJELNPAIGDN* KLHPEBKNIFB; // 0x10
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJELNPAIGDN_LDPAOEOKKOB__CTOR_OFFSET))(this);
	}

	::System::Void BFOJKLIEDPC(::UnityEngine::GameObject* NJOAJLDJCCJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + LJELNPAIGDN_LDPAOEOKKOB_BFOJKLIEDPC_OFFSET))(this, NJOAJLDJCCJ);
	}
};
