#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class FBOHDKKBJKK;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define FBOHDKKBJKK_DEHJDEIKFHK_JPCPBBAMDGJ_OFFSET UNITYSDK_OFFSET(0x140DFA30)
#define FBOHDKKBJKK_DEHJDEIKFHK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x140DFB10)
#define FBOHDKKBJKK_DEHJDEIKFHK_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE__SYSTEM_INT32X_SYSTEM_INT32Y___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x140E0000)
#define FBOHDKKBJKK_DEHJDEIKFHK_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR__SYSTEM_INT32X_SYSTEM_INT32Y___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x140DFF50)
#define FBOHDKKBJKK_DEHJDEIKFHK_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x140E0080)
#define FBOHDKKBJKK_DEHJDEIKFHK_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x140DFFB0)
#define FBOHDKKBJKK_DEHJDEIKFHK_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x140DFF60)
#define FBOHDKKBJKK_DEHJDEIKFHK_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x140DF940)
#define FBOHDKKBJKK_DEHJDEIKFHK__CTOR_OFFSET UNITYSDK_OFFSET(0x140DF920)

inline static constexpr unsigned int FBOHDKKBJKK_DEHJDEIKFHK_TypeDefinitionIndex = 73069;

class FBOHDKKBJKK_DEHJDEIKFHK : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* CNCDBBAMLPL; // 0x10
	::FBOHDKKBJKK* KLHPEBKNIFB; // 0x18
	::System::Int32 BDEDDEGJFKL; // 0x20
	::System::Int32 FPDDAGHMOJB; // 0x24
	::System::Int32 HLHKAKJNAHG; // 0x28
	::System::Int32 HFDNIDBIDON; // 0x2C
	::System::Int32 MDPILDGFNHN; // 0x30
	::System::ValueTuple_2<::System::Int32, ::System::Int32> IDBEJJEKGDI; // 0x34

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBOHDKKBJKK_DEHJDEIKFHK__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOHDKKBJKK_DEHJDEIKFHK_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOHDKKBJKK_DEHJDEIKFHK_MOVENEXT_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> System_Collections_Generic_IEnumerator__System_Int32x_System_Int32y___get_Current()
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOHDKKBJKK_DEHJDEIKFHK_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR__SYSTEM_INT32X_SYSTEM_INT32Y___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOHDKKBJKK_DEHJDEIKFHK_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOHDKKBJKK_DEHJDEIKFHK_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* System_Collections_Generic_IEnumerable__System_Int32x_System_Int32y___GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOHDKKBJKK_DEHJDEIKFHK_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE__SYSTEM_INT32X_SYSTEM_INT32Y___GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOHDKKBJKK_DEHJDEIKFHK_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::System::Void JPCPBBAMDGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOHDKKBJKK_DEHJDEIKFHK_JPCPBBAMDGJ_OFFSET))(this);
	}
};
