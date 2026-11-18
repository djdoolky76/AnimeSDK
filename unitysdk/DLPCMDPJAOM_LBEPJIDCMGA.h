#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DLPCMDPJAOM_LBEPJIDCMGA_APDMFHDPELD_OFFSET UNITYSDK_OFFSET(0x1A1F83D0)
#define DLPCMDPJAOM_LBEPJIDCMGA_LBCBPEJEHNB_OFFSET UNITYSDK_OFFSET(0x1A1F8470)
#define DLPCMDPJAOM_LBEPJIDCMGA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1F81B0)

inline static constexpr unsigned int DLPCMDPJAOM_LBEPJIDCMGA_TypeDefinitionIndex = 89040;

class DLPCMDPJAOM_LBEPJIDCMGA : public ::System::Object
{
public:
	::System::Single PKEOFALMDHD; // 0x10
	::System::Single NNDKAPGDCJB; // 0x14
	::System::Single PDAMDBHMGHM; // 0x18
	::System::Single MDKIFPECHEE; // 0x1C
	::System::Single FLDDGBMFABB; // 0x20
	::System::Single AGLJFMGPHMA; // 0x24
	::System::Single IKKJLHAOAFF; // 0x28

	::System::Void _ctor(::System::Single DHLHCIOMFLJ, ::System::Single HIPGACBCDMK, ::System::Single FCNPOKNKMOD, ::System::Single NBFLBCNEGCM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DLPCMDPJAOM_LBEPJIDCMGA__CTOR_OFFSET))(this, DHLHCIOMFLJ, HIPGACBCDMK, FCNPOKNKMOD, NBFLBCNEGCM);
	}

	static ::System::Single APDMFHDPELD(::System::Single DHLHCIOMFLJ, ::System::Single JEMOEFBOHAO, ::System::Single FNIOPKPHDEH)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DLPCMDPJAOM_LBEPJIDCMGA_APDMFHDPELD_OFFSET))(DHLHCIOMFLJ, JEMOEFBOHAO, FNIOPKPHDEH);
	}

	::System::Single LBCBPEJEHNB(::System::Single FNIOPKPHDEH)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DLPCMDPJAOM_LBEPJIDCMGA_LBCBPEJEHNB_OFFSET))(this, FNIOPKPHDEH);
	}
};
