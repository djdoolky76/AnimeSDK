#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FABENOKEDPC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GAFLLHDKDKD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A5B4320)
#define GAFLLHDKDKD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A5B4310)
#define GAFLLHDKDKD_JMKFAIKAOFJ_OFFSET UNITYSDK_OFFSET(0x1A5B4410)
#define GAFLLHDKDKD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A5B46E0)
#define GAFLLHDKDKD_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1A5B41D0)
#define GAFLLHDKDKD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5B41C0)

inline static constexpr unsigned int GAFLLHDKDKD_TypeDefinitionIndex = 11911;

class GAFLLHDKDKD : public ::System::Object
{
public:
	::FABENOKEDPC HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* MEIFGCPCAFF; // 0x28
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36
	::System::Byte GCHCDJCFCEG; // 0x37

	::System::Void _ctor(::FABENOKEDPC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FABENOKEDPC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GAFLLHDKDKD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAFLLHDKDKD_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GAFLLHDKDKD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAFLLHDKDKD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* JMKFAIKAOFJ()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAFLLHDKDKD_JMKFAIKAOFJ_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GAFLLHDKDKD_LJANCIBECFG_OFFSET))(this);
	}
};
