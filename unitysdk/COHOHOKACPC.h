#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class COHOHOKACPC_GNHOCBEGLNH;
namespace MoleMole { class UIWindowController; }

#define COHOHOKACPC_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x1A1C44D0)
#define COHOHOKACPC_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x1A1C44C0)
#define COHOHOKACPC_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x1A1C45F0)
#define COHOHOKACPC_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x1A1C4590)
#define COHOHOKACPC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1C45E0)

inline static constexpr unsigned int COHOHOKACPC_TypeDefinitionIndex = 39397;

class COHOHOKACPC : public ::DDHEGIHEKLH
{
public:
	::COHOHOKACPC_GNHOCBEGLNH* OBGBFHGKILC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COHOHOKACPC__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + COHOHOKACPC_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + COHOHOKACPC_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COHOHOKACPC_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COHOHOKACPC_MBDFANLLCHK_OFFSET))(this);
	}
};
