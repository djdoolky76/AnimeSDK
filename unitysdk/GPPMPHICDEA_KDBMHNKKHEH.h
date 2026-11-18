#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GCIMMDDIFBJ;
namespace System { class Action; }
namespace System { class String; }

#define GPPMPHICDEA_KDBMHNKKHEH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x14921860)
#define GPPMPHICDEA_KDBMHNKKHEH_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x149219B0)
#define GPPMPHICDEA_KDBMHNKKHEH_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14921A10)
#define GPPMPHICDEA_KDBMHNKKHEH_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x149219C0)
#define GPPMPHICDEA_KDBMHNKKHEH_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14921850)
#define GPPMPHICDEA_KDBMHNKKHEH__CTOR_OFFSET UNITYSDK_OFFSET(0x14921840)

inline static constexpr unsigned int GPPMPHICDEA_KDBMHNKKHEH_TypeDefinitionIndex = 42676;

class GPPMPHICDEA_KDBMHNKKHEH : public ::System::Object
{
public:
	::System::Object* IDBEJJEKGDI; // 0x10
	::System::Action* DMPEOJCCCLO; // 0x18
	::GCIMMDDIFBJ* BKOLCDPOJAL; // 0x20
	::System::String* HMJBMNAAGKB; // 0x28
	::System::Single FNIOPKPHDEH; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x34
	::System::Single AEDOPFKKLCO; // 0x38

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GPPMPHICDEA_KDBMHNKKHEH__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_KDBMHNKKHEH_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_KDBMHNKKHEH_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_KDBMHNKKHEH_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_KDBMHNKKHEH_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_KDBMHNKKHEH_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
