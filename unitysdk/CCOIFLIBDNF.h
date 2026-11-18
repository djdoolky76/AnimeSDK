#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOPFLICJCBC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CCOIFLIBDNF_AGAPBLMEEJE_OFFSET UNITYSDK_OFFSET(0x19BF1B50)
#define CCOIFLIBDNF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19BF1690)
#define CCOIFLIBDNF_DMMNHBNKBEE_OFFSET UNITYSDK_OFFSET(0x19BF13C0)
#define CCOIFLIBDNF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19BF1B40)
#define CCOIFLIBDNF_GLEIIDKNKDF_OFFSET UNITYSDK_OFFSET(0x19BF1A00)
#define CCOIFLIBDNF_HJEFCNNHHEO_OFFSET UNITYSDK_OFFSET(0x19BF1780)
#define CCOIFLIBDNF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19BF13B0)
#define CCOIFLIBDNF_NPKMAOFIFHH_OFFSET UNITYSDK_OFFSET(0x19BF18C0)
#define CCOIFLIBDNF__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF13A0)

inline static constexpr unsigned int CCOIFLIBDNF_TypeDefinitionIndex = 15577;

class CCOIFLIBDNF : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* JMCDNAHGIGC; // 0x18
	::AOPFLICJCBC HBDPAIKANDB; // 0x20
	::System::Int32 NMDNGDKBKCI; // 0x30
	::System::Int32 GHCMNOHKPDP; // 0x34
	::System::Int32 ONPMJGJBNOA; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x3C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3D
	::System::Byte CNIAANMNOCF; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Int32 AFHOINLGKJF; // 0x40

	::System::Void _ctor(::AOPFLICJCBC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AOPFLICJCBC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CCOIFLIBDNF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOIFLIBDNF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* DMMNHBNKBEE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOIFLIBDNF_DMMNHBNKBEE_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOIFLIBDNF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 HJEFCNNHHEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOIFLIBDNF_HJEFCNNHHEO_OFFSET))(this);
	}

	::System::Int32 NPKMAOFIFHH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOIFLIBDNF_NPKMAOFIFHH_OFFSET))(this);
	}

	::System::Int32 GLEIIDKNKDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOIFLIBDNF_GLEIIDKNKDF_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CCOIFLIBDNF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 AGAPBLMEEJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOIFLIBDNF_AGAPBLMEEJE_OFFSET))(this);
	}
};
