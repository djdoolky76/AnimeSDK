#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFHJEOKKPLI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define ABKKFFCFGPA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B980470)
#define ABKKFFCFGPA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B980320)
#define ABKKFFCFGPA_HLIIFOGCNMK_OFFSET UNITYSDK_OFFSET(0x1B9801E0)
#define ABKKFFCFGPA_IODBAHPDBPJ_OFFSET UNITYSDK_OFFSET(0x1B980330)
#define ABKKFFCFGPA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B9801D0)
#define ABKKFFCFGPA_MDPBPBNMKJA_OFFSET UNITYSDK_OFFSET(0x1B980670)
#define ABKKFFCFGPA_NJLEDBKAEPF_OFFSET UNITYSDK_OFFSET(0x1B980560)
#define ABKKFFCFGPA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9801C0)

inline static constexpr unsigned int ABKKFFCFGPA_TypeDefinitionIndex = 13335;

class ABKKFFCFGPA : public ::System::Object
{
public:
	::HFHJEOKKPLI HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* KCNEGLEDPJF; // 0x28
	::System::Int32 EILGGBFEOCJ; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 NPOFJLMLMLG; // 0x38
	::System::Int32 LNDOJKEIPFI; // 0x3C

	::System::Void _ctor(::HFHJEOKKPLI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HFHJEOKKPLI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ABKKFFCFGPA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKKFFCFGPA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 HLIIFOGCNMK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKKFFCFGPA_HLIIFOGCNMK_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABKKFFCFGPA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 IODBAHPDBPJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKKFFCFGPA_IODBAHPDBPJ_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKKFFCFGPA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* NJLEDBKAEPF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKKFFCFGPA_NJLEDBKAEPF_OFFSET))(this);
	}

	::System::Int32 MDPBPBNMKJA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKKFFCFGPA_MDPBPBNMKJA_OFFSET))(this);
	}
};
