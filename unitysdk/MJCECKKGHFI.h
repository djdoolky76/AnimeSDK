#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PMDECKMGHLJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MJCECKKGHFI_ACNDDMMGDAM_OFFSET UNITYSDK_OFFSET(0x17347700)
#define MJCECKKGHFI_BEKCNEHMIGJ_OFFSET UNITYSDK_OFFSET(0x17347350)
#define MJCECKKGHFI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17347120)
#define MJCECKKGHFI_DCAHEDLHMEG_OFFSET UNITYSDK_OFFSET(0x17347850)
#define MJCECKKGHFI_FKGHAJBLOEN_OFFSET UNITYSDK_OFFSET(0x173474A0)
#define MJCECKKGHFI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17347840)
#define MJCECKKGHFI_GLOCABFGEIK_OFFSET UNITYSDK_OFFSET(0x17347210)
#define MJCECKKGHFI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17347490)
#define MJCECKKGHFI__CTOR_OFFSET UNITYSDK_OFFSET(0x17347110)

inline static constexpr unsigned int MJCECKKGHFI_TypeDefinitionIndex = 17352;

class MJCECKKGHFI : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::PMDECKMGHLJ HBDPAIKANDB; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* BLMACHDEEAL; // 0x28
	::System::Int32 CPLLKBAJGEJ; // 0x30
	::System::Int32 CLMIOPLBBLJ; // 0x34
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 EKFJFPDKNPE; // 0x3C
	::System::Int32 MKBIHCJABHJ; // 0x40
	::System::Int32 PCMOJLNOPPM; // 0x44

	::System::Void _ctor(::PMDECKMGHLJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PMDECKMGHLJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MJCECKKGHFI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCECKKGHFI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 GLOCABFGEIK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCECKKGHFI_GLOCABFGEIK_OFFSET))(this);
	}

	::System::Int32 BEKCNEHMIGJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCECKKGHFI_BEKCNEHMIGJ_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCECKKGHFI_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* FKGHAJBLOEN()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCECKKGHFI_FKGHAJBLOEN_OFFSET))(this);
	}

	::System::Int32 ACNDDMMGDAM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCECKKGHFI_ACNDDMMGDAM_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MJCECKKGHFI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 DCAHEDLHMEG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCECKKGHFI_DCAHEDLHMEG_OFFSET))(this);
	}
};
