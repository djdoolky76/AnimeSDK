#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class AGBFEJMILMI;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }

#define AGBFEJMILMI_CNFMPNFNOCG_AAGABJJBOKN_OFFSET UNITYSDK_OFFSET(0x11B93150)
#define AGBFEJMILMI_CNFMPNFNOCG_IIABAKBHOPM_OFFSET UNITYSDK_OFFSET(0x11B93090)
#define AGBFEJMILMI_CNFMPNFNOCG_PLNPNNIHBIH_OFFSET UNITYSDK_OFFSET(0x11B93250)
#define AGBFEJMILMI_CNFMPNFNOCG__CTOR_OFFSET UNITYSDK_OFFSET(0x11B93080)

inline static constexpr unsigned int AGBFEJMILMI_CNFMPNFNOCG_TypeDefinitionIndex = 73247;

class AGBFEJMILMI_CNFMPNFNOCG : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* KFKLBNDJHFF; // 0x10
	::AGBFEJMILMI* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBFEJMILMI_CNFMPNFNOCG__CTOR_OFFSET))(this);
	}

	::System::Void IIABAKBHOPM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBFEJMILMI_CNFMPNFNOCG_IIABAKBHOPM_OFFSET))(this);
	}

	::System::Void AAGABJJBOKN(::MoleMole::HollowChessboard::HollowCell BOEJJMLJEDP, ::MoleMole::HollowChessboard::HollowCell KLIKENGBONF, ::MoleMole::HollowChessboard::HollowCell MJODFDBNJIP, ::MoleMole::HollowChessboard::HollowCell HHCKEDILJPE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + AGBFEJMILMI_CNFMPNFNOCG_AAGABJJBOKN_OFFSET))(this, BOEJJMLJEDP, KLIKENGBONF, MJODFDBNJIP, HHCKEDILJPE);
	}

	::System::Void PLNPNNIHBIH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBFEJMILMI_CNFMPNFNOCG_PLNPNNIHBIH_OFFSET))(this);
	}
};
