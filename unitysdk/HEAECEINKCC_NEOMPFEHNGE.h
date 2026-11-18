#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HEAECEINKCC_NEOMPFEHNGE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x146F4E50)
#define HEAECEINKCC_NEOMPFEHNGE_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x146F4F40)
#define HEAECEINKCC_NEOMPFEHNGE_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x146F4FA0)
#define HEAECEINKCC_NEOMPFEHNGE_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x146F4F50)
#define HEAECEINKCC_NEOMPFEHNGE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x146F4E40)
#define HEAECEINKCC_NEOMPFEHNGE__CTOR_OFFSET UNITYSDK_OFFSET(0x146F4670)

inline static constexpr unsigned int HEAECEINKCC_NEOMPFEHNGE_TypeDefinitionIndex = 64567;

class HEAECEINKCC_NEOMPFEHNGE : public ::System::Object
{
public:
	::System::Object* IDBEJJEKGDI; // 0x10
	::System::String* OPEFAPEIIGM; // 0x18
	::System::Int32 MDPILDGFNHN; // 0x20

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HEAECEINKCC_NEOMPFEHNGE__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_NEOMPFEHNGE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_NEOMPFEHNGE_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_NEOMPFEHNGE_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_NEOMPFEHNGE_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_NEOMPFEHNGE_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
