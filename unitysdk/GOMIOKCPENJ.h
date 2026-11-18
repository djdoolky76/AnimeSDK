#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKHELNKOPEB.h"

class KIBDNJAKKPG;
namespace MoleMole::HollowChessboard { class HollowEntity; }

#define GOMIOKCPENJ_AHAOPPKFKLE_OFFSET UNITYSDK_OFFSET(0x17ADD220)
#define GOMIOKCPENJ_GLILOFPMAAL_OFFSET UNITYSDK_OFFSET(0x17ADD200)
#define GOMIOKCPENJ_JGPFAMKGNGG_OFFSET UNITYSDK_OFFSET(0x17ADD1D0)
#define GOMIOKCPENJ_MCAEFJKLPLH_OFFSET UNITYSDK_OFFSET(0x17ADD210)
#define GOMIOKCPENJ_NPBOKFDKEEL_OFFSET UNITYSDK_OFFSET(0x17ADD1E0)
#define GOMIOKCPENJ_OAODOABBAKO_OFFSET UNITYSDK_OFFSET(0x17ADD1F0)
#define GOMIOKCPENJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17ADD140)

inline static constexpr unsigned int GOMIOKCPENJ_TypeDefinitionIndex = 72526;

class GOMIOKCPENJ : public ::AKHELNKOPEB
{
public:
	::KIBDNJAKKPG* _KNNPJDDBDEI_k__BackingField; // 0x18
	::MoleMole::HollowChessboard::HollowEntity* _DKNELDAGPCO_k__BackingField; // 0x20
	::System::Single _NKALEKCIFNH_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMIOKCPENJ__CTOR_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowEntity* JGPFAMKGNGG()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMIOKCPENJ_JGPFAMKGNGG_OFFSET))(this);
	}

	::System::Void NPBOKFDKEEL(::KIBDNJAKKPG* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::KIBDNJAKKPG*))((::PBYTE)hIl2Cpp + GOMIOKCPENJ_NPBOKFDKEEL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OAODOABBAKO(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GOMIOKCPENJ_OAODOABBAKO_OFFSET))(this, EGEGIMGMJHN);
	}

	::KIBDNJAKKPG* GLILOFPMAAL()
	{
		return ((::KIBDNJAKKPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMIOKCPENJ_GLILOFPMAAL_OFFSET))(this);
	}

	::System::Single MCAEFJKLPLH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMIOKCPENJ_MCAEFJKLPLH_OFFSET))(this);
	}

	::System::Void AHAOPPKFKLE(::MoleMole::HollowChessboard::HollowEntity* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + GOMIOKCPENJ_AHAOPPKFKLE_OFFSET))(this, EGEGIMGMJHN);
	}
};
