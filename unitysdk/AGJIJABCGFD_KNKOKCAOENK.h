#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class AGJIJABCGFD_GMJIHGDBBFH;
class FCHOMFKACMB;
class JMHIOADBIPH;
namespace System { template <typename T> class Action_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define AGJIJABCGFD_KNKOKCAOENK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x75B280)
#define AGJIJABCGFD_KNKOKCAOENK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int AGJIJABCGFD_KNKOKCAOENK_TypeDefinitionIndex = 59813;

struct alignas(8) AGJIJABCGFD_KNKOKCAOENK
{
	::AGJIJABCGFD_GMJIHGDBBFH* PGDOJBDJBOL; // 0x10
	::FCHOMFKACMB* HNOPAJLDCFB; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::JMHIOADBIPH*> ECODFICGLGM; // 0x30
	::System::Byte _padding0[0x10];
	::System::Action_1<::JMHIOADBIPH*>* PFDKJAHMNIF; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJIJABCGFD_KNKOKCAOENK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + AGJIJABCGFD_KNKOKCAOENK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
