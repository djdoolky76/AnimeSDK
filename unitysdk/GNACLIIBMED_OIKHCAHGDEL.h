#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ADFDLGAPMHJ;
class BAHELGNCOPI;
class EDBDJENIDEO;
class GNACLIIBMED;
class GNACLIIBMED_JBOJMCHKFHD;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
template <typename T> class DBMAHDDGMHM_1;

#define GNACLIIBMED_OIKHCAHGDEL_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B0E00)
#define GNACLIIBMED_OIKHCAHGDEL_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int GNACLIIBMED_OIKHCAHGDEL_TypeDefinitionIndex = 40195;

struct alignas(8) GNACLIIBMED_OIKHCAHGDEL
{
	::System::Object* FMLHNIOPKPA; // 0x10
	::System::Byte _padding0[0x10];
	::EDBDJENIDEO* GGKFLIANOMJ; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x30
	::DBMAHDDGMHM_1<::UnityEngine::Vector3>* GINILOLHCKG; // 0x40
	::ADFDLGAPMHJ* FPHHDKEHNEE; // 0x48
	::GNACLIIBMED* KLHPEBKNIFB; // 0x50
	::BAHELGNCOPI* NGKKFLDEJJA; // 0x58
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x60
	::GNACLIIBMED_JBOJMCHKFHD* PGDOJBDJBOL; // 0x70
	::System::Int32 MDPILDGFNHN; // 0x78

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNACLIIBMED_OIKHCAHGDEL_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GNACLIIBMED_OIKHCAHGDEL_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
