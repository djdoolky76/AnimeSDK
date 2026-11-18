#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIIJBJLJAKH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define HKGFKEPDEFA_CMMKFJAOKFI_OFFSET UNITYSDK_OFFSET(0x1BADDE50)
#define HKGFKEPDEFA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BADDD50)
#define HKGFKEPDEFA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BADDE40)
#define HKGFKEPDEFA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BADDD40)
#define HKGFKEPDEFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BADDD30)

inline static constexpr unsigned int HKGFKEPDEFA_TypeDefinitionIndex = 13440;

class HKGFKEPDEFA : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::FIIJBJLJAKH HBDPAIKANDB; // 0x18
	::System::Int32 JMHALFPKEJE; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2C
	::System::Byte CNIAANMNOCF; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E

	::System::Void _ctor(::FIIJBJLJAKH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FIIJBJLJAKH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HKGFKEPDEFA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKGFKEPDEFA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKGFKEPDEFA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HKGFKEPDEFA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 CMMKFJAOKFI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKGFKEPDEFA_CMMKFJAOKFI_OFFSET))(this);
	}
};
