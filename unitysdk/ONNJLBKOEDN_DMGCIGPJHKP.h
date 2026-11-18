#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Animator; }

#define ONNJLBKOEDN_DMGCIGPJHKP_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x136C2550)
#define ONNJLBKOEDN_DMGCIGPJHKP_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x136C26C0)
#define ONNJLBKOEDN_DMGCIGPJHKP_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x136C2720)
#define ONNJLBKOEDN_DMGCIGPJHKP_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x136C26D0)
#define ONNJLBKOEDN_DMGCIGPJHKP_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x136C2540)
#define ONNJLBKOEDN_DMGCIGPJHKP__CTOR_OFFSET UNITYSDK_OFFSET(0x136C2530)

inline static constexpr unsigned int ONNJLBKOEDN_DMGCIGPJHKP_TypeDefinitionIndex = 55545;

class ONNJLBKOEDN_DMGCIGPJHKP : public ::System::Object
{
public:
	::UnityEngine::Animator* MLDMLDNBBCE; // 0x10
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x18
	::System::Int32 MDPILDGFNHN; // 0x20
	::System::Single IDBEJJEKGDI; // 0x24

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ONNJLBKOEDN_DMGCIGPJHKP__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNJLBKOEDN_DMGCIGPJHKP_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNJLBKOEDN_DMGCIGPJHKP_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNJLBKOEDN_DMGCIGPJHKP_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNJLBKOEDN_DMGCIGPJHKP_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNJLBKOEDN_DMGCIGPJHKP_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
