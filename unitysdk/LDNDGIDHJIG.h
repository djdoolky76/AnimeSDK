#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class LDNDGIDHJIG_DLCOMFNALEH;
namespace MoleMole { class UIGeneralHoldInteractInfoChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define LDNDGIDHJIG_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x1635F7A0)
#define LDNDGIDHJIG_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x1635F790)
#define LDNDGIDHJIG_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x1635F940)
#define LDNDGIDHJIG_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x1635F860)
#define LDNDGIDHJIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1635F930)

inline static constexpr unsigned int LDNDGIDHJIG_TypeDefinitionIndex = 46779;

class LDNDGIDHJIG : public ::DDHEGIHEKLH
{
public:
	::MoleMole::UIGeneralHoldInteractInfoChildWindowController* CGBAFKEHOIG; // 0x28
	::LDNDGIDHJIG_DLCOMFNALEH* OBGBFHGKILC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNDGIDHJIG__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNDGIDHJIG_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* MFOGJMCEFOD)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + LDNDGIDHJIG_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, MFOGJMCEFOD);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNDGIDHJIG_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNDGIDHJIG_MBDFANLLCHK_OFFSET))(this);
	}
};
