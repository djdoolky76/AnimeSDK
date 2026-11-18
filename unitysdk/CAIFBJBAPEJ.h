#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class CAIFBJBAPEJ_DAGAICADDON;
namespace MoleMole { class UIWindowController; }

#define CAIFBJBAPEJ_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x14C6CF70)
#define CAIFBJBAPEJ_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x14C6CF60)
#define CAIFBJBAPEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14C6D030)

inline static constexpr unsigned int CAIFBJBAPEJ_TypeDefinitionIndex = 63435;

class CAIFBJBAPEJ : public ::DDHEGIHEKLH
{
public:
	::CAIFBJBAPEJ_DAGAICADDON* OBGBFHGKILC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIFBJBAPEJ__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIFBJBAPEJ_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CAIFBJBAPEJ_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}
};
