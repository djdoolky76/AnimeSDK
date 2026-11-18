#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EHEANJHPPCO;
class OOIJIDMLIAC_COKGMOGPHBA;
namespace MoleMole::Battle { class Entity; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define OOIJIDMLIAC_GJKKAJLHAKO_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x75B3C0)
#define OOIJIDMLIAC_GJKKAJLHAKO_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int OOIJIDMLIAC_GJKKAJLHAKO_TypeDefinitionIndex = 70886;

struct alignas(8) OOIJIDMLIAC_GJKKAJLHAKO
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::MoleMole::Battle::Entity*> ECODFICGLGM; // 0x20
	::System::Byte _padding0[0x10];
	::EHEANJHPPCO* BGGACCHFLJM; // 0x38
	::OOIJIDMLIAC_COKGMOGPHBA* PGDOJBDJBOL; // 0x40
	::UnityEngine::Vector3 OHOGDOMNHNK; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x54
	::System::UInt32 LACJPGJJLCH; // 0x58
	::System::Single PGFOFMIGAPE; // 0x5C
	::System::UInt32 CCOIAGNGLNK; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_GJKKAJLHAKO_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_GJKKAJLHAKO_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
