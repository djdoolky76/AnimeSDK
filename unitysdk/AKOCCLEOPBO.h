#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDDMJBAJBNA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define AKOCCLEOPBO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17A72BA0)
#define AKOCCLEOPBO_EFOELIKLAFG_OFFSET UNITYSDK_OFFSET(0x17A72DD0)
#define AKOCCLEOPBO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17A72EF0)
#define AKOCCLEOPBO_GEDCIEFJJFO_OFFSET UNITYSDK_OFFSET(0x17A72F00)
#define AKOCCLEOPBO_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x17A72A60)
#define AKOCCLEOPBO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17A72EE0)
#define AKOCCLEOPBO_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x17A72C90)
#define AKOCCLEOPBO__CTOR_OFFSET UNITYSDK_OFFSET(0x17A72A50)

inline static constexpr unsigned int AKOCCLEOPBO_TypeDefinitionIndex = 16935;

class AKOCCLEOPBO : public ::System::Object
{
public:
	::HDDMJBAJBNA HBDPAIKANDB; // 0x10
	::System::String* PMAFBLCFBPP; // 0x20
	::System::String* IJIGLEBBNCP; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Int32 PCMOJLNOPPM; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x3D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Int32 POKJNGILNLB; // 0x40

	::System::Void _ctor(::HDDMJBAJBNA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HDDMJBAJBNA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AKOCCLEOPBO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOCCLEOPBO_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOCCLEOPBO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOCCLEOPBO_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* EFOELIKLAFG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOCCLEOPBO_EFOELIKLAFG_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOCCLEOPBO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKOCCLEOPBO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* GEDCIEFJJFO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOCCLEOPBO_GEDCIEFJJFO_OFFSET))(this);
	}
};
