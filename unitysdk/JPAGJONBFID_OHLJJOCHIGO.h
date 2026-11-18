#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPAGJONBFID_DBCBFHKKAFH.h"
#include "unitysdk/System/ValueType.h"

class LHLDPHDJLNL;
namespace MoleMole::HollowChessboard { class HollowEntity; }

#define JPAGJONBFID_OHLJJOCHIGO_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x754590)
#define JPAGJONBFID_OHLJJOCHIGO__CTOR_OFFSET UNITYSDK_OFFSET(0x754530)

inline static constexpr unsigned int JPAGJONBFID_OHLJJOCHIGO_TypeDefinitionIndex = 69779;

struct alignas(4) JPAGJONBFID_OHLJJOCHIGO
{
	::JPAGJONBFID_DBCBFHKKAFH LNLDPCPNKNM; // 0x10

	::System::Void _ctor(::LHLDPHDJLNL* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::LHLDPHDJLNL*))((::PBYTE)hIl2Cpp + JPAGJONBFID_OHLJJOCHIGO__CTOR_OFFSET))(this, GEEHGDABNJF);
	}

	::MoleMole::HollowChessboard::HollowEntity* PKOGNPKCHHE()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPAGJONBFID_OHLJJOCHIGO_PKOGNPKCHHE_OFFSET))(this);
	}
};
