#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class CDHJPDNMCAJ;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CDHJPDNMCAJ_AGODPJALNLF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x73BBE0)
#define CDHJPDNMCAJ_AGODPJALNLF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x4B0120)

inline static constexpr unsigned int CDHJPDNMCAJ_AGODPJALNLF_TypeDefinitionIndex = 43305;

struct alignas(8) CDHJPDNMCAJ_AGODPJALNLF
{
	::System::Object* IELMICFKAAI; // 0x10
	::System::Byte _padding0[0x8];
	::CDHJPDNMCAJ* KLHPEBKNIFB; // 0x20
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDHJPDNMCAJ_AGODPJALNLF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CDHJPDNMCAJ_AGODPJALNLF_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
