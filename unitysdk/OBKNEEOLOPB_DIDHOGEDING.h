#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class OBKNEEOLOPB;
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }

#define OBKNEEOLOPB_DIDHOGEDING_CCOJHCKLHDM_OFFSET UNITYSDK_OFFSET(0x1291D200)
#define OBKNEEOLOPB_DIDHOGEDING_LHFKAAAGPKP_OFFSET UNITYSDK_OFFSET(0x1291D2E0)
#define OBKNEEOLOPB_DIDHOGEDING__CTOR_OFFSET UNITYSDK_OFFSET(0x1291D1F0)

inline static constexpr unsigned int OBKNEEOLOPB_DIDHOGEDING_TypeDefinitionIndex = 83970;

class OBKNEEOLOPB_DIDHOGEDING : public ::System::Object
{
public:
	::OBKNEEOLOPB* KLHPEBKNIFB; // 0x10
	::System::Action_4<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>* EDNJGMKPFHG; // 0x18
	::System::Action* IFKOKLCPMNF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKNEEOLOPB_DIDHOGEDING__CTOR_OFFSET))(this);
	}

	::System::Void CCOJHCKLHDM(::MoleMole::HollowChessboard::HollowCell EJCBEJMGFAJ, ::MoleMole::HollowChessboard::HollowCell EBFCACIEKBC, ::MoleMole::HollowChessboard::HollowCell CBLGCIFLMKL, ::MoleMole::HollowChessboard::HollowCell MKBCMHIAMHF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + OBKNEEOLOPB_DIDHOGEDING_CCOJHCKLHDM_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC, CBLGCIFLMKL, MKBCMHIAMHF);
	}

	::System::Void LHFKAAAGPKP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKNEEOLOPB_DIDHOGEDING_LHFKAAAGPKP_OFFSET))(this);
	}
};
