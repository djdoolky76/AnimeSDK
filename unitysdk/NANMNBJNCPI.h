#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFAKLLBKKAN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define NANMNBJNCPI_BJNDNNHPMMC_OFFSET UNITYSDK_OFFSET(0x1BAA05F0)
#define NANMNBJNCPI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BAA0A90)
#define NANMNBJNCPI_DBFCONDGINP_OFFSET UNITYSDK_OFFSET(0x1BAA04B0)
#define NANMNBJNCPI_FCFKOHBAOIK_OFFSET UNITYSDK_OFFSET(0x1BAA0B80)
#define NANMNBJNCPI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BAA04A0)
#define NANMNBJNCPI_GBLGGFKIPPA_OFFSET UNITYSDK_OFFSET(0x1BAA0840)
#define NANMNBJNCPI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BAA0C90)
#define NANMNBJNCPI_NCHOPPLAEBF_OFFSET UNITYSDK_OFFSET(0x1BAA0950)
#define NANMNBJNCPI_PFCFLGPCEFO_OFFSET UNITYSDK_OFFSET(0x1BAA0700)
#define NANMNBJNCPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAA0490)

inline static constexpr unsigned int NANMNBJNCPI_TypeDefinitionIndex = 11183;

class NANMNBJNCPI : public ::System::Object
{
public:
	::System::String* KIILEFPLFCI; // 0x10
	::System::String* MOIAGOFLPGO; // 0x18
	::EFAKLLBKKAN HBDPAIKANDB; // 0x20
	::System::String* OGKLPGHFBHA; // 0x30
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::Int32 OLIJDKPGHOB; // 0x40
	::System::Int32 HMNPDDGNPEH; // 0x44
	::System::Int32 BIKNCBGNFCM; // 0x48
	::System::Byte GCHCDJCFCEG; // 0x4C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4D
	::System::Byte CNIAANMNOCF; // 0x4E
	::System::Byte ACIOBDEBDNK; // 0x4F

	::System::Void _ctor(::EFAKLLBKKAN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EFAKLLBKKAN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NANMNBJNCPI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NANMNBJNCPI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 DBFCONDGINP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NANMNBJNCPI_DBFCONDGINP_OFFSET))(this);
	}

	::System::String* BJNDNNHPMMC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NANMNBJNCPI_BJNDNNHPMMC_OFFSET))(this);
	}

	::System::Int32 PFCFLGPCEFO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NANMNBJNCPI_PFCFLGPCEFO_OFFSET))(this);
	}

	::System::String* GBLGGFKIPPA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NANMNBJNCPI_GBLGGFKIPPA_OFFSET))(this);
	}

	::System::Int32 NCHOPPLAEBF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NANMNBJNCPI_NCHOPPLAEBF_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NANMNBJNCPI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* FCFKOHBAOIK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NANMNBJNCPI_FCFKOHBAOIK_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NANMNBJNCPI_LJANCIBECFG_OFFSET))(this);
	}
};
