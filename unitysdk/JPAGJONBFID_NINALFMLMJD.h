#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPAGJONBFID_CMMOABFPDEI.h"
#include "unitysdk/JPAGJONBFID_NCDAPAFDIOL.h"
#include "unitysdk/System/ValueType.h"

class LHLDPHDJLNL;
namespace MoleMole::HollowChessboard { class HollowEntity; }

#define JPAGJONBFID_NINALFMLMJD_JLIMOLHLFAK_OFFSET UNITYSDK_OFFSET(0x754470)
#define JPAGJONBFID_NINALFMLMJD_JNCEIFEPNGO_OFFSET UNITYSDK_OFFSET(0x754420)
#define JPAGJONBFID_NINALFMLMJD_PFBNMOCIGFK_OFFSET UNITYSDK_OFFSET(0x7543D0)
#define JPAGJONBFID_NINALFMLMJD__CTOR_OFFSET UNITYSDK_OFFSET(0x754390)

inline static constexpr unsigned int JPAGJONBFID_NINALFMLMJD_TypeDefinitionIndex = 69776;

struct alignas(4) JPAGJONBFID_NINALFMLMJD
{
	::JPAGJONBFID_NCDAPAFDIOL FBBJJDMEEDG; // 0x10
	::System::Byte _padding0[0x4];
	::JPAGJONBFID_CMMOABFPDEI KHALPPJIKDH; // 0x18

	::System::Void _ctor(::LHLDPHDJLNL* GEEHGDABNJF, ::MoleMole::HollowChessboard::HollowEntity* NCKMIGOHAGG)
	{
		return ((::System::Void(*)(::PVOID, ::LHLDPHDJLNL*, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + JPAGJONBFID_NINALFMLMJD__CTOR_OFFSET))(this, GEEHGDABNJF, NCKMIGOHAGG);
	}

	::System::Void PFBNMOCIGFK(::JPAGJONBFID_NCDAPAFDIOL DNFAEHNDGKF)
	{
		return ((::System::Void(*)(::PVOID, ::JPAGJONBFID_NCDAPAFDIOL))((::PBYTE)hIl2Cpp + JPAGJONBFID_NINALFMLMJD_PFBNMOCIGFK_OFFSET))(this, DNFAEHNDGKF);
	}

	::MoleMole::HollowChessboard::HollowEntity* JNCEIFEPNGO()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPAGJONBFID_NINALFMLMJD_JNCEIFEPNGO_OFFSET))(this);
	}

	::System::Void JLIMOLHLFAK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPAGJONBFID_NINALFMLMJD_JLIMOLHLFAK_OFFSET))(this);
	}
};
