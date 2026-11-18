#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJCMOELDGOK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define JNLOHEEHGNK_BFFABGKLIOH_OFFSET UNITYSDK_OFFSET(0x17C2DF40)
#define JNLOHEEHGNK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17C2E3C0)
#define JNLOHEEHGNK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17C2E0D0)
#define JNLOHEEHGNK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17C2E0E0)
#define JNLOHEEHGNK_PHIBNHEKBBH_OFFSET UNITYSDK_OFFSET(0x17C2E230)
#define JNLOHEEHGNK_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x17C2E0F0)
#define JNLOHEEHGNK__CTOR_OFFSET UNITYSDK_OFFSET(0x17C2DF30)

inline static constexpr unsigned int JNLOHEEHGNK_TypeDefinitionIndex = 17320;

class JNLOHEEHGNK : public ::System::Object
{
public:
	::System::String* JGKEGIAFJNO; // 0x10
	::System::String* EAGNIOADKCA; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::GJCMOELDGOK HBDPAIKANDB; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte GCHCDJCFCEG; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A
	::System::Byte ACIOBDEBDNK; // 0x3B
	::System::Int32 PCMOJLNOPPM; // 0x3C

	::System::Void _ctor(::GJCMOELDGOK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GJCMOELDGOK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JNLOHEEHGNK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* BFFABGKLIOH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLOHEEHGNK_BFFABGKLIOH_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JNLOHEEHGNK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLOHEEHGNK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLOHEEHGNK_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* PHIBNHEKBBH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLOHEEHGNK_PHIBNHEKBBH_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLOHEEHGNK_COFGIJJOFLP_OFFSET))(this);
	}
};
