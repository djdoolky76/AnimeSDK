#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IMHLAGJKEPB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class APNMGOHIMKO;
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define APNMGOHIMKO_AJJOOBHIDNC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x13607A70)
#define APNMGOHIMKO_AJJOOBHIDNC_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13607D30)
#define APNMGOHIMKO_AJJOOBHIDNC_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13607D90)
#define APNMGOHIMKO_AJJOOBHIDNC_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x13607D40)
#define APNMGOHIMKO_AJJOOBHIDNC_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13607A60)
#define APNMGOHIMKO_AJJOOBHIDNC__CTOR_OFFSET UNITYSDK_OFFSET(0x13607530)

inline static constexpr unsigned int APNMGOHIMKO_AJJOOBHIDNC_TypeDefinitionIndex = 71168;

class APNMGOHIMKO_AJJOOBHIDNC : public ::System::Object
{
public:
	::APNMGOHIMKO* KLHPEBKNIFB; // 0x10
	::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* HLIPIKLGFBE; // 0x18
	::System::Single IGIGNABPMJM; // 0x20
	::System::Single GPKEPMGCKMI; // 0x24
	::IMHLAGJKEPB MGODOGMDPCH; // 0x28
	::System::Single NBHNCOGDHCF; // 0x2C
	::System::Single IDBEJJEKGDI; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x34

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + APNMGOHIMKO_AJJOOBHIDNC__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNMGOHIMKO_AJJOOBHIDNC_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APNMGOHIMKO_AJJOOBHIDNC_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + APNMGOHIMKO_AJJOOBHIDNC_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNMGOHIMKO_AJJOOBHIDNC_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + APNMGOHIMKO_AJJOOBHIDNC_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
