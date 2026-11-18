#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDNFALFPENE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define BIMCCKLAEJO_CHCAIDDEJFL_OFFSET UNITYSDK_OFFSET(0x19F1B220)
#define BIMCCKLAEJO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19F1B360)
#define BIMCCKLAEJO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19F1B210)
#define BIMCCKLAEJO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19F1B200)
#define BIMCCKLAEJO_PPNGEPPIFOJ_OFFSET UNITYSDK_OFFSET(0x19F1B450)
#define BIMCCKLAEJO__CTOR_OFFSET UNITYSDK_OFFSET(0x19F1B1F0)

inline static constexpr unsigned int BIMCCKLAEJO_TypeDefinitionIndex = 11245;

class BIMCCKLAEJO : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::FDNFALFPENE HBDPAIKANDB; // 0x18
	::System::Int32 BPNKGFALDAO; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte CNIAANMNOCF; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 HINFPCHNDIP; // 0x30

	::System::Void _ctor(::FDNFALFPENE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FDNFALFPENE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BIMCCKLAEJO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMCCKLAEJO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BIMCCKLAEJO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 CHCAIDDEJFL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMCCKLAEJO_CHCAIDDEJFL_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMCCKLAEJO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPNGEPPIFOJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMCCKLAEJO_PPNGEPPIFOJ_OFFSET))(this);
	}
};
