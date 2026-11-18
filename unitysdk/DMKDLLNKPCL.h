#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLOEIMJEGIH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define DMKDLLNKPCL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A5580F0)
#define DMKDLLNKPCL_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x1A557FB0)
#define DMKDLLNKPCL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A5581E0)
#define DMKDLLNKPCL_FONCPNEEPDL_OFFSET UNITYSDK_OFFSET(0x1A5581F0)
#define DMKDLLNKPCL_GFMPNMBHIEO_OFFSET UNITYSDK_OFFSET(0x1A557E70)
#define DMKDLLNKPCL_IOPJEBKCIHN_OFFSET UNITYSDK_OFFSET(0x1A557D60)
#define DMKDLLNKPCL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A558330)
#define DMKDLLNKPCL_LJCGHMEPJNP_OFFSET UNITYSDK_OFFSET(0x1A558340)
#define DMKDLLNKPCL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A557D50)

inline static constexpr unsigned int DMKDLLNKPCL_TypeDefinitionIndex = 12180;

class DMKDLLNKPCL : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* OLLNHJJEAOG; // 0x18
	::HLOEIMJEGIH HBDPAIKANDB; // 0x20
	::System::String* EGCJJCNDAFN; // 0x30
	::System::Int32 KFEKHHFFEJN; // 0x38
	::System::Byte CNIAANMNOCF; // 0x3C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3D
	::System::Byte ACIOBDEBDNK; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Int32 BDLDGGALJPI; // 0x40
	::System::Int32 BPOJHCFJCAH; // 0x44

	::System::Void _ctor(::HLOEIMJEGIH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HLOEIMJEGIH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DMKDLLNKPCL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* IOPJEBKCIHN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKDLLNKPCL_IOPJEBKCIHN_OFFSET))(this);
	}

	::System::Int32 GFMPNMBHIEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKDLLNKPCL_GFMPNMBHIEO_OFFSET))(this);
	}

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKDLLNKPCL_DNKLBHKEDEM_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKDLLNKPCL_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DMKDLLNKPCL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 FONCPNEEPDL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKDLLNKPCL_FONCPNEEPDL_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKDLLNKPCL_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* LJCGHMEPJNP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKDLLNKPCL_LJCGHMEPJNP_OFFSET))(this);
	}
};
