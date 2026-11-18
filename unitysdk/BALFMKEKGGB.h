#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJLHMMHIJIO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BALFMKEKGGB_BNFBEOLMNBE_OFFSET UNITYSDK_OFFSET(0x1A1685D0)
#define BALFMKEKGGB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A1684E0)
#define BALFMKEKGGB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A1689F0)
#define BALFMKEKGGB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A1688A0)
#define BALFMKEKGGB_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1A1688B0)
#define BALFMKEKGGB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1684D0)

inline static constexpr unsigned int BALFMKEKGGB_TypeDefinitionIndex = 13752;

class BALFMKEKGGB : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::JJLHMMHIJIO HBDPAIKANDB; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* CHGIBNCABBF; // 0x28
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x34

	::System::Void _ctor(::JJLHMMHIJIO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JJLHMMHIJIO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BALFMKEKGGB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BALFMKEKGGB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BNFBEOLMNBE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BALFMKEKGGB_BNFBEOLMNBE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BALFMKEKGGB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BALFMKEKGGB_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BALFMKEKGGB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
