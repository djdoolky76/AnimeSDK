#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJHMFJBCLIG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define JAHBMMBAKEP_BADGBPHNIKM_OFFSET UNITYSDK_OFFSET(0x1B62D810)
#define JAHBMMBAKEP_BFDIJECKBFJ_OFFSET UNITYSDK_OFFSET(0x1B62D6D0)
#define JAHBMMBAKEP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B62D340)
#define JAHBMMBAKEP_EOAEPFKDIHA_OFFSET UNITYSDK_OFFSET(0x1B62D590)
#define JAHBMMBAKEP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B62D430)
#define JAHBMMBAKEP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B62D440)
#define JAHBMMBAKEP_OOGNDAHIDJO_OFFSET UNITYSDK_OFFSET(0x1B62D450)
#define JAHBMMBAKEP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B62D330)

inline static constexpr unsigned int JAHBMMBAKEP_TypeDefinitionIndex = 12007;

class JAHBMMBAKEP : public ::System::Object
{
public:
	::LJHMFJBCLIG HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 LCLOIGEHCAE; // 0x28
	::System::Int32 BEKEIHOBPGA; // 0x2C
	::System::Int32 HCPCLHLNKKL; // 0x30
	::System::Int32 GHODJJAGGIO; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 EOINLKMBIDD; // 0x3C
	::System::Int32 CHPJDNPPNCM; // 0x40

	::System::Void _ctor(::LJHMFJBCLIG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LJHMFJBCLIG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JAHBMMBAKEP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAHBMMBAKEP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JAHBMMBAKEP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAHBMMBAKEP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 OOGNDAHIDJO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAHBMMBAKEP_OOGNDAHIDJO_OFFSET))(this);
	}

	::System::Int32 EOAEPFKDIHA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAHBMMBAKEP_EOAEPFKDIHA_OFFSET))(this);
	}

	::System::Int32 BFDIJECKBFJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAHBMMBAKEP_BFDIJECKBFJ_OFFSET))(this);
	}

	::System::Int32 BADGBPHNIKM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAHBMMBAKEP_BADGBPHNIKM_OFFSET))(this);
	}
};
