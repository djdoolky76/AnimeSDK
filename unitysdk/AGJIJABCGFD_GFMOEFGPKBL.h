#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class PhotoFrame;
namespace MoleMole { class PhotoFrameRender; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define AGJIJABCGFD_GFMOEFGPKBL_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x727CF0)
#define AGJIJABCGFD_GFMOEFGPKBL_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int AGJIJABCGFD_GFMOEFGPKBL_TypeDefinitionIndex = 59814;

struct alignas(8) AGJIJABCGFD_GFMOEFGPKBL
{
	::MoleMole::PhotoFrameRender* PIBBHJJOLCP; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::MoleMole::PhotoFrameRender*> ECODFICGLGM; // 0x18
	::System::Byte _padding0[0x10];
	::PhotoFrame* IJODCLJOCKA; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJIJABCGFD_GFMOEFGPKBL_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + AGJIJABCGFD_GFMOEFGPKBL_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
