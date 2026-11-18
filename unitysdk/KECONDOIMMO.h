#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GKFDDHILHAI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define KECONDOIMMO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A509220)
#define KECONDOIMMO_DMPKFPNFMEA_OFFSET UNITYSDK_OFFSET(0x1A508FA0)
#define KECONDOIMMO_FCLNKNNNLKM_OFFSET UNITYSDK_OFFSET(0x1A5090E0)
#define KECONDOIMMO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A509310)
#define KECONDOIMMO_IHJIMKFFNEG_OFFSET UNITYSDK_OFFSET(0x1A508E60)
#define KECONDOIMMO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A509320)
#define KECONDOIMMO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A508E50)

inline static constexpr unsigned int KECONDOIMMO_TypeDefinitionIndex = 14874;

class KECONDOIMMO : public ::System::Object
{
public:
	::GKFDDHILHAI HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 FGBJICMNHMF; // 0x28
	::System::Byte CNIAANMNOCF; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x2D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 HBHNJOPBCNN; // 0x30
	::System::Int32 FNJPDGEFFLE; // 0x34

	::System::Void _ctor(::GKFDDHILHAI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GKFDDHILHAI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KECONDOIMMO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 IHJIMKFFNEG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KECONDOIMMO_IHJIMKFFNEG_OFFSET))(this);
	}

	::System::Int32 DMPKFPNFMEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KECONDOIMMO_DMPKFPNFMEA_OFFSET))(this);
	}

	::System::Int32 FCLNKNNNLKM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KECONDOIMMO_FCLNKNNNLKM_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KECONDOIMMO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KECONDOIMMO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KECONDOIMMO_LJANCIBECFG_OFFSET))(this);
	}
};
