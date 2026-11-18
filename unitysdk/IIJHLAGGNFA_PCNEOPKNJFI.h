#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IIJHLAGGNFA_PCNEOPKNJFI_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16A9ED80)
#define IIJHLAGGNFA_PCNEOPKNJFI_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16A9EE20)
#define IIJHLAGGNFA_PCNEOPKNJFI_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16A9EE80)
#define IIJHLAGGNFA_PCNEOPKNJFI_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16A9EE30)
#define IIJHLAGGNFA_PCNEOPKNJFI_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16A9ED70)
#define IIJHLAGGNFA_PCNEOPKNJFI__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9ED60)

inline static constexpr unsigned int IIJHLAGGNFA_PCNEOPKNJFI_TypeDefinitionIndex = 47518;

class IIJHLAGGNFA_PCNEOPKNJFI : public ::System::Object
{
public:
	::System::Single IDBEJJEKGDI; // 0x10
	::System::UInt32 NJNCGJLHLKC; // 0x14
	::System::Int32 MDPILDGFNHN; // 0x18

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IIJHLAGGNFA_PCNEOPKNJFI__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIJHLAGGNFA_PCNEOPKNJFI_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIJHLAGGNFA_PCNEOPKNJFI_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IIJHLAGGNFA_PCNEOPKNJFI_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIJHLAGGNFA_PCNEOPKNJFI_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIJHLAGGNFA_PCNEOPKNJFI_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
