#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAOGLMKGMGE.h"
#include "unitysdk/LJIBNLBCGFG.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class CKHBPMFPFPM;
class OAEFGCLEHHO;
class OBKNEEOLOPB;
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OOBAHEDLHOI_HLMLIBCOBAO_DKHALJGNMBB_OFFSET UNITYSDK_OFFSET(0x12955230)
#define OOBAHEDLHOI_HLMLIBCOBAO_FJLNBAKAPLI_OFFSET UNITYSDK_OFFSET(0x12954DA0)
#define OOBAHEDLHOI_HLMLIBCOBAO__CTOR_OFFSET UNITYSDK_OFFSET(0x12954D90)

inline static constexpr unsigned int OOBAHEDLHOI_HLMLIBCOBAO_TypeDefinitionIndex = 75514;

class OOBAHEDLHOI_HLMLIBCOBAO : public ::System::Object
{
public:
	::System::Action_4<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>* KMFHHMNEMGJ; // 0x10
	::OBKNEEOLOPB* LHPFMGBDFPN; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* CJBJONJDOLI; // 0x20
	::System::Action* LJPLPBFPPHH; // 0x28
	::CKHBPMFPFPM* HEJIBNEHLIG; // 0x30
	::EAOGLMKGMGE LKIJLMIKJJI; // 0x38
	::LJIBNLBCGFG JMNHOLJKEDO; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_HLMLIBCOBAO__CTOR_OFFSET))(this);
	}

	::System::Void FJLNBAKAPLI(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_HLMLIBCOBAO_FJLNBAKAPLI_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void DKHALJGNMBB(::OAEFGCLEHHO* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_HLMLIBCOBAO_DKHALJGNMBB_OFFSET))(this, BLLNHDIDKPA);
	}
};
