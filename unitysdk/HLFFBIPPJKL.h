#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BPBLIDEPAEP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HLFFBIPPJKL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19344700)
#define HLFFBIPPJKL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x193446F0)
#define HLFFBIPPJKL_JAFOGGECOEP_OFFSET UNITYSDK_OFFSET(0x19344410)
#define HLFFBIPPJKL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x193446E0)
#define HLFFBIPPJKL_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x193442D0)
#define HLFFBIPPJKL__CTOR_OFFSET UNITYSDK_OFFSET(0x193442C0)

inline static constexpr unsigned int HLFFBIPPJKL_TypeDefinitionIndex = 11287;

class HLFFBIPPJKL : public ::System::Object
{
public:
	::BPBLIDEPAEP HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* JLJLHLOLKAE; // 0x28
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x34

	::System::Void _ctor(::BPBLIDEPAEP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BPBLIDEPAEP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HLFFBIPPJKL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFFBIPPJKL_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* JAFOGGECOEP()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFFBIPPJKL_JAFOGGECOEP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFFBIPPJKL_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HLFFBIPPJKL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFFBIPPJKL_COFGIJJOFLP_OFFSET))(this);
	}
};
