#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class MBAFBIMCPEA;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MBAFBIMCPEA_ABCEDHKMHFI_JPCPBBAMDGJ_OFFSET UNITYSDK_OFFSET(0x1A633400)
#define MBAFBIMCPEA_ABCEDHKMHFI_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A6334E0)
#define MBAFBIMCPEA_ABCEDHKMHFI_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE__SYSTEM_INT32X_SYSTEM_INT32Y___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A6339D0)
#define MBAFBIMCPEA_ABCEDHKMHFI_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR__SYSTEM_INT32X_SYSTEM_INT32Y___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A633920)
#define MBAFBIMCPEA_ABCEDHKMHFI_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A633A50)
#define MBAFBIMCPEA_ABCEDHKMHFI_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A633980)
#define MBAFBIMCPEA_ABCEDHKMHFI_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A633930)
#define MBAFBIMCPEA_ABCEDHKMHFI_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A633310)
#define MBAFBIMCPEA_ABCEDHKMHFI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A633290)

inline static constexpr unsigned int MBAFBIMCPEA_ABCEDHKMHFI_TypeDefinitionIndex = 92167;

class MBAFBIMCPEA_ABCEDHKMHFI : public ::System::Object
{
public:
	::MBAFBIMCPEA* KLHPEBKNIFB; // 0x10
	::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* CNCDBBAMLPL; // 0x18
	::System::Int32 FPDDAGHMOJB; // 0x20
	::System::Int32 HFDNIDBIDON; // 0x24
	::System::Int32 HLHKAKJNAHG; // 0x28
	::System::Int32 BDEDDEGJFKL; // 0x2C
	::System::ValueTuple_2<::System::Int32, ::System::Int32> IDBEJJEKGDI; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MBAFBIMCPEA_ABCEDHKMHFI__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAFBIMCPEA_ABCEDHKMHFI_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAFBIMCPEA_ABCEDHKMHFI_MOVENEXT_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> System_Collections_Generic_IEnumerator__System_Int32x_System_Int32y___get_Current()
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAFBIMCPEA_ABCEDHKMHFI_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR__SYSTEM_INT32X_SYSTEM_INT32Y___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAFBIMCPEA_ABCEDHKMHFI_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAFBIMCPEA_ABCEDHKMHFI_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* System_Collections_Generic_IEnumerable__System_Int32x_System_Int32y___GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAFBIMCPEA_ABCEDHKMHFI_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE__SYSTEM_INT32X_SYSTEM_INT32Y___GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAFBIMCPEA_ABCEDHKMHFI_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::System::Void JPCPBBAMDGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAFBIMCPEA_ABCEDHKMHFI_JPCPBBAMDGJ_OFFSET))(this);
	}
};
