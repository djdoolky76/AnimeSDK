#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PAGEEAHOLBF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KEIHPCCHHKB_CFABIHFKOJJ_OFFSET UNITYSDK_OFFSET(0x18DE42B0)
#define KEIHPCCHHKB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18DE3DF0)
#define KEIHPCCHHKB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18DE42A0)
#define KEIHPCCHHKB_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x18DE4160)
#define KEIHPCCHHKB_KKLDJHGHHNB_OFFSET UNITYSDK_OFFSET(0x18DE4020)
#define KEIHPCCHHKB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18DE3DE0)
#define KEIHPCCHHKB_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x18DE3EE0)
#define KEIHPCCHHKB__CTOR_OFFSET UNITYSDK_OFFSET(0x18DE3DD0)

inline static constexpr unsigned int KEIHPCCHHKB_TypeDefinitionIndex = 10307;

class KEIHPCCHHKB : public ::System::Object
{
public:
	::PAGEEAHOLBF HBDPAIKANDB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* CKFGMNBACHK; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Byte CNIAANMNOCF; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 FDHAFOJEKBF; // 0x38
	::System::Int32 POKJNGILNLB; // 0x3C

	::System::Void _ctor(::PAGEEAHOLBF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PAGEEAHOLBF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KEIHPCCHHKB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KEIHPCCHHKB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEIHPCCHHKB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEIHPCCHHKB_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 KKLDJHGHHNB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEIHPCCHHKB_KKLDJHGHHNB_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEIHPCCHHKB_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KEIHPCCHHKB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* CFABIHFKOJJ()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEIHPCCHHKB_CFABIHFKOJJ_OFFSET))(this);
	}
};
