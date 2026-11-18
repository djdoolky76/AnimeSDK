#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class ABIPNCNAAIA_JAHFGIBLELE;
class BHECBBCIMBF;
namespace MoleMole { class UIWindowController; }

#define ABIPNCNAAIA_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x1433A000)
#define ABIPNCNAAIA_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x14339FF0)
#define ABIPNCNAAIA__CTOR_OFFSET UNITYSDK_OFFSET(0x1433A0C0)

inline static constexpr unsigned int ABIPNCNAAIA_TypeDefinitionIndex = 75052;

class ABIPNCNAAIA : public ::DDHEGIHEKLH
{
public:
	::ABIPNCNAAIA_JAHFGIBLELE* OBGBFHGKILC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABIPNCNAAIA__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + ABIPNCNAAIA_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + ABIPNCNAAIA_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}
};
