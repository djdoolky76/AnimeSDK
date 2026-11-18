#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKAKKFPECOC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KAJCMHNFLHM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B89F930)
#define KAJCMHNFLHM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B89F920)
#define KAJCMHNFLHM_KNBPLPCFMHL_OFFSET UNITYSDK_OFFSET(0x1B89FA20)
#define KAJCMHNFLHM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B89F910)
#define KAJCMHNFLHM_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B89F7D0)
#define KAJCMHNFLHM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B89F7C0)

inline static constexpr unsigned int KAJCMHNFLHM_TypeDefinitionIndex = 9146;

class KAJCMHNFLHM : public ::System::Object
{
public:
	::System::String* OMDLAHBLCAM; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* DCBBLPHGLDF; // 0x18
	::HKAKKFPECOC HBDPAIKANDB; // 0x20
	::System::String* JPNOHBLNEMO; // 0x30
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::String* IENCBDEPMFJ; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x48
	::System::Byte CNIAANMNOCF; // 0x49
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4A
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x4C
	::System::Int32 ANDFDBNJKIF; // 0x50

	::System::Void _ctor(::HKAKKFPECOC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HKAKKFPECOC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KAJCMHNFLHM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJCMHNFLHM_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJCMHNFLHM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KAJCMHNFLHM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJCMHNFLHM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* KNBPLPCFMHL()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJCMHNFLHM_KNBPLPCFMHL_OFFSET))(this);
	}
};
