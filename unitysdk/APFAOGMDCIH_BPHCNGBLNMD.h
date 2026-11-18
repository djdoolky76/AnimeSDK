#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define APFAOGMDCIH_BPHCNGBLNMD_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F79F090)
#define APFAOGMDCIH_BPHCNGBLNMD_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F79F120)
#define APFAOGMDCIH_BPHCNGBLNMD_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F79F0B0)
#define APFAOGMDCIH_BPHCNGBLNMD_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F79F190)
#define APFAOGMDCIH_BPHCNGBLNMD_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F79F110)
#define APFAOGMDCIH_BPHCNGBLNMD_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F79F0C0)
#define APFAOGMDCIH_BPHCNGBLNMD_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F79F080)
#define APFAOGMDCIH_BPHCNGBLNMD__CTOR_OFFSET UNITYSDK_OFFSET(0x1F79F060)

inline static constexpr unsigned int APFAOGMDCIH_BPHCNGBLNMD_TypeDefinitionIndex = 29136;

class APFAOGMDCIH_BPHCNGBLNMD : public ::System::Object
{
public:
	::System::String* IDBEJJEKGDI; // 0x10
	::System::Int32 FPDDAGHMOJB; // 0x18
	::System::Int32 MDPILDGFNHN; // 0x1C

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + APFAOGMDCIH_BPHCNGBLNMD__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APFAOGMDCIH_BPHCNGBLNMD_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APFAOGMDCIH_BPHCNGBLNMD_MOVENEXT_OFFSET))(this);
	}

	::System::String* System_Collections_Generic_IEnumerator_System_String__get_Current()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APFAOGMDCIH_BPHCNGBLNMD_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APFAOGMDCIH_BPHCNGBLNMD_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + APFAOGMDCIH_BPHCNGBLNMD_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::String*>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + APFAOGMDCIH_BPHCNGBLNMD_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + APFAOGMDCIH_BPHCNGBLNMD_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
