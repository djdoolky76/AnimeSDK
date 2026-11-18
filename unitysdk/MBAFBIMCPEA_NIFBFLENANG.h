#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MBAFBIMCPEA_NIFBFLENANG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x14D58D60)
#define MBAFBIMCPEA_NIFBFLENANG_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE__SYSTEM_INT32X_SYSTEM_INT32Y___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x14D58EB0)
#define MBAFBIMCPEA_NIFBFLENANG_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR__SYSTEM_INT32X_SYSTEM_INT32Y___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14D58E00)
#define MBAFBIMCPEA_NIFBFLENANG_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x14D58F30)
#define MBAFBIMCPEA_NIFBFLENANG_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14D58E60)
#define MBAFBIMCPEA_NIFBFLENANG_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x14D58E10)
#define MBAFBIMCPEA_NIFBFLENANG_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14D58D50)
#define MBAFBIMCPEA_NIFBFLENANG__CTOR_OFFSET UNITYSDK_OFFSET(0x14D58D30)

inline static constexpr unsigned int MBAFBIMCPEA_NIFBFLENANG_TypeDefinitionIndex = 92166;

class MBAFBIMCPEA_NIFBFLENANG : public ::System::Object
{
public:
	::System::Int32 MDPILDGFNHN; // 0x10
	::System::Int32 HLHKAKJNAHG; // 0x14
	::System::Int32 BDEDDEGJFKL; // 0x18
	::System::Int32 CKOJAIAIAJD; // 0x1C
	::System::Int32 IPJIDFEPLCK; // 0x20
	::System::Int32 FPDDAGHMOJB; // 0x24
	::System::ValueTuple_2<::System::Int32, ::System::Int32> IDBEJJEKGDI; // 0x28
	::System::Int32 HFDNIDBIDON; // 0x30

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MBAFBIMCPEA_NIFBFLENANG__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAFBIMCPEA_NIFBFLENANG_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAFBIMCPEA_NIFBFLENANG_MOVENEXT_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> System_Collections_Generic_IEnumerator__System_Int32x_System_Int32y___get_Current()
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAFBIMCPEA_NIFBFLENANG_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR__SYSTEM_INT32X_SYSTEM_INT32Y___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAFBIMCPEA_NIFBFLENANG_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAFBIMCPEA_NIFBFLENANG_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* System_Collections_Generic_IEnumerable__System_Int32x_System_Int32y___GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAFBIMCPEA_NIFBFLENANG_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE__SYSTEM_INT32X_SYSTEM_INT32Y___GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAFBIMCPEA_NIFBFLENANG_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
