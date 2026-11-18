#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LMDFHIBGBGD;
namespace MoleMole { class UILoginMessageBoxPopWindowController; }

#define LMDFHIBGBGD_FDACKBHACAM_KBIDELKDBEP_OFFSET UNITYSDK_OFFSET(0x1637B520)
#define LMDFHIBGBGD_FDACKBHACAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1637B510)

inline static constexpr unsigned int LMDFHIBGBGD_FDACKBHACAM_TypeDefinitionIndex = 79907;

class LMDFHIBGBGD_FDACKBHACAM : public ::System::Object
{
public:
	::LMDFHIBGBGD* KLHPEBKNIFB; // 0x10
	::MoleMole::UILoginMessageBoxPopWindowController* EHIFHJDLKGD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDFHIBGBGD_FDACKBHACAM__CTOR_OFFSET))(this);
	}

	::System::Void KBIDELKDBEP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDFHIBGBGD_FDACKBHACAM_KBIDELKDBEP_OFFSET))(this);
	}
};
