#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNLLCCDEOGO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define OFNAFBDBMFD_CHNNEONAHBA_OFFSET UNITYSDK_OFFSET(0x1AB28DB0)
#define OFNAFBDBMFD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1AB28CC0)
#define OFNAFBDBMFD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1AB28CB0)
#define OFNAFBDBMFD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1AB28CA0)
#define OFNAFBDBMFD_MOFHCPOJCPE_OFFSET UNITYSDK_OFFSET(0x1AB28B90)
#define OFNAFBDBMFD_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1AB28A50)
#define OFNAFBDBMFD__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB28A40)

inline static constexpr unsigned int OFNAFBDBMFD_TypeDefinitionIndex = 14984;

class OFNAFBDBMFD : public ::System::Object
{
public:
	::System::String* LKGFOHACFEO; // 0x10
	::BNLLCCDEOGO HBDPAIKANDB; // 0x18
	::System::String* PNCNACIGOAD; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Int32 PCMOJLNOPPM; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x3D
	::System::Byte CNIAANMNOCF; // 0x3E

	::System::Void _ctor(::BNLLCCDEOGO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BNLLCCDEOGO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OFNAFBDBMFD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNAFBDBMFD_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* MOFHCPOJCPE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNAFBDBMFD_MOFHCPOJCPE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNAFBDBMFD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OFNAFBDBMFD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNAFBDBMFD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* CHNNEONAHBA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNAFBDBMFD_CHNNEONAHBA_OFFSET))(this);
	}
};
