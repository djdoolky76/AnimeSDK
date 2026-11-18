#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/PADEHMNLJBL_FGPLKEONMLF.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define PADEHMNLJBL_JKOEMGFFBEE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7AF9C0)
#define PADEHMNLJBL_JKOEMGFFBEE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int PADEHMNLJBL_JKOEMGFFBEE_TypeDefinitionIndex = 86761;

struct alignas(8) PADEHMNLJBL_JKOEMGFFBEE
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Object*> ECODFICGLGM; // 0x10
	::System::Byte _padding0[0x10];
	::System::Object* IELMICFKAAI; // 0x28
	::System::Byte _padding1[0x10];
	::PADEHMNLJBL_FGPLKEONMLF LJOAMAOEEHA; // 0x40
	::UnityEngine::Vector3 NJLNJCLGLNO; // 0x48
	::UnityEngine::Vector3 OLKHDAAGGAA; // 0x54
	::System::Int32 MDPILDGFNHN; // 0x60
	::System::Int32 LIMNECOMDOM; // 0x64

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PADEHMNLJBL_JKOEMGFFBEE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + PADEHMNLJBL_JKOEMGFFBEE_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
