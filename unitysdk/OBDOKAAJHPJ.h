#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class OBDOKAAJHPJ_PFPCFOCKCNP;
namespace MoleMole { class UIInLevelEtherEyesInfoContainerChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define OBDOKAAJHPJ_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x1B7712B0)
#define OBDOKAAJHPJ_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x1B7712A0)
#define OBDOKAAJHPJ_PGGKOAAMBEH_OFFSET UNITYSDK_OFFSET(0x1B771380)
#define OBDOKAAJHPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1B771370)

inline static constexpr unsigned int OBDOKAAJHPJ_TypeDefinitionIndex = 67993;

class OBDOKAAJHPJ : public ::DDHEGIHEKLH
{
public:
	::OBDOKAAJHPJ_PFPCFOCKCNP* OBGBFHGKILC; // 0x28
	::MoleMole::UIInLevelEtherEyesInfoContainerChildWindowController* DAJOHGPOMAB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDOKAAJHPJ__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDOKAAJHPJ_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* MFOGJMCEFOD)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + OBDOKAAJHPJ_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, MFOGJMCEFOD);
	}

	::System::Void PGGKOAAMBEH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDOKAAJHPJ_PGGKOAAMBEH_OFFSET))(this);
	}
};
