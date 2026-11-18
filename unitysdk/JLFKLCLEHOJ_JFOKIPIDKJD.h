#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JLFKLCLEHOJ;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define JLFKLCLEHOJ_JFOKIPIDKJD_JPCPBBAMDGJ_OFFSET UNITYSDK_OFFSET(0x1EBEB6A0)
#define JLFKLCLEHOJ_JFOKIPIDKJD_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EBEB6B0)
#define JLFKLCLEHOJ_JFOKIPIDKJD_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_COLLECTIONS_GENERIC_HASHSET_SYSTEM_UINT32___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EBEB8D0)
#define JLFKLCLEHOJ_JFOKIPIDKJD_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_HASHSET_SYSTEM_UINT32___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EBEB860)
#define JLFKLCLEHOJ_JFOKIPIDKJD_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EBEB950)
#define JLFKLCLEHOJ_JFOKIPIDKJD_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EBEB8C0)
#define JLFKLCLEHOJ_JFOKIPIDKJD_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1EBEB870)
#define JLFKLCLEHOJ_JFOKIPIDKJD_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EBEB680)
#define JLFKLCLEHOJ_JFOKIPIDKJD__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBEB660)

inline static constexpr unsigned int JLFKLCLEHOJ_JFOKIPIDKJD_TypeDefinitionIndex = 28680;

class JLFKLCLEHOJ_JFOKIPIDKJD : public ::System::Object
{
public:
	::JLFKLCLEHOJ* KLHPEBKNIFB; // 0x10
	::System::Object* GHANCJDIDBC; // 0x18
	::System::Byte _padding0[0x10];
	::System::Collections::Generic::HashSet_1<::System::UInt32>* IDBEJJEKGDI; // 0x30
	::System::Int32 FPDDAGHMOJB; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x3C

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JLFKLCLEHOJ_JFOKIPIDKJD__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLFKLCLEHOJ_JFOKIPIDKJD_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLFKLCLEHOJ_JFOKIPIDKJD_MOVENEXT_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* System_Collections_Generic_IEnumerator_System_Collections_Generic_HashSet_System_UInt32___get_Current()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLFKLCLEHOJ_JFOKIPIDKJD_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_HASHSET_SYSTEM_UINT32___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLFKLCLEHOJ_JFOKIPIDKJD_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLFKLCLEHOJ_JFOKIPIDKJD_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::HashSet_1<::System::UInt32>*>* System_Collections_Generic_IEnumerable_System_Collections_Generic_HashSet_System_UInt32___GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::HashSet_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLFKLCLEHOJ_JFOKIPIDKJD_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_COLLECTIONS_GENERIC_HASHSET_SYSTEM_UINT32___GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLFKLCLEHOJ_JFOKIPIDKJD_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::System::Void JPCPBBAMDGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLFKLCLEHOJ_JFOKIPIDKJD_JPCPBBAMDGJ_OFFSET))(this);
	}
};
