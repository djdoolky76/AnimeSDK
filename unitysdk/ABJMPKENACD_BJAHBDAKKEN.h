#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ABJMPKENACD;
class GEIHCPAOKKK;
class MonoRootMotion;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define ABJMPKENACD_BJAHBDAKKEN_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x707B10)
#define ABJMPKENACD_BJAHBDAKKEN_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int ABJMPKENACD_BJAHBDAKKEN_TypeDefinitionIndex = 88630;

struct alignas(8) ABJMPKENACD_BJAHBDAKKEN
{
	::System::Object* GHANCJDIDBC; // 0x10
	::System::Byte _padding0[0x10];
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x28
	::ABJMPKENACD* KLHPEBKNIFB; // 0x38
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x40
	::GEIHCPAOKKK* KDNGNKOAKCM; // 0x50
	::MonoRootMotion* AJPMKADJDNO; // 0x58
	::UnityEngine::Vector3 ECCACPIBLBI; // 0x60
	::System::Boolean NPPMJEIPMFC; // 0x6C
	::System::Byte _padding1[0x3];
	::System::Int32 MDPILDGFNHN; // 0x70
	::System::Int32 BMOEDDOFMPH; // 0x74
	::System::Single OCGHGPOEGIP; // 0x78
	::System::Single FFHIDGOAAOG; // 0x7C
	::System::Single AOHOHJCIBDD; // 0x80

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_BJAHBDAKKEN_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ABJMPKENACD_BJAHBDAKKEN_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
