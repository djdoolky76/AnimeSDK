#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/INKLDEKDGDN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MKFJMMGOLCN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17349130)
#define MKFJMMGOLCN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17349220)
#define MKFJMMGOLCN_GEPMIJOIMDP_OFFSET UNITYSDK_OFFSET(0x17348B90)
#define MKFJMMGOLCN_JMKFAIKAOFJ_OFFSET UNITYSDK_OFFSET(0x17348E60)
#define MKFJMMGOLCN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17348B80)
#define MKFJMMGOLCN_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x17348A40)
#define MKFJMMGOLCN__CTOR_OFFSET UNITYSDK_OFFSET(0x17348A30)

inline static constexpr unsigned int MKFJMMGOLCN_TypeDefinitionIndex = 14072;

class MKFJMMGOLCN : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* HPGJBPFDAOE; // 0x10
	::INKLDEKDGDN HBDPAIKANDB; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* MEIFGCPCAFF; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Byte GCHCDJCFCEG; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3B
	::System::Int32 PCMOJLNOPPM; // 0x3C

	::System::Void _ctor(::INKLDEKDGDN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::INKLDEKDGDN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MKFJMMGOLCN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFJMMGOLCN_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFJMMGOLCN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* GEPMIJOIMDP()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFJMMGOLCN_GEPMIJOIMDP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* JMKFAIKAOFJ()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFJMMGOLCN_JMKFAIKAOFJ_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFJMMGOLCN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MKFJMMGOLCN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
