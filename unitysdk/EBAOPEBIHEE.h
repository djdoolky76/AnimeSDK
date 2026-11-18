#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCANEFJGAJH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define EBAOPEBIHEE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17AA0440)
#define EBAOPEBIHEE_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x17AA0670)
#define EBAOPEBIHEE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17AA0B10)
#define EBAOPEBIHEE_GGACDNDHAEO_OFFSET UNITYSDK_OFFSET(0x17AA0780)
#define EBAOPEBIHEE_GIJGALKAMHI_OFFSET UNITYSDK_OFFSET(0x17AA0A00)
#define EBAOPEBIHEE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17AA0430)
#define EBAOPEBIHEE_OECBEAJKNLE_OFFSET UNITYSDK_OFFSET(0x17AA0530)
#define EBAOPEBIHEE_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x17AA08C0)
#define EBAOPEBIHEE__CTOR_OFFSET UNITYSDK_OFFSET(0x17AA0420)

inline static constexpr unsigned int EBAOPEBIHEE_TypeDefinitionIndex = 15307;

class EBAOPEBIHEE : public ::System::Object
{
public:
	::System::String* CAHNBGIOLCH; // 0x10
	::System::String* IENCBDEPMFJ; // 0x18
	::GCANEFJGAJH HBDPAIKANDB; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Int32 DCOGDIJNOFA; // 0x38
	::System::Int32 PCMOJLNOPPM; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x41
	::System::Byte ACIOBDEBDNK; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 ECCLJDPODBM; // 0x44

	::System::Void _ctor(::GCANEFJGAJH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GCANEFJGAJH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EBAOPEBIHEE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBAOPEBIHEE_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBAOPEBIHEE_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 OECBEAJKNLE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBAOPEBIHEE_OECBEAJKNLE_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBAOPEBIHEE_DECMGICKDLH_OFFSET))(this);
	}

	::System::Int32 GGACDNDHAEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBAOPEBIHEE_GGACDNDHAEO_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBAOPEBIHEE_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* GIJGALKAMHI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBAOPEBIHEE_GIJGALKAMHI_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EBAOPEBIHEE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
