#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/COOJDFEMEFO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define DPLCAOCBCGD_CCDBAOOFMFA_OFFSET UNITYSDK_OFFSET(0x157A7F80)
#define DPLCAOCBCGD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x157A81D0)
#define DPLCAOCBCGD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x157A82C0)
#define DPLCAOCBCGD_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x157A7E40)
#define DPLCAOCBCGD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x157A7E30)
#define DPLCAOCBCGD_OAEOELMJIIE_OFFSET UNITYSDK_OFFSET(0x157A7D20)
#define DPLCAOCBCGD_OGNMEDNMNHE_OFFSET UNITYSDK_OFFSET(0x157A8090)
#define DPLCAOCBCGD_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x157A7BE0)
#define DPLCAOCBCGD__CTOR_OFFSET UNITYSDK_OFFSET(0x157A7BD0)

inline static constexpr unsigned int DPLCAOCBCGD_TypeDefinitionIndex = 15444;

class DPLCAOCBCGD : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* GFPFFDANFKD; // 0x18
	::COOJDFEMEFO HBDPAIKANDB; // 0x20
	::System::String* GFPLKBDCIPE; // 0x30
	::System::Int32 JFIENNOHHDO; // 0x38
	::System::Int32 POKJNGILNLB; // 0x3C
	::System::Int32 PCMOJLNOPPM; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x44
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x45
	::System::Byte CNIAANMNOCF; // 0x46

	::System::Void _ctor(::COOJDFEMEFO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::COOJDFEMEFO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DPLCAOCBCGD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLCAOCBCGD_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* OAEOELMJIIE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLCAOCBCGD_OAEOELMJIIE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLCAOCBCGD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLCAOCBCGD_HKELPCLHLEC_OFFSET))(this);
	}

	::System::String* CCDBAOOFMFA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLCAOCBCGD_CCDBAOOFMFA_OFFSET))(this);
	}

	::System::Int32 OGNMEDNMNHE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLCAOCBCGD_OGNMEDNMNHE_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLCAOCBCGD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DPLCAOCBCGD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
