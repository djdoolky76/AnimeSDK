#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/FILGGMBPDJD.h"
#include "unitysdk/JMIGPHLOLAJ_IHOPGDCAGIB.h"
#include "unitysdk/System/ValueType.h"

class BFEFACBOBJM;
class DIELEFAILDG;
class FBAMLABJMKF;
class JFDFFEGKMKP;
class PEOIIIGPCBA;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define JFDFFEGKMKP_GIALHNHOEGC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7F77A0)
#define JFDFFEGKMKP_GIALHNHOEGC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int JFDFFEGKMKP_GIALHNHOEGC_TypeDefinitionIndex = 79803;

struct alignas(8) JFDFFEGKMKP_GIALHNHOEGC
{
	::System::Collections::Generic::List_1<::System::Object*>* NNLEPFBFMON; // 0x10
	::DIELEFAILDG* AGNGICBKLHJ; // 0x18
	::PEOIIIGPCBA* IPBJOEGBEPB; // 0x20
	::FBAMLABJMKF* COBEJJHGMPO; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>* KMBIIKIONIG; // 0x30
	::BFEFACBOBJM* NLKHAICJJAL; // 0x38
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x40
	::JFDFFEGKMKP* KLHPEBKNIFB; // 0x50
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x58
	::System::Int32 MDPILDGFNHN; // 0x68
	::FILGGMBPDJD BBDJGOHNGIL; // 0x6C
	::JMIGPHLOLAJ_IHOPGDCAGIB CBBMFEHKCIA; // 0x70

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDFFEGKMKP_GIALHNHOEGC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + JFDFFEGKMKP_GIALHNHOEGC_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
