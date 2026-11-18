#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FILGGMBPDJD.h"
#include "unitysdk/GIPCMLEONLI.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

class FBAMLABJMKF;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BJLEIDEFIIJ_COENKCBGJBG_FENPLGEJDLF_OFFSET UNITYSDK_OFFSET(0x10E08210)
#define BJLEIDEFIIJ_COENKCBGJBG_HLCFKPNOFNG_OFFSET UNITYSDK_OFFSET(0x10E084B0)
#define BJLEIDEFIIJ_COENKCBGJBG__CTOR_OFFSET UNITYSDK_OFFSET(0x10E08470)

inline static constexpr unsigned int BJLEIDEFIIJ_COENKCBGJBG_TypeDefinitionIndex = 90661;

class BJLEIDEFIIJ_COENKCBGJBG : public ::GIPCMLEONLI
{
public:
	::FBAMLABJMKF* NOGNMAIGBLD; // 0x40
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* EJJJNLKDOKH; // 0x48
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* GFBDJIANFPH; // 0x50
	::System::Boolean HGBLNCDJJAL; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJLEIDEFIIJ_COENKCBGJBG__CTOR_OFFSET))(this);
	}

	::System::Void FENPLGEJDLF(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BJLEIDEFIIJ_COENKCBGJBG_FENPLGEJDLF_OFFSET))(this, PBCAAADNEPK);
	}

	::Cysharp::Threading::Tasks::UniTask HLCFKPNOFNG(::FBAMLABJMKF* COBEJJHGMPO, ::MoleMole::HollowChessboard::HollowCell KCBLCHDEDAD, ::FILGGMBPDJD FGDPOAFBDID)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::FBAMLABJMKF*, ::MoleMole::HollowChessboard::HollowCell, ::FILGGMBPDJD))((::PBYTE)hIl2Cpp + BJLEIDEFIIJ_COENKCBGJBG_HLCFKPNOFNG_OFFSET))(this, COBEJJHGMPO, KCBLCHDEDAD, FGDPOAFBDID);
	}
};
