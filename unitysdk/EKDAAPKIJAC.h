#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class EKDAAPKIJAC_CEOFBJJOPCI;
namespace MoleMole { class UIWindowController; }

#define EKDAAPKIJAC_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x16155380)
#define EKDAAPKIJAC_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x16155370)
#define EKDAAPKIJAC__CTOR_OFFSET UNITYSDK_OFFSET(0x16155440)

inline static constexpr unsigned int EKDAAPKIJAC_TypeDefinitionIndex = 63838;

class EKDAAPKIJAC : public ::DDHEGIHEKLH
{
public:
	::EKDAAPKIJAC_CEOFBJJOPCI* OBGBFHGKILC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKDAAPKIJAC__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + EKDAAPKIJAC_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + EKDAAPKIJAC_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}
};
