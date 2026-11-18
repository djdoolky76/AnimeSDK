#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBKDGBNBEGB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KHEMBAAKHLF_CFOONJHKOJN_OFFSET UNITYSDK_OFFSET(0x18DE7810)
#define KHEMBAAKHLF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18DE74B0)
#define KHEMBAAKHLF_EEMGEPIKENL_OFFSET UNITYSDK_OFFSET(0x18DE76D0)
#define KHEMBAAKHLF_EKNLEOCHPAP_OFFSET UNITYSDK_OFFSET(0x18DE7950)
#define KHEMBAAKHLF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18DE76C0)
#define KHEMBAAKHLF_LDDDPOFGFDM_OFFSET UNITYSDK_OFFSET(0x18DE75B0)
#define KHEMBAAKHLF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18DE75A0)
#define KHEMBAAKHLF__CTOR_OFFSET UNITYSDK_OFFSET(0x18DE74A0)

inline static constexpr unsigned int KHEMBAAKHLF_TypeDefinitionIndex = 15699;

class KHEMBAAKHLF : public ::System::Object
{
public:
	::System::String* JJNKOGMNNAP; // 0x10
	::OBKDGBNBEGB HBDPAIKANDB; // 0x18
	::System::String* IMAFCDDJOME; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* NABADLCIOOI; // 0x38
	::System::Int32 JFFPLPGOLNL; // 0x40
	::System::Int32 AOFENOIMMGJ; // 0x44
	::System::Byte CNIAANMNOCF; // 0x48
	::System::Byte ACIOBDEBDNK; // 0x49
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4A
	::System::Byte _padding0[0x1];
	::System::Int32 KOIKJMGICEI; // 0x4C
	::System::Int32 DCNPKDIOFDI; // 0x50
	::System::Int32 FIDODLIFEKM; // 0x54

	::System::Void _ctor(::OBKDGBNBEGB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OBKDGBNBEGB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KHEMBAAKHLF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHEMBAAKHLF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHEMBAAKHLF_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* LDDDPOFGFDM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHEMBAAKHLF_LDDDPOFGFDM_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KHEMBAAKHLF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 EEMGEPIKENL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHEMBAAKHLF_EEMGEPIKENL_OFFSET))(this);
	}

	::System::Int32 CFOONJHKOJN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHEMBAAKHLF_CFOONJHKOJN_OFFSET))(this);
	}

	::System::Int32 EKNLEOCHPAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHEMBAAKHLF_EKNLEOCHPAP_OFFSET))(this);
	}
};
