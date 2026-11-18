#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

namespace MoleMole::HollowChessboard { class UVAnimSection; }

#define KKIFPEJDIKO_ILBLEAGMNIB_OFFSET UNITYSDK_OFFSET(0x1521CB20)
#define KKIFPEJDIKO_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x1521C5E0)
#define KKIFPEJDIKO_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0x1521CDB0)
#define KKIFPEJDIKO_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x1521CA80)
#define KKIFPEJDIKO__CTOR_OFFSET UNITYSDK_OFFSET(0x1521C5C0)

inline static constexpr unsigned int KKIFPEJDIKO_TypeDefinitionIndex = 39502;

class KKIFPEJDIKO
{
public:
	::MoleMole::HollowChessboard::RenderDataHandle OFPMGEAAALO; // 0x28

	::System::Void _ctor(::MoleMole::HollowChessboard::UVAnimSection* FGLDMHFEJDI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::UVAnimSection*))((::PBYTE)hIl2Cpp + KKIFPEJDIKO__CTOR_OFFSET))(this, FGLDMHFEJDI);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIFPEJDIKO_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIFPEJDIKO_PGHAJOMNDDJ_OFFSET))(this);
	}

	::System::Void ILBLEAGMNIB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KKIFPEJDIKO_ILBLEAGMNIB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void OKLLFEIJKHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIFPEJDIKO_OKLLFEIJKHN_OFFSET))(this);
	}
};
