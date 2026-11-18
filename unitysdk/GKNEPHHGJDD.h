#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHHPGEINJBD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define GKNEPHHGJDD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A4DC570)
#define GKNEPHHGJDD_DKOCPDPOIEA_OFFSET UNITYSDK_OFFSET(0x1A4DC660)
#define GKNEPHHGJDD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A4DC8C0)
#define GKNEPHHGJDD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A4DC8B0)
#define GKNEPHHGJDD_OLDLPCJINBO_OFFSET UNITYSDK_OFFSET(0x1A4DC7A0)
#define GKNEPHHGJDD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4DC560)

inline static constexpr unsigned int GKNEPHHGJDD_TypeDefinitionIndex = 10610;

class GKNEPHHGJDD : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::NHHPGEINJBD HBDPAIKANDB; // 0x18
	::System::String* PBOHJGLMHEB; // 0x28
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 FBMLCHDEDLB; // 0x34

	::System::Void _ctor(::NHHPGEINJBD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NHHPGEINJBD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GKNEPHHGJDD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNEPHHGJDD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 DKOCPDPOIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNEPHHGJDD_DKOCPDPOIEA_OFFSET))(this);
	}

	::System::String* OLDLPCJINBO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNEPHHGJDD_OLDLPCJINBO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNEPHHGJDD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GKNEPHHGJDD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
