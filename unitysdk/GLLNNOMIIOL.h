#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DADOLLLLKKM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define GLLNNOMIIOL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x152D0480)
#define GLLNNOMIIOL_DKNEFMDCANB_OFFSET UNITYSDK_OFFSET(0x152D0580)
#define GLLNNOMIIOL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x152D06C0)
#define GLLNNOMIIOL_HEEIDGJBAAK_OFFSET UNITYSDK_OFFSET(0x152D0370)
#define GLLNNOMIIOL_KDBNGIJCHFB_OFFSET UNITYSDK_OFFSET(0x152D0120)
#define GLLNNOMIIOL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x152D0570)
#define GLLNNOMIIOL_OBEEHBEMKDE_OFFSET UNITYSDK_OFFSET(0x152D0230)
#define GLLNNOMIIOL_OLMKKENLKPI_OFFSET UNITYSDK_OFFSET(0x152D06D0)
#define GLLNNOMIIOL__CTOR_OFFSET UNITYSDK_OFFSET(0x152D0110)

inline static constexpr unsigned int GLLNNOMIIOL_TypeDefinitionIndex = 11065;

class GLLNNOMIIOL : public ::System::Object
{
public:
	::DADOLLLLKKM HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* NHOACBHLAKN; // 0x28
	::System::String* LFLFBLENLBD; // 0x30
	::System::String* GFDBGAFLEIH; // 0x38
	::System::Int32 KGIEFAPHENH; // 0x40
	::System::Byte GCHCDJCFCEG; // 0x44
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x45
	::System::Byte CNIAANMNOCF; // 0x46
	::System::Byte ACIOBDEBDNK; // 0x47
	::System::Int32 GAAEEJAGKMG; // 0x48

	::System::Void _ctor(::DADOLLLLKKM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DADOLLLLKKM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GLLNNOMIIOL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* KDBNGIJCHFB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLNNOMIIOL_KDBNGIJCHFB_OFFSET))(this);
	}

	::System::Int32 OBEEHBEMKDE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLNNOMIIOL_OBEEHBEMKDE_OFFSET))(this);
	}

	::System::String* HEEIDGJBAAK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLNNOMIIOL_HEEIDGJBAAK_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLNNOMIIOL_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLNNOMIIOL_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 DKNEFMDCANB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLNNOMIIOL_DKNEFMDCANB_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GLLNNOMIIOL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* OLMKKENLKPI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLNNOMIIOL_OLMKKENLKPI_OFFSET))(this);
	}
};
