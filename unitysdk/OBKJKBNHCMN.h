#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OHGKGHBKGCK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define OBKJKBNHCMN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1CFF4C70)
#define OBKJKBNHCMN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1CFF4D60)
#define OBKJKBNHCMN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1CFF4EB0)
#define OBKJKBNHCMN_LMOGCFLOAEE_OFFSET UNITYSDK_OFFSET(0x1CFF4D70)
#define OBKJKBNHCMN__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF4C60)

inline static constexpr unsigned int OBKJKBNHCMN_TypeDefinitionIndex = 13481;

class OBKJKBNHCMN : public ::System::Object
{
public:
	::OHGKGHBKGCK HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Byte CNIAANMNOCF; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x29
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 FBEIJODMOOO; // 0x2C

	::System::Void _ctor(::OHGKGHBKGCK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OHGKGHBKGCK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OBKJKBNHCMN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKJKBNHCMN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OBKJKBNHCMN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 LMOGCFLOAEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKJKBNHCMN_LMOGCFLOAEE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKJKBNHCMN_LJANCIBECFG_OFFSET))(this);
	}
};
