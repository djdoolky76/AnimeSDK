#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMOMGAJINCE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define NNEGIBJGFGP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1D0CD3B0)
#define NNEGIBJGFGP_FCKAKOCNNKJ_OFFSET UNITYSDK_OFFSET(0x1D0CD4B0)
#define NNEGIBJGFGP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1D0CD4A0)
#define NNEGIBJGFGP_GPBFENDAJMF_OFFSET UNITYSDK_OFFSET(0x1D0CD2A0)
#define NNEGIBJGFGP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1D0CD180)
#define NNEGIBJGFGP_PJCCDMGHNJP_OFFSET UNITYSDK_OFFSET(0x1D0CD190)
#define NNEGIBJGFGP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0CD170)

inline static constexpr unsigned int NNEGIBJGFGP_TypeDefinitionIndex = 15252;

class NNEGIBJGFGP : public ::System::Object
{
public:
	::System::String* JOMLOHJEDKL; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::JMOMGAJINCE HBDPAIKANDB; // 0x20
	::System::String* GPNJCCHKLIP; // 0x30
	::System::Int32 NHGBCHAINPA; // 0x38
	::System::Byte CNIAANMNOCF; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x3D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3E

	::System::Void _ctor(::JMOMGAJINCE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JMOMGAJINCE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NNEGIBJGFGP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEGIBJGFGP_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* PJCCDMGHNJP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEGIBJGFGP_PJCCDMGHNJP_OFFSET))(this);
	}

	::System::String* GPBFENDAJMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEGIBJGFGP_GPBFENDAJMF_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEGIBJGFGP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NNEGIBJGFGP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 FCKAKOCNNKJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEGIBJGFGP_FCKAKOCNNKJ_OFFSET))(this);
	}
};
