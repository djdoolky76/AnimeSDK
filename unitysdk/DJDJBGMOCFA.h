#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JEOPNELGEIC.h"
#include "unitysdk/KJCAGEJFMBH.h"

class LNMACLJACAA;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DJDJBGMOCFA_AFBCJDKHEGC_OFFSET UNITYSDK_OFFSET(0x7FBE460)
#define DJDJBGMOCFA_DBDALNLCMFH_OFFSET UNITYSDK_OFFSET(0x7FBE850)
#define DJDJBGMOCFA_EAHAHGEDJND_OFFSET UNITYSDK_OFFSET(0x7FBE770)
#define DJDJBGMOCFA_GMPMHEKAHEF_OFFSET UNITYSDK_OFFSET(0x7FBE550)
#define DJDJBGMOCFA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x7FBE4B0)
#define DJDJBGMOCFA__CTOR_OFFSET UNITYSDK_OFFSET(0x7FBE3C0)

inline static constexpr unsigned int DJDJBGMOCFA_TypeDefinitionIndex = 73899;

class DJDJBGMOCFA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::LNMACLJACAA*>* GMCMINDAPIM; // 0x10
	::MoleMole::HollowChessboard::HollowChessboardUID BONICGBNDAA; // 0x18

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowChessboardUID BONICGBNDAA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + DJDJBGMOCFA__CTOR_OFFSET))(this, BONICGBNDAA);
	}

	::System::Void AFBCJDKHEGC(::MoleMole::HollowChessboard::HollowChessboardUID BONICGBNDAA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + DJDJBGMOCFA_AFBCJDKHEGC_OFFSET))(this, BONICGBNDAA);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDJBGMOCFA_PHOADBJGFBE_OFFSET))(this);
	}

	::LNMACLJACAA* GMPMHEKAHEF(::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM)
	{
		return ((::LNMACLJACAA*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + DJDJBGMOCFA_GMPMHEKAHEF_OFFSET))(this, EKPEBNCLJPM);
	}

	::JEOPNELGEIC EAHAHGEDJND(::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM, ::JEOPNELGEIC& MDCDHHIMHJG)
	{
		return ((::JEOPNELGEIC(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::JEOPNELGEIC&))((::PBYTE)hIl2Cpp + DJDJBGMOCFA_EAHAHGEDJND_OFFSET))(this, EKPEBNCLJPM, MDCDHHIMHJG);
	}

	::KJCAGEJFMBH DBDALNLCMFH(::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM)
	{
		return ((::KJCAGEJFMBH(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + DJDJBGMOCFA_DBDALNLCMFH_OFFSET))(this, EKPEBNCLJPM);
	}
};
