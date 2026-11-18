#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

namespace MoleMole::HollowChessboard { class ParticleSection; }

#define NOAELBKNFLO_ILBLEAGMNIB_OFFSET UNITYSDK_OFFSET(0x11F8E1C0)
#define NOAELBKNFLO_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x11F8DCE0)
#define NOAELBKNFLO_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0x11F8E450)
#define NOAELBKNFLO_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x11F8E120)
#define NOAELBKNFLO__CTOR_OFFSET UNITYSDK_OFFSET(0x11F8DCC0)

inline static constexpr unsigned int NOAELBKNFLO_TypeDefinitionIndex = 79689;

class NOAELBKNFLO
{
public:
	::MoleMole::HollowChessboard::RenderDataHandle OFPMGEAAALO; // 0x28

	::System::Void _ctor(::MoleMole::HollowChessboard::ParticleSection* FGLDMHFEJDI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::ParticleSection*))((::PBYTE)hIl2Cpp + NOAELBKNFLO__CTOR_OFFSET))(this, FGLDMHFEJDI);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAELBKNFLO_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAELBKNFLO_PGHAJOMNDDJ_OFFSET))(this);
	}

	::System::Void ILBLEAGMNIB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NOAELBKNFLO_ILBLEAGMNIB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void OKLLFEIJKHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAELBKNFLO_OKLLFEIJKHN_OFFSET))(this);
	}
};
