#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ALPAMOINNOJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define HFEBBDEIBNO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17BFC800)
#define HFEBBDEIBNO_DMPKFPNFMEA_OFFSET UNITYSDK_OFFSET(0x17BFCF40)
#define HFEBBDEIBNO_ELOFCLOLJEM_OFFSET UNITYSDK_OFFSET(0x17BFC8F0)
#define HFEBBDEIBNO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17BFD080)
#define HFEBBDEIBNO_LEBLJECFJCP_OFFSET UNITYSDK_OFFSET(0x17BFCA30)
#define HFEBBDEIBNO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17BFCF30)
#define HFEBBDEIBNO_NDOPLEPKPEG_OFFSET UNITYSDK_OFFSET(0x17BFC6C0)
#define HFEBBDEIBNO_NGLANKMBEBG_OFFSET UNITYSDK_OFFSET(0x17BFCCB0)
#define HFEBBDEIBNO_PJCPEGKECOK_OFFSET UNITYSDK_OFFSET(0x17BFCDF0)
#define HFEBBDEIBNO_PLMPAGMICCF_OFFSET UNITYSDK_OFFSET(0x17BFCB70)
#define HFEBBDEIBNO__CTOR_OFFSET UNITYSDK_OFFSET(0x17BFC6B0)

inline static constexpr unsigned int HFEBBDEIBNO_TypeDefinitionIndex = 14741;

class HFEBBDEIBNO : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::ALPAMOINNOJ HBDPAIKANDB; // 0x18
	::System::Int32 GFOGKOLBMBI; // 0x28
	::System::Int32 MIANPKMAODP; // 0x2C
	::System::Int32 LIGAENIPMED; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 FNJPDGEFFLE; // 0x38
	::System::Int32 NJMAIEIGKHM; // 0x3C
	::System::Int32 NKOJIIEIALO; // 0x40
	::System::Int32 LLJBFIIHJDI; // 0x44

	::System::Void _ctor(::ALPAMOINNOJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ALPAMOINNOJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HFEBBDEIBNO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 NDOPLEPKPEG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEBBDEIBNO_NDOPLEPKPEG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEBBDEIBNO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 ELOFCLOLJEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEBBDEIBNO_ELOFCLOLJEM_OFFSET))(this);
	}

	::System::Int32 LEBLJECFJCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEBBDEIBNO_LEBLJECFJCP_OFFSET))(this);
	}

	::System::Int32 PLMPAGMICCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEBBDEIBNO_PLMPAGMICCF_OFFSET))(this);
	}

	::System::Int32 NGLANKMBEBG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEBBDEIBNO_NGLANKMBEBG_OFFSET))(this);
	}

	::System::Int32 PJCPEGKECOK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEBBDEIBNO_PJCPEGKECOK_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEBBDEIBNO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 DMPKFPNFMEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEBBDEIBNO_DMPKFPNFMEA_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HFEBBDEIBNO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
