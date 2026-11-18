#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class HMDJIJEPLFA_IHPOLMPELOB;
namespace MoleMole { class UIWindowController; }

#define HMDJIJEPLFA_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x1011F5A0)
#define HMDJIJEPLFA_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x1011F590)
#define HMDJIJEPLFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1011F660)

inline static constexpr unsigned int HMDJIJEPLFA_TypeDefinitionIndex = 58366;

class HMDJIJEPLFA : public ::DDHEGIHEKLH
{
public:
	::HMDJIJEPLFA_IHPOLMPELOB* OBGBFHGKILC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMDJIJEPLFA__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + HMDJIJEPLFA_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + HMDJIJEPLFA_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}
};
