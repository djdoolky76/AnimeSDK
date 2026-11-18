#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class AGBFEJMILMI_HDBKANOLBCE;

#define AGBFEJMILMI_NPOBHFOFPHA_HJFFMHKPDJL_OFFSET UNITYSDK_OFFSET(0x14350930)
#define AGBFEJMILMI_NPOBHFOFPHA__CTOR_OFFSET UNITYSDK_OFFSET(0x14350920)

inline static constexpr unsigned int AGBFEJMILMI_NPOBHFOFPHA_TypeDefinitionIndex = 73242;

class AGBFEJMILMI_NPOBHFOFPHA : public ::System::Object
{
public:
	::AGBFEJMILMI_HDBKANOLBCE* FGBNBFHOKAA; // 0x10
	::MoleMole::HollowChessboard::HollowCell OMBPPHCDADP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBFEJMILMI_NPOBHFOFPHA__CTOR_OFFSET))(this);
	}

	::System::Void HJFFMHKPDJL(::MoleMole::HollowChessboard::HollowCell BOEJJMLJEDP, ::MoleMole::HollowChessboard::HollowCell KLIKENGBONF, ::MoleMole::HollowChessboard::HollowCell MJODFDBNJIP, ::MoleMole::HollowChessboard::HollowCell HHCKEDILJPE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + AGBFEJMILMI_NPOBHFOFPHA_HJFFMHKPDJL_OFFSET))(this, BOEJJMLJEDP, KLIKENGBONF, MJODFDBNJIP, HHCKEDILJPE);
	}
};
