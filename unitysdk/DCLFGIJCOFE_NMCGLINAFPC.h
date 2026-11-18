#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DCLFGIJCOFE;
namespace UnityEngine { class Animator; }

#define DCLFGIJCOFE_NMCGLINAFPC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19D52860)
#define DCLFGIJCOFE_NMCGLINAFPC_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19D53620)
#define DCLFGIJCOFE_NMCGLINAFPC_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19D53680)
#define DCLFGIJCOFE_NMCGLINAFPC_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19D53630)
#define DCLFGIJCOFE_NMCGLINAFPC_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19D52850)
#define DCLFGIJCOFE_NMCGLINAFPC__CTOR_OFFSET UNITYSDK_OFFSET(0x19D52840)

inline static constexpr unsigned int DCLFGIJCOFE_NMCGLINAFPC_TypeDefinitionIndex = 91396;

class DCLFGIJCOFE_NMCGLINAFPC : public ::System::Object
{
public:
	::DCLFGIJCOFE* KLHPEBKNIFB; // 0x10
	::UnityEngine::Animator* ECAPILFEAGH; // 0x18
	::System::Single IDBEJJEKGDI; // 0x20
	::System::Int32 MDPILDGFNHN; // 0x24

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_NMCGLINAFPC__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_NMCGLINAFPC_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_NMCGLINAFPC_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_NMCGLINAFPC_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_NMCGLINAFPC_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_NMCGLINAFPC_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
