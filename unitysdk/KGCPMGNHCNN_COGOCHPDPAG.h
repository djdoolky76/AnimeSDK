#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class KGCPMGNHCNN_HPCIOCNKBML;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define KGCPMGNHCNN_COGOCHPDPAG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x767FE0)
#define KGCPMGNHCNN_COGOCHPDPAG_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int KGCPMGNHCNN_COGOCHPDPAG_TypeDefinitionIndex = 72611;

struct alignas(8) KGCPMGNHCNN_COGOCHPDPAG
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Object*> ECODFICGLGM; // 0x10
	::System::Byte _padding0[0x10];
	::System::Object* IELMICFKAAI; // 0x28
	::System::Byte _padding1[0x18];
	::System::Object* KIFJPEHBMCP; // 0x48
	::System::Byte _padding2[0x18];
	::KGCPMGNHCNN_HPCIOCNKBML* DLGGKKLHINL; // 0x68
	::System::Threading::CancellationToken CBJFKEAGLGD; // 0x70
	::System::Int32 MDPILDGFNHN; // 0x78
	::System::Int32 EIGKENIGHBG; // 0x7C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCPMGNHCNN_COGOCHPDPAG_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + KGCPMGNHCNN_COGOCHPDPAG_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
