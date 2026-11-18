#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/FILGGMBPDJD.h"
#include "unitysdk/JMIGPHLOLAJ_IHOPGDCAGIB.h"
#include "unitysdk/PEOIIIGPCBA_CLMCOCIENLH.h"
#include "unitysdk/System/ValueType.h"

class BFEFACBOBJM;
class DIELEFAILDG;
class FBAMLABJMKF;
class JFDFFEGKMKP;
class PEOIIIGPCBA;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define JFDFFEGKMKP_NNECPIKKPLJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x74D280)
#define JFDFFEGKMKP_NNECPIKKPLJ_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int JFDFFEGKMKP_NNECPIKKPLJ_TypeDefinitionIndex = 79804;

struct alignas(8) JFDFFEGKMKP_NNECPIKKPLJ
{
	::DIELEFAILDG* AGNGICBKLHJ; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>* KMBIIKIONIG; // 0x18
	::PEOIIIGPCBA* IPBJOEGBEPB; // 0x20
	::JFDFFEGKMKP* KLHPEBKNIFB; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x30
	::PEOIIIGPCBA_CLMCOCIENLH GFLLHIJBHCM; // 0x40
	::BFEFACBOBJM* NLKHAICJJAL; // 0x70
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x78
	::FBAMLABJMKF* COBEJJHGMPO; // 0x88
	::JMIGPHLOLAJ_IHOPGDCAGIB IMEIOJMBMBL; // 0x90
	::System::Int32 MDPILDGFNHN; // 0x94
	::FILGGMBPDJD BBDJGOHNGIL; // 0x98
	::JMIGPHLOLAJ_IHOPGDCAGIB CBBMFEHKCIA; // 0x9C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDFFEGKMKP_NNECPIKKPLJ_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + JFDFFEGKMKP_NNECPIKKPLJ_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
