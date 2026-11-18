#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class PPICOHJCLLK_ILHJDHHMENN;
namespace MoleMole { class UIRouletteCancelWidgetController; }
namespace MoleMole { class UIWindowController; }

#define PPICOHJCLLK_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x1B9FC110)
#define PPICOHJCLLK_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x1B9FC100)
#define PPICOHJCLLK_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x1B9FC300)
#define PPICOHJCLLK_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x1B9FC1D0)
#define PPICOHJCLLK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9FC2F0)

inline static constexpr unsigned int PPICOHJCLLK_TypeDefinitionIndex = 65151;

class PPICOHJCLLK : public ::DDHEGIHEKLH
{
public:
	::PPICOHJCLLK_ILHJDHHMENN* OBGBFHGKILC; // 0x28
	::MoleMole::UIRouletteCancelWidgetController* EIENNIMGJNJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPICOHJCLLK__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + PPICOHJCLLK_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + PPICOHJCLLK_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPICOHJCLLK_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPICOHJCLLK_MBDFANLLCHK_OFFSET))(this);
	}
};
