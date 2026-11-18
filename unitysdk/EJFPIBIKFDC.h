#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNJPJNLGHNO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define EJFPIBIKFDC_BPIOFDMDJOB_OFFSET UNITYSDK_OFFSET(0x19521140)
#define EJFPIBIKFDC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19521030)
#define EJFPIBIKFDC_DGIENBNOMMK_OFFSET UNITYSDK_OFFSET(0x19521250)
#define EJFPIBIKFDC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19521120)
#define EJFPIBIKFDC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19521130)
#define EJFPIBIKFDC_NNIMOJPNNCM_OFFSET UNITYSDK_OFFSET(0x19520F20)
#define EJFPIBIKFDC__CTOR_OFFSET UNITYSDK_OFFSET(0x19520F10)

inline static constexpr unsigned int EJFPIBIKFDC_TypeDefinitionIndex = 13033;

class EJFPIBIKFDC : public ::System::Object
{
public:
	::System::String* JNDFAILKFNM; // 0x10
	::System::String* IMAFCDDJOME; // 0x18
	::System::String* EJMJMMCNKJJ; // 0x20
	::JNJPJNLGHNO HBDPAIKANDB; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::Int32 DFHIMAGGLDB; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x44
	::System::Byte ACIOBDEBDNK; // 0x45
	::System::Byte CNIAANMNOCF; // 0x46

	::System::Void _ctor(::JNJPJNLGHNO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JNJPJNLGHNO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EJFPIBIKFDC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* NNIMOJPNNCM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFPIBIKFDC_NNIMOJPNNCM_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFPIBIKFDC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EJFPIBIKFDC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFPIBIKFDC_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* BPIOFDMDJOB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFPIBIKFDC_BPIOFDMDJOB_OFFSET))(this);
	}

	::System::Int32 DGIENBNOMMK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFPIBIKFDC_DGIENBNOMMK_OFFSET))(this);
	}
};
