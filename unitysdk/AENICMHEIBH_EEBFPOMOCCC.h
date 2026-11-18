#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/ValueType.h"

class AENICMHEIBH;
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define AENICMHEIBH_EEBFPOMOCCC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7274D0)
#define AENICMHEIBH_EEBFPOMOCCC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int AENICMHEIBH_EEBFPOMOCCC_TypeDefinitionIndex = 85671;

struct alignas(8) AENICMHEIBH_EEBFPOMOCCC
{
	::AENICMHEIBH* KLHPEBKNIFB; // 0x10
	::System::Func_1<::PipelineCamera::WorldBasicCameraData>* JEAMKOOJJJC; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x20
	::System::Object* IELMICFKAAI; // 0x30
	::System::Byte _padding0[0x8];
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AENICMHEIBH_EEBFPOMOCCC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + AENICMHEIBH_EEBFPOMOCCC_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
