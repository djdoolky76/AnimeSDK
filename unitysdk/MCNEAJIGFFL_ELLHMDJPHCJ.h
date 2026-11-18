#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/KFNMABCCOEB.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class MCNEAJIGFFL;
namespace MoleMole { class AreaCategoryInOutSubsystem; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MCNEAJIGFFL_ELLHMDJPHCJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x749FD0)
#define MCNEAJIGFFL_ELLHMDJPHCJ_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int MCNEAJIGFFL_ELLHMDJPHCJ_TypeDefinitionIndex = 78800;

struct alignas(8) MCNEAJIGFFL_ELLHMDJPHCJ
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::System::Object* IELMICFKAAI; // 0x20
	::System::Byte _padding0[0x20];
	::HOCDHMEPPEG ENNCGJPONAO; // 0x48
	::HOCDHMEPPEG AJHFDMLOGIF; // 0x78
	::MoleMole::AreaCategoryInOutSubsystem* HIIBPEFJLII; // 0xA8
	::MCNEAJIGFFL* KLHPEBKNIFB; // 0xB0
	::System::Int32 BBGFBDFAINB; // 0xB8
	::UnityEngine::Vector3 OHOGDOMNHNK; // 0xBC
	::KFNMABCCOEB KNFKIGCNPIP; // 0xC8
	::System::Int32 MDPILDGFNHN; // 0xCC
	::System::Int32 FGNCENMOJID; // 0xD0

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCNEAJIGFFL_ELLHMDJPHCJ_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MCNEAJIGFFL_ELLHMDJPHCJ_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
