#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NJBGDDAGKNM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLPJDKPMHDH_CILNICBIIMF_OFFSET UNITYSDK_OFFSET(0x1A180DE0)
#define CLPJDKPMHDH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A180CE0)
#define CLPJDKPMHDH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A180DD0)
#define CLPJDKPMHDH_GJNJFCPHKAA_OFFSET UNITYSDK_OFFSET(0x1A180EF0)
#define CLPJDKPMHDH_JGJCAIPMHED_OFFSET UNITYSDK_OFFSET(0x1A181030)
#define CLPJDKPMHDH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A1815D0)
#define CLPJDKPMHDH_MMPMACPDCCD_OFFSET UNITYSDK_OFFSET(0x1A181300)
#define CLPJDKPMHDH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A180CD0)

inline static constexpr unsigned int CLPJDKPMHDH_TypeDefinitionIndex = 9906;

class CLPJDKPMHDH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* IKGNNNEDHIH; // 0x10
	::NJBGDDAGKNM HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* OKLMEHBBCAK; // 0x30
	::System::String* FEGHLOGPGIB; // 0x38
	::System::Int32 EKPIFCOGIDE; // 0x40
	::System::Byte CNIAANMNOCF; // 0x44
	::System::Byte ACIOBDEBDNK; // 0x45
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x46

	::System::Void _ctor(::NJBGDDAGKNM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NJBGDDAGKNM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CLPJDKPMHDH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPJDKPMHDH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLPJDKPMHDH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* CILNICBIIMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPJDKPMHDH_CILNICBIIMF_OFFSET))(this);
	}

	::System::Int32 GJNJFCPHKAA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPJDKPMHDH_GJNJFCPHKAA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* JGJCAIPMHED()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPJDKPMHDH_JGJCAIPMHED_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* MMPMACPDCCD()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPJDKPMHDH_MMPMACPDCCD_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPJDKPMHDH_LJANCIBECFG_OFFSET))(this);
	}
};
