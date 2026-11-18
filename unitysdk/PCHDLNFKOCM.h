#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class PCHDLNFKOCM_CGNICHLONMH;
namespace MoleMole { class UIWindowController; }

#define PCHDLNFKOCM_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x13A87510)
#define PCHDLNFKOCM_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x13A87500)
#define PCHDLNFKOCM__CTOR_OFFSET UNITYSDK_OFFSET(0x13A875D0)

inline static constexpr unsigned int PCHDLNFKOCM_TypeDefinitionIndex = 47110;

class PCHDLNFKOCM : public ::DDHEGIHEKLH
{
public:
	::PCHDLNFKOCM_CGNICHLONMH* OBGBFHGKILC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCHDLNFKOCM__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + PCHDLNFKOCM_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* MFOGJMCEFOD)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + PCHDLNFKOCM_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, MFOGJMCEFOD);
	}
};
