#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPHCMIKAOHK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HENIKKGDMJD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17BFA900)
#define HENIKKGDMJD_EKNINIBHKFJ_OFFSET UNITYSDK_OFFSET(0x17BFA500)
#define HENIKKGDMJD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17BFA8E0)
#define HENIKKGDMJD_LINNNHEDGMP_OFFSET UNITYSDK_OFFSET(0x17BFA9F0)
#define HENIKKGDMJD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17BFA8F0)
#define HENIKKGDMJD_LOBBIBGKCFG_OFFSET UNITYSDK_OFFSET(0x17BFAC40)
#define HENIKKGDMJD_NKFALLBKIHF_OFFSET UNITYSDK_OFFSET(0x17BFAB00)
#define HENIKKGDMJD_OOFFEDMDIGF_OFFSET UNITYSDK_OFFSET(0x17BFA7D0)
#define HENIKKGDMJD__CTOR_OFFSET UNITYSDK_OFFSET(0x17BFA4F0)

inline static constexpr unsigned int HENIKKGDMJD_TypeDefinitionIndex = 13035;

class HENIKKGDMJD : public ::System::Object
{
public:
	::DPHCMIKAOHK HBDPAIKANDB; // 0x10
	::System::String* JHDIMHOBFDJ; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* GBKPDCJFDKF; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* MMGIPGPAMCN; // 0x30
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::String* INAGNABGFHO; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x48
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x49
	::System::Byte _padding0[0x2];
	::System::Int32 AHJEMEAOFDB; // 0x4C
	::System::Byte GCHCDJCFCEG; // 0x50
	::System::Byte IBKPIIHFBMG; // 0x51
	::System::Byte KNINGNPOJFI; // 0x52
	::System::Byte CNIAANMNOCF; // 0x53

	::System::Void _ctor(::DPHCMIKAOHK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DPHCMIKAOHK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HENIKKGDMJD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* EKNINIBHKFJ()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HENIKKGDMJD_EKNINIBHKFJ_OFFSET))(this);
	}

	::System::String* OOFFEDMDIGF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HENIKKGDMJD_OOFFEDMDIGF_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HENIKKGDMJD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HENIKKGDMJD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HENIKKGDMJD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* LINNNHEDGMP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HENIKKGDMJD_LINNNHEDGMP_OFFSET))(this);
	}

	::System::Int32 NKFALLBKIHF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HENIKKGDMJD_NKFALLBKIHF_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* LOBBIBGKCFG()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HENIKKGDMJD_LOBBIBGKCFG_OFFSET))(this);
	}
};
