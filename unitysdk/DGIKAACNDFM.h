#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EPIAAKGJFMJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DGIKAACNDFM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17F19470)
#define DGIKAACNDFM_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x17F19570)
#define DGIKAACNDFM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17F19560)
#define DGIKAACNDFM_JMKFAIKAOFJ_OFFSET UNITYSDK_OFFSET(0x17F19190)
#define DGIKAACNDFM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17F19460)
#define DGIKAACNDFM_PAINFLDDDDD_OFFSET UNITYSDK_OFFSET(0x17F197E0)
#define DGIKAACNDFM_PHMJNDHGAMO_OFFSET UNITYSDK_OFFSET(0x17F19680)
#define DGIKAACNDFM_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x17F19050)
#define DGIKAACNDFM__CTOR_OFFSET UNITYSDK_OFFSET(0x17F19040)

inline static constexpr unsigned int DGIKAACNDFM_TypeDefinitionIndex = 9932;

class DGIKAACNDFM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* MEIFGCPCAFF; // 0x10
	::System::String* IENCBDEPMFJ; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::EPIAAKGJFMJ HBDPAIKANDB; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Byte GCHCDJCFCEG; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A
	::System::Boolean ICGOMHKEGDJ; // 0x3B
	::System::Int32 PCMOJLNOPPM; // 0x3C
	::System::Boolean PMIPDJKHLCH; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x41

	::System::Void _ctor(::EPIAAKGJFMJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EPIAAKGJFMJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DGIKAACNDFM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGIKAACNDFM_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* JMKFAIKAOFJ()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGIKAACNDFM_JMKFAIKAOFJ_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGIKAACNDFM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGIKAACNDFM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DGIKAACNDFM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGIKAACNDFM_DECMGICKDLH_OFFSET))(this);
	}

	::System::Boolean PHMJNDHGAMO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGIKAACNDFM_PHMJNDHGAMO_OFFSET))(this);
	}

	::System::Boolean PAINFLDDDDD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGIKAACNDFM_PAINFLDDDDD_OFFSET))(this);
	}
};
