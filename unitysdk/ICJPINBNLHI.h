#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

class JJICNKEJPNK;

#define ICJPINBNLHI_ILBLEAGMNIB_OFFSET UNITYSDK_OFFSET(0x1A3975F0)
#define ICJPINBNLHI_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x1A3970C0)
#define ICJPINBNLHI_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0x1A397880)
#define ICJPINBNLHI_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x1A397550)
#define ICJPINBNLHI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3970A0)

inline static constexpr unsigned int ICJPINBNLHI_TypeDefinitionIndex = 75013;

class ICJPINBNLHI
{
public:
	::MoleMole::HollowChessboard::RenderDataHandle OFPMGEAAALO; // 0x28

	::System::Void _ctor(::JJICNKEJPNK* FGLDMHFEJDI)
	{
		return ((::System::Void(*)(::PVOID, ::JJICNKEJPNK*))((::PBYTE)hIl2Cpp + ICJPINBNLHI__CTOR_OFFSET))(this, FGLDMHFEJDI);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJPINBNLHI_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJPINBNLHI_PGHAJOMNDDJ_OFFSET))(this);
	}

	::System::Void ILBLEAGMNIB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ICJPINBNLHI_ILBLEAGMNIB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void OKLLFEIJKHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJPINBNLHI_OKLLFEIJKHN_OFFSET))(this);
	}
};
