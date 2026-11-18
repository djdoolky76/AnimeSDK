#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define FBOHDKKBJKK_DCOKFMBLBHJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x11ABDCD0)
#define FBOHDKKBJKK_DCOKFMBLBHJ_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE__SYSTEM_INT32X_SYSTEM_INT32Y___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x11ABDE20)
#define FBOHDKKBJKK_DCOKFMBLBHJ_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR__SYSTEM_INT32X_SYSTEM_INT32Y___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11ABDD70)
#define FBOHDKKBJKK_DCOKFMBLBHJ_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x11ABDEA0)
#define FBOHDKKBJKK_DCOKFMBLBHJ_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11ABDDD0)
#define FBOHDKKBJKK_DCOKFMBLBHJ_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x11ABDD80)
#define FBOHDKKBJKK_DCOKFMBLBHJ_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11ABDCC0)
#define FBOHDKKBJKK_DCOKFMBLBHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11ABDCA0)

inline static constexpr unsigned int FBOHDKKBJKK_DCOKFMBLBHJ_TypeDefinitionIndex = 73067;

class FBOHDKKBJKK_DCOKFMBLBHJ : public ::System::Object
{
public:
	::System::Int32 MDPILDGFNHN; // 0x10
	::System::Int32 FPDDAGHMOJB; // 0x14
	::System::Int32 CKOJAIAIAJD; // 0x18
	::System::Int32 HFDNIDBIDON; // 0x1C
	::System::Int32 IPJIDFEPLCK; // 0x20
	::System::Int32 HLHKAKJNAHG; // 0x24
	::System::Int32 BDEDDEGJFKL; // 0x28
	::System::ValueTuple_2<::System::Int32, ::System::Int32> IDBEJJEKGDI; // 0x2C

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBOHDKKBJKK_DCOKFMBLBHJ__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOHDKKBJKK_DCOKFMBLBHJ_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOHDKKBJKK_DCOKFMBLBHJ_MOVENEXT_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> System_Collections_Generic_IEnumerator__System_Int32x_System_Int32y___get_Current()
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOHDKKBJKK_DCOKFMBLBHJ_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR__SYSTEM_INT32X_SYSTEM_INT32Y___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOHDKKBJKK_DCOKFMBLBHJ_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOHDKKBJKK_DCOKFMBLBHJ_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* System_Collections_Generic_IEnumerable__System_Int32x_System_Int32y___GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOHDKKBJKK_DCOKFMBLBHJ_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE__SYSTEM_INT32X_SYSTEM_INT32Y___GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOHDKKBJKK_DCOKFMBLBHJ_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
