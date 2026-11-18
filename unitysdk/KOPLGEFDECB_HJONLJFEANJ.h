#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

class KOPLGEFDECB;
class KOPLGEFDECB_IJFKCNEABBL;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define KOPLGEFDECB_HJONLJFEANJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7E8EA0)
#define KOPLGEFDECB_HJONLJFEANJ_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x4B8950)

inline static constexpr unsigned int KOPLGEFDECB_HJONLJFEANJ_TypeDefinitionIndex = 80623;

struct alignas(8) KOPLGEFDECB_HJONLJFEANJ
{
	::System::Runtime::CompilerServices::TaskAwaiter IELMICFKAAI; // 0x10
	::KOPLGEFDECB_IJFKCNEABBL* PGDOJBDJBOL; // 0x18
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Boolean> ECODFICGLGM; // 0x20
	::System::Byte _padding0[0x10];
	::KOPLGEFDECB* KLHPEBKNIFB; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40
	::System::UInt32 MMLCIDGBLEF; // 0x44
	::System::UInt32 FLBPNCMEANJ; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOPLGEFDECB_HJONLJFEANJ_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + KOPLGEFDECB_HJONLJFEANJ_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
