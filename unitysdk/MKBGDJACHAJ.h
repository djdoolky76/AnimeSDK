#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMHAIAPLKKF.h"
#include "unitysdk/HNFADNMADCK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MKBGDJACHAJ_AGKIKAEECOL_OFFSET UNITYSDK_OFFSET(0x1CFE1600)
#define MKBGDJACHAJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1CFE1510)
#define MKBGDJACHAJ_DOEAAAPHCME_OFFSET UNITYSDK_OFFSET(0x1CFE1850)
#define MKBGDJACHAJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1CFE13C0)
#define MKBGDJACHAJ_IBABPGHPPOA_OFFSET UNITYSDK_OFFSET(0x1CFE13D0)
#define MKBGDJACHAJ_INNJIGNGACN_OFFSET UNITYSDK_OFFSET(0x1CFE1710)
#define MKBGDJACHAJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1CFE13B0)
#define MKBGDJACHAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFE13A0)

inline static constexpr unsigned int MKBGDJACHAJ_TypeDefinitionIndex = 9376;

class MKBGDJACHAJ : public ::System::Object
{
public:
	::BMHAIAPLKKF HBDPAIKANDB; // 0x10
	::System::String* LOKDIHLHELG; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Collections::Generic::List_1<::HNFADNMADCK>* ENFGFMBGFNE; // 0x30
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 AAJIKDJJCHH; // 0x3C
	::System::Int32 MKEHKPNHIKE; // 0x40

	::System::Void _ctor(::BMHAIAPLKKF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BMHAIAPLKKF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MKBGDJACHAJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBGDJACHAJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MKBGDJACHAJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 IBABPGHPPOA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBGDJACHAJ_IBABPGHPPOA_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBGDJACHAJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* AGKIKAEECOL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBGDJACHAJ_AGKIKAEECOL_OFFSET))(this);
	}

	::System::Int32 INNJIGNGACN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBGDJACHAJ_INNJIGNGACN_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::HNFADNMADCK>* DOEAAAPHCME()
	{
		return ((::System::Collections::Generic::List_1<::HNFADNMADCK>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBGDJACHAJ_DOEAAAPHCME_OFFSET))(this);
	}
};
