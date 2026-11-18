#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class APNMGOHIMKO;
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define APNMGOHIMKO_MPALOBBGIGM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x12D10DF0)
#define APNMGOHIMKO_MPALOBBGIGM_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12D127B0)
#define APNMGOHIMKO_MPALOBBGIGM_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12D12810)
#define APNMGOHIMKO_MPALOBBGIGM_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x12D127C0)
#define APNMGOHIMKO_MPALOBBGIGM_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12D10DE0)
#define APNMGOHIMKO_MPALOBBGIGM__CTOR_OFFSET UNITYSDK_OFFSET(0x12D10DD0)

inline static constexpr unsigned int APNMGOHIMKO_MPALOBBGIGM_TypeDefinitionIndex = 71166;

class APNMGOHIMKO_MPALOBBGIGM : public ::System::Object
{
public:
	::System::Object* NDPGEODOGAI; // 0x10
	::System::Object* KFMLHDLHPGK; // 0x18
	::APNMGOHIMKO* KLHPEBKNIFB; // 0x20
	::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* NMHLBNBPOKO; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x30
	::System::Single IDBEJJEKGDI; // 0x34

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + APNMGOHIMKO_MPALOBBGIGM__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNMGOHIMKO_MPALOBBGIGM_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APNMGOHIMKO_MPALOBBGIGM_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + APNMGOHIMKO_MPALOBBGIGM_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNMGOHIMKO_MPALOBBGIGM_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + APNMGOHIMKO_MPALOBBGIGM_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
