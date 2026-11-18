#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/ConfigBlackboardParam.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class HNFJPOOHJPB;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define HNFJPOOHJPB_MPAHEIKIEFC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x748C50)
#define HNFJPOOHJPB_MPAHEIKIEFC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int HNFJPOOHJPB_MPAHEIKIEFC_TypeDefinitionIndex = 52693;

struct alignas(8) HNFJPOOHJPB_MPAHEIKIEFC
{
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* INAFPBGPAMP; // 0x10
	::System::Object* IELMICFKAAI; // 0x18
	::System::Byte _padding0[0x10];
	::Foundation::ViewObject::ViewObjectHandle AMNIHACKELI; // 0x30
	::System::String* INHDAAAMAAL; // 0x40
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x48
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x50
	::HNFJPOOHJPB* MABBDAIJLCF; // 0x60
	::System::Int32 MDPILDGFNHN; // 0x68

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFJPOOHJPB_MPAHEIKIEFC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + HNFJPOOHJPB_MPAHEIKIEFC_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
