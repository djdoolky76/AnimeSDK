#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLLHACPEIFP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define LODDAGIIFJP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BA8E9F0)
#define LODDAGIIFJP_FLFJOGAGJPB_OFFSET UNITYSDK_OFFSET(0x1BA8EC20)
#define LODDAGIIFJP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BA8E9D0)
#define LODDAGIIFJP_KNOMCBNLCGP_OFFSET UNITYSDK_OFFSET(0x1BA8EAE0)
#define LODDAGIIFJP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BA8E9E0)
#define LODDAGIIFJP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA8E9C0)

inline static constexpr unsigned int LODDAGIIFJP_TypeDefinitionIndex = 10268;

class LODDAGIIFJP : public ::System::Object
{
public:
	::MLLHACPEIFP HBDPAIKANDB; // 0x10
	::System::String* HGNIMKHAIPH; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 JAMGJPEDBGI; // 0x34

	::System::Void _ctor(::MLLHACPEIFP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MLLHACPEIFP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LODDAGIIFJP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LODDAGIIFJP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LODDAGIIFJP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LODDAGIIFJP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 KNOMCBNLCGP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LODDAGIIFJP_KNOMCBNLCGP_OFFSET))(this);
	}

	::System::String* FLFJOGAGJPB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LODDAGIIFJP_FLFJOGAGJPB_OFFSET))(this);
	}
};
