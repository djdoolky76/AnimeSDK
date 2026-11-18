#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GFKDKBPPDJJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define HEABNMMLOCA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x193400A0)
#define HEABNMMLOCA_FKHBKOIJCKO_OFFSET UNITYSDK_OFFSET(0x1933FAE0)
#define HEABNMMLOCA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19340190)
#define HEABNMMLOCA_GOJHJGMHKMF_OFFSET UNITYSDK_OFFSET(0x1933FBF0)
#define HEABNMMLOCA_ILMKLGIDBJI_OFFSET UNITYSDK_OFFSET(0x1933FD00)
#define HEABNMMLOCA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1933FF50)
#define HEABNMMLOCA_LJDGCAFMGOD_OFFSET UNITYSDK_OFFSET(0x193401A0)
#define HEABNMMLOCA_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x1933FF60)
#define HEABNMMLOCA_OFPLDMLLCPK_OFFSET UNITYSDK_OFFSET(0x193402B0)
#define HEABNMMLOCA_PAKNEBFAJHF_OFFSET UNITYSDK_OFFSET(0x1933FE10)
#define HEABNMMLOCA__CTOR_OFFSET UNITYSDK_OFFSET(0x1933FAD0)

inline static constexpr unsigned int HEABNMMLOCA_TypeDefinitionIndex = 14370;

class HEABNMMLOCA : public ::System::Object
{
public:
	::System::String* ILNAMIMPHBA; // 0x10
	::System::String* CLFNHHFFHNO; // 0x18
	::System::String* AGONABNBDNM; // 0x20
	::GFKDKBPPDJJ HBDPAIKANDB; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::String* MDPKLBGDJNL; // 0x40
	::System::String* POGLMJNLBLO; // 0x48
	::System::Int32 JABJBJHKDMH; // 0x50
	::System::Byte ACIOBDEBDNK; // 0x54
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x55
	::System::Byte CNIAANMNOCF; // 0x56
	::System::Byte _padding0[0x1];
	::System::Int32 NKBBFFCPPPA; // 0x58
	::System::Int32 HENOPFJCCDG; // 0x5C

	::System::Void _ctor(::GFKDKBPPDJJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GFKDKBPPDJJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HEABNMMLOCA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* FKHBKOIJCKO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEABNMMLOCA_FKHBKOIJCKO_OFFSET))(this);
	}

	::System::String* GOJHJGMHKMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEABNMMLOCA_GOJHJGMHKMF_OFFSET))(this);
	}

	::System::String* ILMKLGIDBJI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEABNMMLOCA_ILMKLGIDBJI_OFFSET))(this);
	}

	::System::Int32 PAKNEBFAJHF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEABNMMLOCA_PAKNEBFAJHF_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEABNMMLOCA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEABNMMLOCA_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEABNMMLOCA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEABNMMLOCA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* LJDGCAFMGOD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEABNMMLOCA_LJDGCAFMGOD_OFFSET))(this);
	}

	::System::Int32 OFPLDMLLCPK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEABNMMLOCA_OFPLDMLLCPK_OFFSET))(this);
	}
};
