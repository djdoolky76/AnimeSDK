#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ABJMPKENACD;
class GIGFDLPMNND;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define ABJMPKENACD_BIFKGODAILP_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6E0590)
#define ABJMPKENACD_BIFKGODAILP_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int ABJMPKENACD_BIFKGODAILP_TypeDefinitionIndex = 88648;

struct alignas(8) ABJMPKENACD_BIFKGODAILP
{
	::GIGFDLPMNND* NANCPBGCGME; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::System::Collections::Generic::List_1<::System::Single>* EGFKPKGOECJ; // 0x38
	::ABJMPKENACD* KLHPEBKNIFB; // 0x40
	::System::Single GIEMGLICGNC; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x4C
	::System::Single CGDBMEGCKAK; // 0x50
	::System::Boolean MDMIENIJDJA; // 0x54
	::System::Byte _padding0[0x3];
	::System::Int32 NPAKMAGBOCH; // 0x58
	::UnityEngine::Vector3 MPDEJEFPNDK; // 0x5C
	::UnityEngine::Vector3 JAGNGABCEGD; // 0x68
	::UnityEngine::Vector3 AJCPKDDFDOG; // 0x74

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_BIFKGODAILP_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ABJMPKENACD_BIFKGODAILP_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
