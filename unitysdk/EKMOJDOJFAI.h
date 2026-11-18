#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class EKMOJDOJFAI_FILJOADLLAG;
namespace MoleMole { class UIWindowController; }

#define EKMOJDOJFAI_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x1354F350)
#define EKMOJDOJFAI_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x1354F340)
#define EKMOJDOJFAI__CTOR_OFFSET UNITYSDK_OFFSET(0x1354F410)

inline static constexpr unsigned int EKMOJDOJFAI_TypeDefinitionIndex = 71287;

class EKMOJDOJFAI : public ::DDHEGIHEKLH
{
public:
	::EKMOJDOJFAI_FILJOADLLAG* OBGBFHGKILC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKMOJDOJFAI__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + EKMOJDOJFAI_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + EKMOJDOJFAI_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}
};
