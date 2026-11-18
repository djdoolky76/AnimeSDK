#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KEODMFCHOAE.h"

namespace MoleMole { class Note; }

#define NBIEPLFACIA_CMCDIALAMMD_OFFSET UNITYSDK_OFFSET(0xE568630)
#define NBIEPLFACIA_EAKMDAEPICH_OFFSET UNITYSDK_OFFSET(0xE568510)
#define NBIEPLFACIA_FKDAEAJFHNN_OFFSET UNITYSDK_OFFSET(0xE568580)
#define NBIEPLFACIA_FMFLJIDBBEL_OFFSET UNITYSDK_OFFSET(0xE568660)
#define NBIEPLFACIA_HDKJDGEMEBH_OFFSET UNITYSDK_OFFSET(0xE568650)
#define NBIEPLFACIA_KOMAIGPJIFA_OFFSET UNITYSDK_OFFSET(0xE568620)
#define NBIEPLFACIA_OHMLDJCJCDO_OFFSET UNITYSDK_OFFSET(0xE568570)
#define NBIEPLFACIA__CTOR_OFFSET UNITYSDK_OFFSET(0xE5684A0)

inline static constexpr unsigned int NBIEPLFACIA_TypeDefinitionIndex = 50070;

class NBIEPLFACIA : public ::KEODMFCHOAE
{
public:
	::MoleMole::Note* _HNCFEOHGNIF_k__BackingField; // 0x38
	::System::Double _BDDBLFDDIBM_k__BackingField; // 0x40

	::System::Void _ctor(::MoleMole::Note* FCHKNNJEDIF, ::System::Double FKDEEMJPNFE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Note*, ::System::Double))((::PBYTE)hIl2Cpp + NBIEPLFACIA__CTOR_OFFSET))(this, FCHKNNJEDIF, FKDEEMJPNFE);
	}

	::System::Double EAKMDAEPICH()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIEPLFACIA_EAKMDAEPICH_OFFSET))(this);
	}

	::System::Double OHMLDJCJCDO()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIEPLFACIA_OHMLDJCJCDO_OFFSET))(this);
	}

	::System::Double FKDAEAJFHNN()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIEPLFACIA_FKDAEAJFHNN_OFFSET))(this);
	}

	::System::Void KOMAIGPJIFA(::System::Double EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + NBIEPLFACIA_KOMAIGPJIFA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Double CMCDIALAMMD()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIEPLFACIA_CMCDIALAMMD_OFFSET))(this);
	}

	::System::Void HDKJDGEMEBH(::MoleMole::Note* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Note*))((::PBYTE)hIl2Cpp + NBIEPLFACIA_HDKJDGEMEBH_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::Note* FMFLJIDBBEL()
	{
		return ((::MoleMole::Note*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIEPLFACIA_FMFLJIDBBEL_OFFSET))(this);
	}
};
