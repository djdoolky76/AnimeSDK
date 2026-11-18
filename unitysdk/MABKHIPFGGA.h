#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class MABKHIPFGGA_OMGIDBAELOF;
namespace MoleMole { class UIWindowController; }

#define MABKHIPFGGA_DEDCCPOPJIP_OFFSET UNITYSDK_OFFSET(0x14DD67B0)
#define MABKHIPFGGA_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x14DD6610)
#define MABKHIPFGGA_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x14DD6600)
#define MABKHIPFGGA_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x14DD6720)
#define MABKHIPFGGA_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x14DD66D0)
#define MABKHIPFGGA__CTOR_OFFSET UNITYSDK_OFFSET(0x14DD6710)

inline static constexpr unsigned int MABKHIPFGGA_TypeDefinitionIndex = 65714;

class MABKHIPFGGA : public ::DDHEGIHEKLH
{
public:
	::MABKHIPFGGA_OMGIDBAELOF* OBGBFHGKILC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABKHIPFGGA__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + MABKHIPFGGA_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + MABKHIPFGGA_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABKHIPFGGA_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABKHIPFGGA_MBDFANLLCHK_OFFSET))(this);
	}

	::System::Void DEDCCPOPJIP(::System::Boolean NHHNIOJDICO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MABKHIPFGGA_DEDCCPOPJIP_OFFSET))(this, NHHNIOJDICO);
	}
};
