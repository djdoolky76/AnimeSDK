#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IMOJLJBPEBA;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define IMOJLJBPEBA_PCCHOJEPAHA_JPCPBBAMDGJ_OFFSET UNITYSDK_OFFSET(0x1EBEB330)
#define IMOJLJBPEBA_PCCHOJEPAHA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EBEB340)
#define IMOJLJBPEBA_PCCHOJEPAHA_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EBEB560)
#define IMOJLJBPEBA_PCCHOJEPAHA_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EBEB4F0)
#define IMOJLJBPEBA_PCCHOJEPAHA_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EBEB5E0)
#define IMOJLJBPEBA_PCCHOJEPAHA_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EBEB550)
#define IMOJLJBPEBA_PCCHOJEPAHA_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1EBEB500)
#define IMOJLJBPEBA_PCCHOJEPAHA_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EBEB310)
#define IMOJLJBPEBA_PCCHOJEPAHA__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBEB2F0)

inline static constexpr unsigned int IMOJLJBPEBA_PCCHOJEPAHA_TypeDefinitionIndex = 29007;

class IMOJLJBPEBA_PCCHOJEPAHA : public ::System::Object
{
public:
	::IMOJLJBPEBA* KLHPEBKNIFB; // 0x10
	::System::Object* GHANCJDIDBC; // 0x18
	::System::Byte _padding0[0x10];
	::System::String* IDBEJJEKGDI; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38
	::System::Int32 FPDDAGHMOJB; // 0x3C

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IMOJLJBPEBA_PCCHOJEPAHA__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOJLJBPEBA_PCCHOJEPAHA_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOJLJBPEBA_PCCHOJEPAHA_MOVENEXT_OFFSET))(this);
	}

	::System::String* System_Collections_Generic_IEnumerator_System_String__get_Current()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOJLJBPEBA_PCCHOJEPAHA_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOJLJBPEBA_PCCHOJEPAHA_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOJLJBPEBA_PCCHOJEPAHA_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::String*>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOJLJBPEBA_PCCHOJEPAHA_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOJLJBPEBA_PCCHOJEPAHA_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::System::Void JPCPBBAMDGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOJLJBPEBA_PCCHOJEPAHA_JPCPBBAMDGJ_OFFSET))(this);
	}
};
