#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/LJGLDDODIOD.h"
#include "unitysdk/System/ValueType.h"

class FPKMCDJIKEB;
class GHBIDFBNIKN;
namespace System { class Object; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define GHBIDFBNIKN_LLCGFGCIBGM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x776680)
#define GHBIDFBNIKN_LLCGFGCIBGM_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int GHBIDFBNIKN_LLCGFGCIBGM_TypeDefinitionIndex = 47304;

struct alignas(8) GHBIDFBNIKN_LLCGFGCIBGM
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::LJGLDDODIOD> ECODFICGLGM; // 0x10
	::System::Byte _padding0[0x10];
	::System::Object* KIFJPEHBMCP; // 0x28
	::System::Byte _padding1[0x10];
	::System::Object* IELMICFKAAI; // 0x40
	::System::Byte _padding2[0x10];
	::System::String* INHDAAAMAAL; // 0x58
	::GHBIDFBNIKN* KLHPEBKNIFB; // 0x60
	::FPKMCDJIKEB* KCDGPMPEPBC; // 0x68
	::System::Int32 BJOBOMDKOGD; // 0x70
	::System::Int32 MDPILDGFNHN; // 0x74

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBIDFBNIKN_LLCGFGCIBGM_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GHBIDFBNIKN_LLCGFGCIBGM_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
