#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class AGBFEJMILMI;
class FBAMLABJMKF;
class NAAFMIMIPCF;

#define AGBFEJMILMI_ELKBMGBLPIB_INGHNLBNMOJ_OFFSET UNITYSDK_OFFSET(0x181F1140)
#define AGBFEJMILMI_ELKBMGBLPIB_JLLHAGPANNP_OFFSET UNITYSDK_OFFSET(0x181F1040)
#define AGBFEJMILMI_ELKBMGBLPIB__CTOR_OFFSET UNITYSDK_OFFSET(0x181F1030)

inline static constexpr unsigned int AGBFEJMILMI_ELKBMGBLPIB_TypeDefinitionIndex = 73246;

class AGBFEJMILMI_ELKBMGBLPIB : public ::System::Object
{
public:
	::FBAMLABJMKF* AKCCBOJKOJL; // 0x10
	::NAAFMIMIPCF* FHHHKKGLDGG; // 0x18
	::AGBFEJMILMI* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBFEJMILMI_ELKBMGBLPIB__CTOR_OFFSET))(this);
	}

	::System::Void JLLHAGPANNP(::MoleMole::HollowChessboard::HollowCell BOEJJMLJEDP, ::MoleMole::HollowChessboard::HollowCell KLIKENGBONF, ::MoleMole::HollowChessboard::HollowCell MJODFDBNJIP, ::MoleMole::HollowChessboard::HollowCell HHCKEDILJPE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + AGBFEJMILMI_ELKBMGBLPIB_JLLHAGPANNP_OFFSET))(this, BOEJJMLJEDP, KLIKENGBONF, MJODFDBNJIP, HHCKEDILJPE);
	}

	::System::Void INGHNLBNMOJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBFEJMILMI_ELKBMGBLPIB_INGHNLBNMOJ_OFFSET))(this);
	}
};
