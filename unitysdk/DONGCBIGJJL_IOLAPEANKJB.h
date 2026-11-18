#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DONGCBIGJJL;

#define DONGCBIGJJL_IOLAPEANKJB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xF99B6F0)
#define DONGCBIGJJL_IOLAPEANKJB_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF99B8A0)
#define DONGCBIGJJL_IOLAPEANKJB_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF99B900)
#define DONGCBIGJJL_IOLAPEANKJB_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xF99B8B0)
#define DONGCBIGJJL_IOLAPEANKJB_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF99B6E0)
#define DONGCBIGJJL_IOLAPEANKJB__CTOR_OFFSET UNITYSDK_OFFSET(0xF99B6D0)

inline static constexpr unsigned int DONGCBIGJJL_IOLAPEANKJB_TypeDefinitionIndex = 70501;

class DONGCBIGJJL_IOLAPEANKJB : public ::System::Object
{
public:
	::DONGCBIGJJL* KLHPEBKNIFB; // 0x10
	::System::Int32 MDPILDGFNHN; // 0x18
	::System::Single GNODJCCNEKP; // 0x1C
	::System::Single IDBEJJEKGDI; // 0x20
	::System::Int32 IEGPOKIFOIO; // 0x24

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DONGCBIGJJL_IOLAPEANKJB__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_IOLAPEANKJB_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_IOLAPEANKJB_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_IOLAPEANKJB_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_IOLAPEANKJB_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_IOLAPEANKJB_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
