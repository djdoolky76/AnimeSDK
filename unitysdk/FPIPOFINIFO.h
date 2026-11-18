#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJHCCPIJLHJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define FPIPOFINIFO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A4CE070)
#define FPIPOFINIFO_EFOELIKLAFG_OFFSET UNITYSDK_OFFSET(0x1A4CE160)
#define FPIPOFINIFO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A4CE270)
#define FPIPOFINIFO_GEDCIEFJJFO_OFFSET UNITYSDK_OFFSET(0x1A4CDE20)
#define FPIPOFINIFO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A4CDE10)
#define FPIPOFINIFO_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1A4CDF30)
#define FPIPOFINIFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4CDE00)

inline static constexpr unsigned int FPIPOFINIFO_TypeDefinitionIndex = 10275;

class FPIPOFINIFO : public ::System::Object
{
public:
	::System::String* PMAFBLCFBPP; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::System::String* IJIGLEBBNCP; // 0x20
	::LJHCCPIJLHJ HBDPAIKANDB; // 0x28
	::System::Int32 PCMOJLNOPPM; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x3D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3E

	::System::Void _ctor(::LJHCCPIJLHJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LJHCCPIJLHJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FPIPOFINIFO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIPOFINIFO_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* GEDCIEFJJFO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIPOFINIFO_GEDCIEFJJFO_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIPOFINIFO_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIPOFINIFO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* EFOELIKLAFG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIPOFINIFO_EFOELIKLAFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FPIPOFINIFO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
