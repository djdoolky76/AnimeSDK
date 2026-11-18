#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FACNPAENIFN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define LOAGKAGGFGM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BB134F0)
#define LOAGKAGGFGM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BB135F0)
#define LOAGKAGGFGM_JABNIKBHMAA_OFFSET UNITYSDK_OFFSET(0x1BB13600)
#define LOAGKAGGFGM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BB135E0)
#define LOAGKAGGFGM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB134E0)

inline static constexpr unsigned int LOAGKAGGFGM_TypeDefinitionIndex = 10832;

class LOAGKAGGFGM : public ::System::Object
{
public:
	::FACNPAENIFN HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 NPHLAHOILHA; // 0x28
	::System::Byte CNIAANMNOCF; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x2D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2E

	::System::Void _ctor(::FACNPAENIFN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FACNPAENIFN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LOAGKAGGFGM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOAGKAGGFGM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOAGKAGGFGM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LOAGKAGGFGM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 JABNIKBHMAA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOAGKAGGFGM_JABNIKBHMAA_OFFSET))(this);
	}
};
