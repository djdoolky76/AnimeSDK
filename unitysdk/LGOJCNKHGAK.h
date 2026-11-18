#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKFHPLCKHKL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define LGOJCNKHGAK_AJEDDNMECNI_OFFSET UNITYSDK_OFFSET(0x19DA6480)
#define LGOJCNKHGAK_BKGKPAMALKA_OFFSET UNITYSDK_OFFSET(0x19DA6700)
#define LGOJCNKHGAK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19DA6390)
#define LGOJCNKHGAK_FAOILJABEJF_OFFSET UNITYSDK_OFFSET(0x19DA6230)
#define LGOJCNKHGAK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19DA6110)
#define LGOJCNKHGAK_IDJBMKIAJHG_OFFSET UNITYSDK_OFFSET(0x19DA6120)
#define LGOJCNKHGAK_JLKOALPHAHB_OFFSET UNITYSDK_OFFSET(0x19DA65A0)
#define LGOJCNKHGAK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19DA6590)
#define LGOJCNKHGAK_PMKFNNONBFI_OFFSET UNITYSDK_OFFSET(0x19DA6810)
#define LGOJCNKHGAK__CTOR_OFFSET UNITYSDK_OFFSET(0x19DA6100)

inline static constexpr unsigned int LGOJCNKHGAK_TypeDefinitionIndex = 15323;

class LGOJCNKHGAK : public ::System::Object
{
public:
	::PKFHPLCKHKL HBDPAIKANDB; // 0x10
	::System::String* ALDNFJBLIAK; // 0x20
	::System::String* CMGFEACDFOD; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::String* HOOJEDLDOPA; // 0x38
	::System::Boolean IDNJAOFEFAE; // 0x40
	::System::Boolean GICGLPNOKNI; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42
	::System::Byte ACIOBDEBDNK; // 0x43
	::System::Int32 NMGBPNAMKGB; // 0x44
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x48

	::System::Void _ctor(::PKFHPLCKHKL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PKFHPLCKHKL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LGOJCNKHGAK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LGOJCNKHGAK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* IDJBMKIAJHG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGOJCNKHGAK_IDJBMKIAJHG_OFFSET))(this);
	}

	::System::Boolean FAOILJABEJF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGOJCNKHGAK_FAOILJABEJF_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGOJCNKHGAK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* AJEDDNMECNI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGOJCNKHGAK_AJEDDNMECNI_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGOJCNKHGAK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Boolean JLKOALPHAHB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGOJCNKHGAK_JLKOALPHAHB_OFFSET))(this);
	}

	::System::String* BKGKPAMALKA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGOJCNKHGAK_BKGKPAMALKA_OFFSET))(this);
	}

	::System::Int32 PMKFNNONBFI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGOJCNKHGAK_PMKFNNONBFI_OFFSET))(this);
	}
};
