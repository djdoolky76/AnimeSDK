#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHKJBHDBFIP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define EEHOPOHEOHM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1ADD0440)
#define EEHOPOHEOHM_EIGPMHAJPBB_OFFSET UNITYSDK_OFFSET(0x1ADD0760)
#define EEHOPOHEOHM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1ADD0750)
#define EEHOPOHEOHM_JHGCKDJFNJA_OFFSET UNITYSDK_OFFSET(0x1ADD0330)
#define EEHOPOHEOHM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1ADD0870)
#define EEHOPOHEOHM_LNLNHEMFAEC_OFFSET UNITYSDK_OFFSET(0x1ADD0530)
#define EEHOPOHEOHM_MEAKGMCFGAL_OFFSET UNITYSDK_OFFSET(0x1ADD0640)
#define EEHOPOHEOHM__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADD0320)

inline static constexpr unsigned int EEHOPOHEOHM_TypeDefinitionIndex = 12521;

class EEHOPOHEOHM : public ::System::Object
{
public:
	::CHKJBHDBFIP HBDPAIKANDB; // 0x10
	::System::String* FPDCABEOFOC; // 0x20
	::System::String* BMKFPOJEAPM; // 0x28
	::System::String* JEKMGNKNLMO; // 0x30
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::String* DHBLPDHJAOH; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x48
	::System::Byte ACIOBDEBDNK; // 0x49
	::System::Byte CNIAANMNOCF; // 0x4A
	::System::Byte _padding0[0x1];
	::System::Int32 EHMCCALEPFP; // 0x4C

	::System::Void _ctor(::CHKJBHDBFIP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CHKJBHDBFIP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EEHOPOHEOHM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* JHGCKDJFNJA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHOPOHEOHM_JHGCKDJFNJA_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHOPOHEOHM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* LNLNHEMFAEC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHOPOHEOHM_LNLNHEMFAEC_OFFSET))(this);
	}

	::System::String* MEAKGMCFGAL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHOPOHEOHM_MEAKGMCFGAL_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EEHOPOHEOHM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* EIGPMHAJPBB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHOPOHEOHM_EIGPMHAJPBB_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHOPOHEOHM_LJANCIBECFG_OFFSET))(this);
	}
};
