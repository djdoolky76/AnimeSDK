#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define GPPMPHICDEA_OEJGKMADBID_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15F439C0)
#define GPPMPHICDEA_OEJGKMADBID_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15F43AB0)
#define GPPMPHICDEA_OEJGKMADBID_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15F43B10)
#define GPPMPHICDEA_OEJGKMADBID_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15F43AC0)
#define GPPMPHICDEA_OEJGKMADBID_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F439B0)
#define GPPMPHICDEA_OEJGKMADBID__CTOR_OFFSET UNITYSDK_OFFSET(0x15F439A0)

inline static constexpr unsigned int GPPMPHICDEA_OEJGKMADBID_TypeDefinitionIndex = 42628;

class GPPMPHICDEA_OEJGKMADBID : public ::System::Object
{
public:
	::System::Action* DMPEOJCCCLO; // 0x10
	::System::Object* IDBEJJEKGDI; // 0x18
	::UnityEngine::Animation* BKOLCDPOJAL; // 0x20
	::System::String* HMJBMNAAGKB; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x30
	::System::Single AEDOPFKKLCO; // 0x34
	::System::Single FNIOPKPHDEH; // 0x38

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GPPMPHICDEA_OEJGKMADBID__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_OEJGKMADBID_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_OEJGKMADBID_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_OEJGKMADBID_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_OEJGKMADBID_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_OEJGKMADBID_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
