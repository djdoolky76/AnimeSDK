#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAMFBPHIEGI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define ECMPLCHEJAP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19AE1DA0)
#define ECMPLCHEJAP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19AE1E90)
#define ECMPLCHEJAP_IFLMOJMMMJJ_OFFSET UNITYSDK_OFFSET(0x19AE1EB0)
#define ECMPLCHEJAP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19AE1EA0)
#define ECMPLCHEJAP__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE1D90)

inline static constexpr unsigned int ECMPLCHEJAP_TypeDefinitionIndex = 11282;

class ECMPLCHEJAP : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::OAMFBPHIEGI HBDPAIKANDB; // 0x18
	::System::Byte ACIOBDEBDNK; // 0x28
	::System::Byte CNIAANMNOCF; // 0x29
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 GOCJOFDDCEA; // 0x2C

	::System::Void _ctor(::OAMFBPHIEGI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OAMFBPHIEGI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ECMPLCHEJAP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECMPLCHEJAP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ECMPLCHEJAP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECMPLCHEJAP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 IFLMOJMMMJJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECMPLCHEJAP_IFLMOJMMMJJ_OFFSET))(this);
	}
};
