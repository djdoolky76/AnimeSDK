#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class ABJMPKENACD;
class ABJMPKENACD_NAFAEPACGHK;
class ABNKJLHDDHJ;
class ALAFHBOENMO;
class ALIEALDFGKE;
class FANBKJPNEDB;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define ABJMPKENACD_PIFPKCGPBIH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x75B1C0)
#define ABJMPKENACD_PIFPKCGPBIH_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int ABJMPKENACD_PIFPKCGPBIH_TypeDefinitionIndex = 88612;

struct alignas(8) ABJMPKENACD_PIFPKCGPBIH
{
	::ALAFHBOENMO* PJAPJACNDAC; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter KIFJPEHBMCP; // 0x18
	::ABJMPKENACD* KLHPEBKNIFB; // 0x28
	::ABJMPKENACD_NAFAEPACGHK* PGDOJBDJBOL; // 0x30
	::ALIEALDFGKE* NLEIJBHMCDN; // 0x38
	::FANBKJPNEDB* NGKEJJMGAMI; // 0x40
	::System::Threading::CancellationTokenSource* FAKONLLHJEP; // 0x48
	::MoleMole::Battle::Entity* KMMMPHMEGKI; // 0x50
	::ABNKJLHDDHJ* LHLDJLHECBB; // 0x58
	::System::Object* IELMICFKAAI; // 0x60
	::System::Byte _padding0[0x10];
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x78
	::Cysharp::Threading::Tasks::UniTask DPNDDMOHBCF; // 0x88
	::System::Object* JBKEHEIINMM; // 0x98
	::System::Byte _padding1[0x8];
	::Cysharp::Threading::Tasks::UniTask PJDCDICLCCG; // 0xA8
	::System::Int32 NFEKPCHLBPC; // 0xB8
	::System::Int32 NPAKMAGBOCH; // 0xBC
	::System::Int32 MDPILDGFNHN; // 0xC0

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_PIFPKCGPBIH_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ABJMPKENACD_PIFPKCGPBIH_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
