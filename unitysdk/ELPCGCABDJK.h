#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLMEPLBOODC.h"

class KLFOBDFJFJE;
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::HollowChessboard { class HollowEntity; }

#define ELPCGCABDJK_HOIJCBFEGLO_OFFSET UNITYSDK_OFFSET(0x10F44910)
#define ELPCGCABDJK_MFMILKJPPPO_OFFSET UNITYSDK_OFFSET(0x10F44920)
#define ELPCGCABDJK__CTOR_OFFSET UNITYSDK_OFFSET(0x10F448F0)

inline static constexpr unsigned int ELPCGCABDJK_TypeDefinitionIndex = 46283;

class ELPCGCABDJK : public ::LLMEPLBOODC
{
public:
	::MoleMole::HollowChessboard::HollowEntity* _PGLEEJHMIKH_k__BackingField; // 0x28

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowEntity* KECKGDFIALJ, ::MoleMole::UIHollowChessboard3DModelController* IHHHIDMPIFD, ::KLFOBDFJFJE* PAHNPNJPABO, ::MoleMole::UIHollowMainPageController* FIEJJJIKOPC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*, ::MoleMole::UIHollowChessboard3DModelController*, ::KLFOBDFJFJE*, ::MoleMole::UIHollowMainPageController*))((::PBYTE)hIl2Cpp + ELPCGCABDJK__CTOR_OFFSET))(this, KECKGDFIALJ, IHHHIDMPIFD, PAHNPNJPABO, FIEJJJIKOPC);
	}

	::System::Void HOIJCBFEGLO(::MoleMole::HollowChessboard::HollowEntity* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + ELPCGCABDJK_HOIJCBFEGLO_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::HollowChessboard::HollowEntity* MFMILKJPPPO()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPCGCABDJK_MFMILKJPPPO_OFFSET))(this);
	}
};
