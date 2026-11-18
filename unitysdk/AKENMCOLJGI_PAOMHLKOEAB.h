#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AKENMCOLJGI;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define AKENMCOLJGI_PAOMHLKOEAB_JPCPBBAMDGJ_OFFSET UNITYSDK_OFFSET(0x143B1E10)
#define AKENMCOLJGI_PAOMHLKOEAB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x143B1E20)
#define AKENMCOLJGI_PAOMHLKOEAB_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_UINT32__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x143B2070)
#define AKENMCOLJGI_PAOMHLKOEAB_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT32__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x143B1FC0)
#define AKENMCOLJGI_PAOMHLKOEAB_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x143B20F0)
#define AKENMCOLJGI_PAOMHLKOEAB_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x143B2020)
#define AKENMCOLJGI_PAOMHLKOEAB_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x143B1FD0)
#define AKENMCOLJGI_PAOMHLKOEAB_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x143B1DF0)
#define AKENMCOLJGI_PAOMHLKOEAB__CTOR_OFFSET UNITYSDK_OFFSET(0x143B1DD0)

inline static constexpr unsigned int AKENMCOLJGI_PAOMHLKOEAB_TypeDefinitionIndex = 44276;

class AKENMCOLJGI_PAOMHLKOEAB : public ::System::Object
{
public:
	::AKENMCOLJGI* KLHPEBKNIFB; // 0x10
	::System::Object* GHANCJDIDBC; // 0x18
	::System::Byte _padding0[0x8];
	::System::Int32 MDPILDGFNHN; // 0x28
	::System::Int32 FPDDAGHMOJB; // 0x2C
	::System::UInt32 IDBEJJEKGDI; // 0x30

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKENMCOLJGI_PAOMHLKOEAB__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENMCOLJGI_PAOMHLKOEAB_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENMCOLJGI_PAOMHLKOEAB_MOVENEXT_OFFSET))(this);
	}

	::System::UInt32 System_Collections_Generic_IEnumerator_System_UInt32__get_Current()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENMCOLJGI_PAOMHLKOEAB_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT32__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENMCOLJGI_PAOMHLKOEAB_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENMCOLJGI_PAOMHLKOEAB_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::UInt32>* System_Collections_Generic_IEnumerable_System_UInt32__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENMCOLJGI_PAOMHLKOEAB_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_UINT32__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENMCOLJGI_PAOMHLKOEAB_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::System::Void JPCPBBAMDGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENMCOLJGI_PAOMHLKOEAB_JPCPBBAMDGJ_OFFSET))(this);
	}
};
