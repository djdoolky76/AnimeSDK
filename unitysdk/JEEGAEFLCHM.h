#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNDHDPIGMEN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define JEEGAEFLCHM_CDDAGFPKIDK_OFFSET UNITYSDK_OFFSET(0x1B4F47B0)
#define JEEGAEFLCHM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B4F49D0)
#define JEEGAEFLCHM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B4F4AC0)
#define JEEGAEFLCHM_HONDKOCBBDK_OFFSET UNITYSDK_OFFSET(0x1B4F48C0)
#define JEEGAEFLCHM_IGPBGONOENL_OFFSET UNITYSDK_OFFSET(0x1B4F4690)
#define JEEGAEFLCHM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B4F47A0)
#define JEEGAEFLCHM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F4680)

inline static constexpr unsigned int JEEGAEFLCHM_TypeDefinitionIndex = 14604;

class JEEGAEFLCHM : public ::System::Object
{
public:
	::System::String* IAFNMFOJMMA; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::FNDHDPIGMEN HBDPAIKANDB; // 0x20
	::System::String* IIGCGLLAJOJ; // 0x30
	::System::String* LLFAPCCDKMK; // 0x38
	::System::Byte CNIAANMNOCF; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x41
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x42

	::System::Void _ctor(::FNDHDPIGMEN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FNDHDPIGMEN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JEEGAEFLCHM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* IGPBGONOENL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEGAEFLCHM_IGPBGONOENL_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEGAEFLCHM_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* CDDAGFPKIDK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEGAEFLCHM_CDDAGFPKIDK_OFFSET))(this);
	}

	::System::String* HONDKOCBBDK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEGAEFLCHM_HONDKOCBBDK_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEGAEFLCHM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JEEGAEFLCHM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
