#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KEFECHKGJDC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define DKLBFKCLNIG_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x19ADC7B0)
#define DKLBFKCLNIG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19ADC6B0)
#define DKLBFKCLNIG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19ADCA00)
#define DKLBFKCLNIG_LFNGBBGHEAP_OFFSET UNITYSDK_OFFSET(0x19ADCA10)
#define DKLBFKCLNIG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19ADC7A0)
#define DKLBFKCLNIG_MNGNAMLGGJN_OFFSET UNITYSDK_OFFSET(0x19ADC8F0)
#define DKLBFKCLNIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19ADC6A0)

inline static constexpr unsigned int DKLBFKCLNIG_TypeDefinitionIndex = 13097;

class DKLBFKCLNIG : public ::System::Object
{
public:
	::System::String* EMDOKBMBFAB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::KEFECHKGJDC HBDPAIKANDB; // 0x20
	::System::Int32 FGGCEPHJODN; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 NLCDENLKOPM; // 0x38

	::System::Void _ctor(::KEFECHKGJDC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KEFECHKGJDC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DKLBFKCLNIG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKLBFKCLNIG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKLBFKCLNIG_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKLBFKCLNIG_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::String* MNGNAMLGGJN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKLBFKCLNIG_MNGNAMLGGJN_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DKLBFKCLNIG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 LFNGBBGHEAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKLBFKCLNIG_LFNGBBGHEAP_OFFSET))(this);
	}
};
