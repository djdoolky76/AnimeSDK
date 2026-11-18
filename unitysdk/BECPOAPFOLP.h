#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMDJIKDAEOI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define BECPOAPFOLP_ABHIMDBNKGP_OFFSET UNITYSDK_OFFSET(0x1B98EF10)
#define BECPOAPFOLP_AKOGFDAHOPN_OFFSET UNITYSDK_OFFSET(0x1B98F050)
#define BECPOAPFOLP_CMHPKFKLCGH_OFFSET UNITYSDK_OFFSET(0x1B98F510)
#define BECPOAPFOLP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B98F2E0)
#define BECPOAPFOLP_EOIOPMDDKID_OFFSET UNITYSDK_OFFSET(0x1B98F1A0)
#define BECPOAPFOLP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B98F190)
#define BECPOAPFOLP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B98EDF0)
#define BECPOAPFOLP_LOEFMIEHDLD_OFFSET UNITYSDK_OFFSET(0x1B98EE00)
#define BECPOAPFOLP_PABDENBKKLA_OFFSET UNITYSDK_OFFSET(0x1B98F3D0)
#define BECPOAPFOLP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B98EDE0)

inline static constexpr unsigned int BECPOAPFOLP_TypeDefinitionIndex = 11560;

class BECPOAPFOLP : public ::System::Object
{
public:
	::System::String* DDOHMMLKHPN; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::CMDJIKDAEOI HBDPAIKANDB; // 0x20
	::System::Int32 CJGMACOANMD; // 0x30
	::System::Int32 ANFBPLDLFBC; // 0x34
	::System::Int32 AOPOGCNBAHH; // 0x38
	::System::Int32 NBONABCODEE; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 GJGCIEDHMNJ; // 0x44

	::System::Void _ctor(::CMDJIKDAEOI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CMDJIKDAEOI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BECPOAPFOLP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BECPOAPFOLP_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* LOEFMIEHDLD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BECPOAPFOLP_LOEFMIEHDLD_OFFSET))(this);
	}

	::System::Int32 ABHIMDBNKGP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BECPOAPFOLP_ABHIMDBNKGP_OFFSET))(this);
	}

	::System::Int32 AKOGFDAHOPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BECPOAPFOLP_AKOGFDAHOPN_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BECPOAPFOLP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 EOIOPMDDKID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BECPOAPFOLP_EOIOPMDDKID_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BECPOAPFOLP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PABDENBKKLA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BECPOAPFOLP_PABDENBKKLA_OFFSET))(this);
	}

	::System::Int32 CMHPKFKLCGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BECPOAPFOLP_CMHPKFKLCGH_OFFSET))(this);
	}
};
