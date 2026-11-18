#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class MBOOAHLHDEC_AKBBIEHFGLH;
namespace MoleMole { class UIWindowController; }

#define MBOOAHLHDEC_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x15E1C4A0)
#define MBOOAHLHDEC_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x15E1C490)
#define MBOOAHLHDEC__CTOR_OFFSET UNITYSDK_OFFSET(0x15E1C560)

inline static constexpr unsigned int MBOOAHLHDEC_TypeDefinitionIndex = 79178;

class MBOOAHLHDEC : public ::DDHEGIHEKLH
{
public:
	::MBOOAHLHDEC_AKBBIEHFGLH* OBGBFHGKILC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOOAHLHDEC__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOOAHLHDEC_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + MBOOAHLHDEC_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}
};
