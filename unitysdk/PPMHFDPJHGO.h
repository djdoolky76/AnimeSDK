#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class PPMHFDPJHGO_FKELPHHBLCO;
namespace MoleMole { class UIGeneralHoldInteractInfoChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define PPMHFDPJHGO_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x1D9D9680)
#define PPMHFDPJHGO_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x1D9D9930)
#define PPMHFDPJHGO_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x1D9D9670)
#define PPMHFDPJHGO_LJAPJFDPIKF_OFFSET UNITYSDK_OFFSET(0x1D9D98E0)
#define PPMHFDPJHGO_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x1D9D9850)
#define PPMHFDPJHGO_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x1D9D9740)
#define PPMHFDPJHGO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D9840)

inline static constexpr unsigned int PPMHFDPJHGO_TypeDefinitionIndex = 47777;

class PPMHFDPJHGO : public ::DDHEGIHEKLH
{
public:
	::PPMHFDPJHGO_FKELPHHBLCO* OBGBFHGKILC; // 0x28
	::MoleMole::UIGeneralHoldInteractInfoChildWindowController* CGBAFKEHOIG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMHFDPJHGO__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMHFDPJHGO_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* MFOGJMCEFOD)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + PPMHFDPJHGO_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, MFOGJMCEFOD);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMHFDPJHGO_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMHFDPJHGO_MBDFANLLCHK_OFFSET))(this);
	}

	::System::Void LJAPJFDPIKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMHFDPJHGO_LJAPJFDPIKF_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMHFDPJHGO_HFBPONNNLBA_OFFSET))(this);
	}
};
