#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class NAIJGHBNPLC_AGEFHPMNGJA;
namespace MoleMole { class UIWindowController; }

#define NAIJGHBNPLC_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x13B4E3D0)
#define NAIJGHBNPLC_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x13B4E3C0)
#define NAIJGHBNPLC__CTOR_OFFSET UNITYSDK_OFFSET(0x13B4E490)

inline static constexpr unsigned int NAIJGHBNPLC_TypeDefinitionIndex = 73601;

class NAIJGHBNPLC : public ::DDHEGIHEKLH
{
public:
	::NAIJGHBNPLC_AGEFHPMNGJA* OBGBFHGKILC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIJGHBNPLC__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIJGHBNPLC_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + NAIJGHBNPLC_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}
};
