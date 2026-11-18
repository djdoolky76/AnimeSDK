#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFOJOOPBGKM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define HGLCIPDAAFJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B4DD720)
#define HGLCIPDAAFJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B4DD960)
#define HGLCIPDAAFJ_HDOLIPONCMC_OFFSET UNITYSDK_OFFSET(0x1B4DD810)
#define HGLCIPDAAFJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B4DD950)
#define HGLCIPDAAFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4DD710)

inline static constexpr unsigned int HGLCIPDAAFJ_TypeDefinitionIndex = 15091;

class HGLCIPDAAFJ : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::OFOJOOPBGKM HBDPAIKANDB; // 0x18
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x28
	::System::Byte CNIAANMNOCF; // 0x29
	::System::Byte ACIOBDEBDNK; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 PILPILHBFNE; // 0x2C

	::System::Void _ctor(::OFOJOOPBGKM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OFOJOOPBGKM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HGLCIPDAAFJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLCIPDAAFJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 HDOLIPONCMC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLCIPDAAFJ_HDOLIPONCMC_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLCIPDAAFJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HGLCIPDAAFJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
