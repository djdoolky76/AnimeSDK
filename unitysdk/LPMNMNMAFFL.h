#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFGAABOCKPE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define LPMNMNMAFFL_BAEEAKLGIGE_OFFSET UNITYSDK_OFFSET(0x19DAD510)
#define LPMNMNMAFFL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19DAD410)
#define LPMNMNMAFFL_DNGHKOPHJCN_OFFSET UNITYSDK_OFFSET(0x19DAD2D0)
#define LPMNMNMAFFL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19DAD500)
#define LPMNMNMAFFL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19DAD8D0)
#define LPMNMNMAFFL_PGFCLLGLOCG_OFFSET UNITYSDK_OFFSET(0x19DAD650)
#define LPMNMNMAFFL_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19DAD790)
#define LPMNMNMAFFL__CTOR_OFFSET UNITYSDK_OFFSET(0x19DAD2C0)

inline static constexpr unsigned int LPMNMNMAFFL_TypeDefinitionIndex = 14176;

class LPMNMNMAFFL : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::FFGAABOCKPE HBDPAIKANDB; // 0x18
	::System::Int32 LLIOEJPDNCF; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte CNIAANMNOCF; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Int32 EIGCFEHJEDC; // 0x34
	::System::Int32 DBBDBGBDIHC; // 0x38

	::System::Void _ctor(::FFGAABOCKPE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FFGAABOCKPE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LPMNMNMAFFL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 DNGHKOPHJCN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMNMNMAFFL_DNGHKOPHJCN_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMNMNMAFFL_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LPMNMNMAFFL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 BAEEAKLGIGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMNMNMAFFL_BAEEAKLGIGE_OFFSET))(this);
	}

	::System::Int32 PGFCLLGLOCG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMNMNMAFFL_PGFCLLGLOCG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMNMNMAFFL_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMNMNMAFFL_LJANCIBECFG_OFFSET))(this);
	}
};
