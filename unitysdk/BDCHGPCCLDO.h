#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GONGDKAFMKK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define BDCHGPCCLDO_ABGNNDCIMMM_OFFSET UNITYSDK_OFFSET(0x17756950)
#define BDCHGPCCLDO_CDOEMMPOFHE_OFFSET UNITYSDK_OFFSET(0x17756D30)
#define BDCHGPCCLDO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17757230)
#define BDCHGPCCLDO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17756D20)
#define BDCHGPCCLDO_GKABCLNGKBM_OFFSET UNITYSDK_OFFSET(0x17756BE0)
#define BDCHGPCCLDO_GLICGBNGKBI_OFFSET UNITYSDK_OFFSET(0x17756AA0)
#define BDCHGPCCLDO_KGIOMOFOKCI_OFFSET UNITYSDK_OFFSET(0x177570F0)
#define BDCHGPCCLDO_KONJGHIBMGD_OFFSET UNITYSDK_OFFSET(0x17756E70)
#define BDCHGPCCLDO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17756A90)
#define BDCHGPCCLDO_PFCOCMDMNIH_OFFSET UNITYSDK_OFFSET(0x17756FB0)
#define BDCHGPCCLDO__CTOR_OFFSET UNITYSDK_OFFSET(0x17756940)

inline static constexpr unsigned int BDCHGPCCLDO_TypeDefinitionIndex = 11862;

class BDCHGPCCLDO : public ::System::Object
{
public:
	::GONGDKAFMKK HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 HBMJFEHOIGF; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte CNIAANMNOCF; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 MNEJCCGJJIG; // 0x30
	::System::Int32 EHCMPEKFKEC; // 0x34
	::System::Int32 CDDBHHPEIFK; // 0x38
	::System::Int32 OBLCLKKOLFC; // 0x3C
	::System::Int32 OKFPPBJPMME; // 0x40
	::System::Int32 IANCLFHJOKJ; // 0x44

	::System::Void _ctor(::GONGDKAFMKK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GONGDKAFMKK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BDCHGPCCLDO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 ABGNNDCIMMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDCHGPCCLDO_ABGNNDCIMMM_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDCHGPCCLDO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 GLICGBNGKBI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDCHGPCCLDO_GLICGBNGKBI_OFFSET))(this);
	}

	::System::Int32 GKABCLNGKBM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDCHGPCCLDO_GKABCLNGKBM_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BDCHGPCCLDO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 CDOEMMPOFHE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDCHGPCCLDO_CDOEMMPOFHE_OFFSET))(this);
	}

	::System::Int32 KONJGHIBMGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDCHGPCCLDO_KONJGHIBMGD_OFFSET))(this);
	}

	::System::Int32 PFCOCMDMNIH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDCHGPCCLDO_PFCOCMDMNIH_OFFSET))(this);
	}

	::System::Int32 KGIOMOFOKCI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDCHGPCCLDO_KGIOMOFOKCI_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDCHGPCCLDO_COFGIJJOFLP_OFFSET))(this);
	}
};
