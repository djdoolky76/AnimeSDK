#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PMFFHPKLEEN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define DOPMGPICPBH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17789A10)
#define DOPMGPICPBH_CPPMMKLJJOP_OFFSET UNITYSDK_OFFSET(0x17789C20)
#define DOPMGPICPBH_DCEBOJGIMON_OFFSET UNITYSDK_OFFSET(0x177896B0)
#define DOPMGPICPBH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17789B00)
#define DOPMGPICPBH_GJEMOMABJDP_OFFSET UNITYSDK_OFFSET(0x17789D60)
#define DOPMGPICPBH_HEEIDGJBAAK_OFFSET UNITYSDK_OFFSET(0x177897F0)
#define DOPMGPICPBH_JANOCOLHPIJ_OFFSET UNITYSDK_OFFSET(0x17789B10)
#define DOPMGPICPBH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x177896A0)
#define DOPMGPICPBH_NEIPFJOAMEN_OFFSET UNITYSDK_OFFSET(0x17789900)
#define DOPMGPICPBH__CTOR_OFFSET UNITYSDK_OFFSET(0x17789690)

inline static constexpr unsigned int DOPMGPICPBH_TypeDefinitionIndex = 16478;

class DOPMGPICPBH : public ::System::Object
{
public:
	::System::String* CNDLJMJALID; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::System::String* CLDLCKBOGKD; // 0x20
	::System::String* NHOACBHLAKN; // 0x28
	::PMFFHPKLEEN HBDPAIKANDB; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x40
	::System::Byte CNIAANMNOCF; // 0x41
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 EHEPKDIFPAC; // 0x44
	::System::Int32 PFEJMPLKDPP; // 0x48
	::System::Int32 LJHJDLPAJOI; // 0x4C

	::System::Void _ctor(::PMFFHPKLEEN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PMFFHPKLEEN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DOPMGPICPBH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPMGPICPBH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 DCEBOJGIMON()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPMGPICPBH_DCEBOJGIMON_OFFSET))(this);
	}

	::System::String* HEEIDGJBAAK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPMGPICPBH_HEEIDGJBAAK_OFFSET))(this);
	}

	::System::String* NEIPFJOAMEN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPMGPICPBH_NEIPFJOAMEN_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPMGPICPBH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DOPMGPICPBH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* JANOCOLHPIJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPMGPICPBH_JANOCOLHPIJ_OFFSET))(this);
	}

	::System::Int32 CPPMMKLJJOP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPMGPICPBH_CPPMMKLJJOP_OFFSET))(this);
	}

	::System::Int32 GJEMOMABJDP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPMGPICPBH_GJEMOMABJDP_OFFSET))(this);
	}
};
