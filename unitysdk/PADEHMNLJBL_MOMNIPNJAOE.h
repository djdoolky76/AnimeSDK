#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define PADEHMNLJBL_MOMNIPNJAOE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6EB6B0)
#define PADEHMNLJBL_MOMNIPNJAOE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int PADEHMNLJBL_MOMNIPNJAOE_TypeDefinitionIndex = 86763;

struct alignas(8) PADEHMNLJBL_MOMNIPNJAOE
{
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* HLCCLLKOBFF; // 0x10
	::System::Action_1<::System::Boolean>* MIFLJHCELPN; // 0x18
	::System::Object* IELMICFKAAI; // 0x20
	::System::Byte _padding0[0x10];
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* CFHNICGGPAF; // 0x38
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x40
	::UnityEngine::Vector3 GOEADLFHLEJ; // 0x50
	::System::Int32 BPKGCFEFAHC; // 0x5C
	::System::UInt32 KGAHKGBMEAF; // 0x60
	::System::Single FAOPCOHPEBL; // 0x64
	::System::Int32 FODJHLJPGOE; // 0x68
	::System::Boolean MGFOIEFAMNC; // 0x6C
	::System::Boolean CGLLCEONNAC; // 0x6D
	::System::Byte _padding1[0x2];
	::System::Int32 MDPILDGFNHN; // 0x70
	::UnityEngine::Vector3 OIKMICDBAPP; // 0x74
	::System::Single AMDGNAMFBGF; // 0x80

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PADEHMNLJBL_MOMNIPNJAOE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + PADEHMNLJBL_MOMNIPNJAOE_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
