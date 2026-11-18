#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIEMMMHPCFP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MKFDHIGDMBP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17FC7CA0)
#define MKFDHIGDMBP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17FC77B0)
#define MKFDHIGDMBP_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x17FC7900)
#define MKFDHIGDMBP_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x17FC7B90)
#define MKFDHIGDMBP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17FC7B80)
#define MKFDHIGDMBP_LJNBIAFBMIL_OFFSET UNITYSDK_OFFSET(0x17FC7A40)
#define MKFDHIGDMBP_NLBBPGPLHGH_OFFSET UNITYSDK_OFFSET(0x17FC77C0)
#define MKFDHIGDMBP__CTOR_OFFSET UNITYSDK_OFFSET(0x17FC77A0)

inline static constexpr unsigned int MKFDHIGDMBP_TypeDefinitionIndex = 17259;

class MKFDHIGDMBP : public ::System::Object
{
public:
	::DIEMMMHPCFP HBDPAIKANDB; // 0x10
	::System::String* EOALHEEBMKM; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 PEHLJEEIACG; // 0x34
	::System::Int32 POKJNGILNLB; // 0x38
	::System::Int32 PALOBCPKFDO; // 0x3C

	::System::Void _ctor(::DIEMMMHPCFP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DIEMMMHPCFP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MKFDHIGDMBP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MKFDHIGDMBP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 NLBBPGPLHGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFDHIGDMBP_NLBBPGPLHGH_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFDHIGDMBP_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 LJNBIAFBMIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFDHIGDMBP_LJNBIAFBMIL_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFDHIGDMBP_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFDHIGDMBP_IFDIOIOCGDP_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFDHIGDMBP_COFGIJJOFLP_OFFSET))(this);
	}
};
