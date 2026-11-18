#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define KCNFLPBMCLA_ENIBMAFEPCA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x767EB0)
#define KCNFLPBMCLA_ENIBMAFEPCA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int KCNFLPBMCLA_ENIBMAFEPCA_TypeDefinitionIndex = 49499;

struct alignas(8) KCNFLPBMCLA_ENIBMAFEPCA
{
	::System::Action* PFDKJAHMNIF; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x18
	::System::Object* IELMICFKAAI; // 0x28
	::System::Byte _padding0[0x8];
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNFLPBMCLA_ENIBMAFEPCA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + KCNFLPBMCLA_ENIBMAFEPCA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
