#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFPCIMPDFDL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define CMPKHFBIHKD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B99E060)
#define CMPKHFBIHKD_DINHBABEPNA_OFFSET UNITYSDK_OFFSET(0x1B99DDF0)
#define CMPKHFBIHKD_DMDIGEODHBK_OFFSET UNITYSDK_OFFSET(0x1B99DA40)
#define CMPKHFBIHKD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B99E150)
#define CMPKHFBIHKD_GIJGALKAMHI_OFFSET UNITYSDK_OFFSET(0x1B99E160)
#define CMPKHFBIHKD_LJAAFEHAMEC_OFFSET UNITYSDK_OFFSET(0x1B99DF00)
#define CMPKHFBIHKD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B99E270)
#define CMPKHFBIHKD_MCCPKCIMFEC_OFFSET UNITYSDK_OFFSET(0x1B99DCB0)
#define CMPKHFBIHKD_MPOOMDLNBKH_OFFSET UNITYSDK_OFFSET(0x1B99D930)
#define CMPKHFBIHKD_PDAADHDFGKP_OFFSET UNITYSDK_OFFSET(0x1B99DB50)
#define CMPKHFBIHKD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B99D920)

inline static constexpr unsigned int CMPKHFBIHKD_TypeDefinitionIndex = 13370;

class CMPKHFBIHKD : public ::System::Object
{
public:
	::System::String* MOHCBAPEPNN; // 0x10
	::System::String* POCLGJNJLJL; // 0x18
	::OFPCIMPDFDL HBDPAIKANDB; // 0x20
	::System::String* CAHNBGIOLCH; // 0x30
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::String* NGBKPMFJFPA; // 0x40
	::System::Single HDAPAODLBHE; // 0x48
	::System::Byte GCHCDJCFCEG; // 0x4C
	::System::Byte ACIOBDEBDNK; // 0x4D
	::System::Byte CNIAANMNOCF; // 0x4E
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4F
	::System::Int32 JPKMIBNPNFB; // 0x50
	::System::Single OMNPBFOCFCD; // 0x54

	::System::Void _ctor(::OFPCIMPDFDL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OFPCIMPDFDL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CMPKHFBIHKD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* MPOOMDLNBKH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPKHFBIHKD_MPOOMDLNBKH_OFFSET))(this);
	}

	::System::String* DMDIGEODHBK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPKHFBIHKD_DMDIGEODHBK_OFFSET))(this);
	}

	::System::Single PDAADHDFGKP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPKHFBIHKD_PDAADHDFGKP_OFFSET))(this);
	}

	::System::Int32 MCCPKCIMFEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPKHFBIHKD_MCCPKCIMFEC_OFFSET))(this);
	}

	::System::String* DINHBABEPNA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPKHFBIHKD_DINHBABEPNA_OFFSET))(this);
	}

	::System::Single LJAAFEHAMEC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPKHFBIHKD_LJAAFEHAMEC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPKHFBIHKD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CMPKHFBIHKD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* GIJGALKAMHI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPKHFBIHKD_GIJGALKAMHI_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPKHFBIHKD_LJANCIBECFG_OFFSET))(this);
	}
};
