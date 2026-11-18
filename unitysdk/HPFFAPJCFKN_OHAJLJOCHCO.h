#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HPFFAPJCFKN;
namespace UnityEngine { class AnimationCurve; }

#define HPFFAPJCFKN_OHAJLJOCHCO_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x165589E0)
#define HPFFAPJCFKN_OHAJLJOCHCO_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16558BA0)
#define HPFFAPJCFKN_OHAJLJOCHCO_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16558C00)
#define HPFFAPJCFKN_OHAJLJOCHCO_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16558BB0)
#define HPFFAPJCFKN_OHAJLJOCHCO_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x165589D0)
#define HPFFAPJCFKN_OHAJLJOCHCO__CTOR_OFFSET UNITYSDK_OFFSET(0x165589C0)

inline static constexpr unsigned int HPFFAPJCFKN_OHAJLJOCHCO_TypeDefinitionIndex = 91575;

class HPFFAPJCFKN_OHAJLJOCHCO : public ::System::Object
{
public:
	::HPFFAPJCFKN* KLHPEBKNIFB; // 0x10
	::System::Object* IDBEJJEKGDI; // 0x18
	::UnityEngine::AnimationCurve* FAJHPKBELMF; // 0x20
	::System::Boolean NNMIAOMGAAO; // 0x28
	::System::Byte _padding0[0x3];
	::System::Single IGEDHCLLJNN; // 0x2C
	::System::Int32 MDPILDGFNHN; // 0x30
	::System::Single MDPPNMIPDMP; // 0x34

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HPFFAPJCFKN_OHAJLJOCHCO__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPFFAPJCFKN_OHAJLJOCHCO_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPFFAPJCFKN_OHAJLJOCHCO_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPFFAPJCFKN_OHAJLJOCHCO_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPFFAPJCFKN_OHAJLJOCHCO_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPFFAPJCFKN_OHAJLJOCHCO_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
