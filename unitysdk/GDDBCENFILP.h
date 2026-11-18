#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBBHIJMODBP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GDDBCENFILP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A4D43B0)
#define GDDBCENFILP_EGBNIJOOABL_OFFSET UNITYSDK_OFFSET(0x1A4D4730)
#define GDDBCENFILP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A4D4A00)
#define GDDBCENFILP_KCCGIIJENEK_OFFSET UNITYSDK_OFFSET(0x1A4D45E0)
#define GDDBCENFILP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A4D4720)
#define GDDBCENFILP_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1A4D44A0)
#define GDDBCENFILP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4D43A0)

inline static constexpr unsigned int GDDBCENFILP_TypeDefinitionIndex = 17138;

class GDDBCENFILP : public ::System::Object
{
public:
	::OBBHIJMODBP HBDPAIKANDB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* CHHFMHGLEAO; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x34
	::System::Int32 OHHCGBLIAJH; // 0x38

	::System::Void _ctor(::OBBHIJMODBP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OBBHIJMODBP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GDDBCENFILP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDBCENFILP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDBCENFILP_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 KCCGIIJENEK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDBCENFILP_KCCGIIJENEK_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDBCENFILP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* EGBNIJOOABL()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDBCENFILP_EGBNIJOOABL_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GDDBCENFILP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
