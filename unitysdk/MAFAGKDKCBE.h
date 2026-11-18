#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCNIKHKNBHM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MAFAGKDKCBE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19597F50)
#define MAFAGKDKCBE_EENLNNFKBOP_OFFSET UNITYSDK_OFFSET(0x19598190)
#define MAFAGKDKCBE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x195982A0)
#define MAFAGKDKCBE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19598180)
#define MAFAGKDKCBE_PAJKJKDELMF_OFFSET UNITYSDK_OFFSET(0x19598040)
#define MAFAGKDKCBE__CTOR_OFFSET UNITYSDK_OFFSET(0x19597F40)

inline static constexpr unsigned int MAFAGKDKCBE_TypeDefinitionIndex = 13268;

class MAFAGKDKCBE : public ::System::Object
{
public:
	::System::String* KNEDJPPOKOP; // 0x10
	::HCNIKHKNBHM HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 FJDELDDIINL; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36

	::System::Void _ctor(::HCNIKHKNBHM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HCNIKHKNBHM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MAFAGKDKCBE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFAGKDKCBE_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PAJKJKDELMF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFAGKDKCBE_PAJKJKDELMF_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFAGKDKCBE_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* EENLNNFKBOP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFAGKDKCBE_EENLNNFKBOP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MAFAGKDKCBE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
