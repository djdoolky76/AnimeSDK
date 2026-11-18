#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOGCLAEFGPA_APJFIJGMBEK_OFFSET UNITYSDK_OFFSET(0x363D60)
#define FOGCLAEFGPA_BMAGHHFFGCI_OFFSET UNITYSDK_OFFSET(0x359150)
#define FOGCLAEFGPA_DMOLIELPHPA_OFFSET UNITYSDK_OFFSET(0x3CE9E0)
#define FOGCLAEFGPA_GAJANBNDJNE_OFFSET UNITYSDK_OFFSET(0x3668E0)
#define FOGCLAEFGPA_JJJOLFLHEDI_OFFSET UNITYSDK_OFFSET(0x3A45D0)
#define FOGCLAEFGPA_KLPLGCAEMCA_OFFSET UNITYSDK_OFFSET(0x5D0520)
#define FOGCLAEFGPA_NGIGLEAHIFG_OFFSET UNITYSDK_OFFSET(0x52D8C0)
#define FOGCLAEFGPA_PDFPILBJCMI_OFFSET UNITYSDK_OFFSET(0x359320)
#define FOGCLAEFGPA__CCTOR_OFFSET UNITYSDK_OFFSET(0x179C10B0)
#define FOGCLAEFGPA__CTOR_OFFSET UNITYSDK_OFFSET(0x6C98D0)

inline static constexpr unsigned int FOGCLAEFGPA_TypeDefinitionIndex = 74617;

struct alignas(4) FOGCLAEFGPA
{
	static ::FOGCLAEFGPA* StaticGet_FDJHEBHLJLD()
	{
		return (::FOGCLAEFGPA*)Il2CppClass::FromTypeDefinitionIndex(FOGCLAEFGPA_TypeDefinitionIndex)->GetStaticField(0xE290);
	}
	::System::UInt32 _CIACMIDNMEG_k__BackingField; // 0x10
	::System::UInt32 _MOJIHAILMDL_k__BackingField; // 0x14
	::System::UInt32 _KBLLFCPODOB_k__BackingField; // 0x18
	::System::UInt32 _OJLFPCPFPBG_k__BackingField; // 0x1C

	::System::Void _ctor(::System::UInt32 JBGLCAFPGHK, ::System::UInt32 KKAMDFNMMJH, ::System::UInt32 FPJHAFHNHHI, ::System::UInt32 GDNMMCKIJHJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FOGCLAEFGPA__CTOR_OFFSET))(this, JBGLCAFPGHK, KKAMDFNMMJH, FPJHAFHNHHI, GDNMMCKIJHJ);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOGCLAEFGPA__CCTOR_OFFSET))();
	}

	::System::Void NGIGLEAHIFG(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOGCLAEFGPA_NGIGLEAHIFG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JJJOLFLHEDI(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOGCLAEFGPA_JJJOLFLHEDI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt32 PDFPILBJCMI()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOGCLAEFGPA_PDFPILBJCMI_OFFSET))(this);
	}

	::System::Void KLPLGCAEMCA(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOGCLAEFGPA_KLPLGCAEMCA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt32 GAJANBNDJNE()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOGCLAEFGPA_GAJANBNDJNE_OFFSET))(this);
	}

	::System::UInt32 APJFIJGMBEK()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOGCLAEFGPA_APJFIJGMBEK_OFFSET))(this);
	}

	::System::UInt32 DMOLIELPHPA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOGCLAEFGPA_DMOLIELPHPA_OFFSET))(this);
	}

	::System::Void BMAGHHFFGCI(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOGCLAEFGPA_BMAGHHFFGCI_OFFSET))(this, EGEGIMGMJHN);
	}
};
