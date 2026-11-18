#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PEHDLCMNJHE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DNOMFHDNLCB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A191DE0)
#define DNOMFHDNLCB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A191ED0)
#define DNOMFHDNLCB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A191C90)
#define DNOMFHDNLCB_NABKEDOOCIA_OFFSET UNITYSDK_OFFSET(0x1A191CA0)
#define DNOMFHDNLCB_ODLJCGPGPII_OFFSET UNITYSDK_OFFSET(0x1A1919C0)
#define DNOMFHDNLCB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1919B0)

inline static constexpr unsigned int DNOMFHDNLCB_TypeDefinitionIndex = 11013;

class DNOMFHDNLCB : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::PEHDLCMNJHE HBDPAIKANDB; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* LCNLHHADJMN; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 PMBJCDNHDJH; // 0x34

	::System::Void _ctor(::PEHDLCMNJHE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PEHDLCMNJHE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DNOMFHDNLCB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* ODLJCGPGPII()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNOMFHDNLCB_ODLJCGPGPII_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNOMFHDNLCB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 NABKEDOOCIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNOMFHDNLCB_NABKEDOOCIA_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNOMFHDNLCB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DNOMFHDNLCB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
