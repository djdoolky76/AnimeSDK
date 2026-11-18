#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIWindowController; }

#define MMMCKLHIDAE_EMNNCLLKIDB_OFFSET UNITYSDK_OFFSET(0x282350)
#define MMMCKLHIDAE_MLNGAJMENHC_OFFSET UNITYSDK_OFFSET(0x358B00)

inline static constexpr unsigned int MMMCKLHIDAE_TypeDefinitionIndex = 75893;

struct alignas(8) MMMCKLHIDAE
{
	::MoleMole::UIWindowController* _GFECAMPLMPH_k__BackingField; // 0x10

	::System::Void MLNGAJMENHC(::MoleMole::UIWindowController* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + MMMCKLHIDAE_MLNGAJMENHC_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::UIWindowController* EMNNCLLKIDB()
	{
		return ((::MoleMole::UIWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMMCKLHIDAE_EMNNCLLKIDB_OFFSET))(this);
	}
};
