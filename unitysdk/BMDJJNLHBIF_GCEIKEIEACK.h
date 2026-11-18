#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define BMDJJNLHBIF_GCEIKEIEACK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x115FCFB0)
#define BMDJJNLHBIF_GCEIKEIEACK_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x115FD340)
#define BMDJJNLHBIF_GCEIKEIEACK_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x115FD3A0)
#define BMDJJNLHBIF_GCEIKEIEACK_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x115FD350)
#define BMDJJNLHBIF_GCEIKEIEACK_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x115FCFA0)
#define BMDJJNLHBIF_GCEIKEIEACK__CTOR_OFFSET UNITYSDK_OFFSET(0x115FCF90)

inline static constexpr unsigned int BMDJJNLHBIF_GCEIKEIEACK_TypeDefinitionIndex = 75417;

class BMDJJNLHBIF_GCEIKEIEACK : public ::System::Object
{
public:
	::System::Object* IDBEJJEKGDI; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::Int32 MDPILDGFNHN; // 0x20
	::System::Single HBFKHANEEND; // 0x24

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BMDJJNLHBIF_GCEIKEIEACK__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDJJNLHBIF_GCEIKEIEACK_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDJJNLHBIF_GCEIKEIEACK_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDJJNLHBIF_GCEIKEIEACK_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDJJNLHBIF_GCEIKEIEACK_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDJJNLHBIF_GCEIKEIEACK_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
