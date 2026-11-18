#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

class BBPCINJAMAF;
namespace MoleMole::HollowChessboard { class NpcTextureBehaviorSection; }

#define PJCKKCNNJDG_ILBLEAGMNIB_OFFSET UNITYSDK_OFFSET(0x194A9090)
#define PJCKKCNNJDG_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x194A9460)
#define PJCKKCNNJDG_MLIJDMEHILP_OFFSET UNITYSDK_OFFSET(0x194A95A0)
#define PJCKKCNNJDG_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0x194A9320)
#define PJCKKCNNJDG_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x194A93C0)
#define PJCKKCNNJDG__CTOR_OFFSET UNITYSDK_OFFSET(0x194A9070)

inline static constexpr unsigned int PJCKKCNNJDG_TypeDefinitionIndex = 53873;

class PJCKKCNNJDG
{
public:
	::MoleMole::HollowChessboard::NpcTextureBehaviorSection* PPEAHFCJELD; // 0x28
	::MoleMole::HollowChessboard::RenderDataHandle OFPMGEAAALO; // 0x30

	::System::Void _ctor(::MoleMole::HollowChessboard::NpcTextureBehaviorSection* FGLDMHFEJDI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::NpcTextureBehaviorSection*))((::PBYTE)hIl2Cpp + PJCKKCNNJDG__CTOR_OFFSET))(this, FGLDMHFEJDI);
	}

	::System::Void ILBLEAGMNIB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PJCKKCNNJDG_ILBLEAGMNIB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJCKKCNNJDG_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJCKKCNNJDG_PGHAJOMNDDJ_OFFSET))(this);
	}

	::System::Void OKLLFEIJKHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJCKKCNNJDG_OKLLFEIJKHN_OFFSET))(this);
	}

	::System::Void MLIJDMEHILP(::BBPCINJAMAF* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::BBPCINJAMAF*))((::PBYTE)hIl2Cpp + PJCKKCNNJDG_MLIJDMEHILP_OFFSET))(this, HMMMOCJAEOA);
	}
};
