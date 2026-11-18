#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGOONPLGFHF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MFPLNGMDIGI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B314000)
#define MFPLNGMDIGI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B314370)
#define MFPLNGMDIGI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B314490)
#define MFPLNGMDIGI_MEHAPAMMBEO_OFFSET UNITYSDK_OFFSET(0x1B314380)
#define MFPLNGMDIGI_NIFCDDGDILA_OFFSET UNITYSDK_OFFSET(0x1B3140F0)
#define MFPLNGMDIGI_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B314230)
#define MFPLNGMDIGI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B313FF0)

inline static constexpr unsigned int MFPLNGMDIGI_TypeDefinitionIndex = 14595;

class MFPLNGMDIGI : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* LIJFFEABALF; // 0x18
	::IGOONPLGFHF HBDPAIKANDB; // 0x20
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 HODKDBBBLFN; // 0x34
	::System::Int32 PCMOJLNOPPM; // 0x38

	::System::Void _ctor(::IGOONPLGFHF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IGOONPLGFHF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MFPLNGMDIGI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPLNGMDIGI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 NIFCDDGDILA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPLNGMDIGI_NIFCDDGDILA_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPLNGMDIGI_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MFPLNGMDIGI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* MEHAPAMMBEO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPLNGMDIGI_MEHAPAMMBEO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPLNGMDIGI_LJANCIBECFG_OFFSET))(this);
	}
};
