#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class CCLNIIKILOL_KDBIECGAJON;
namespace MoleMole { class UIWindowController; }

#define CCLNIIKILOL_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x147853A0)
#define CCLNIIKILOL_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x14785390)
#define CCLNIIKILOL__CTOR_OFFSET UNITYSDK_OFFSET(0x14785460)

inline static constexpr unsigned int CCLNIIKILOL_TypeDefinitionIndex = 88188;

class CCLNIIKILOL : public ::DDHEGIHEKLH
{
public:
	::CCLNIIKILOL_KDBIECGAJON* OBGBFHGKILC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLNIIKILOL__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLNIIKILOL_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CCLNIIKILOL_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}
};
