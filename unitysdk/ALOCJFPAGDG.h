#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJNPFEABOGL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define ALOCJFPAGDG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17EE8920)
#define ALOCJFPAGDG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17EE8910)
#define ALOCJFPAGDG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17EE8B50)
#define ALOCJFPAGDG_PEJMELDJKBH_OFFSET UNITYSDK_OFFSET(0x17EE8A10)
#define ALOCJFPAGDG__CTOR_OFFSET UNITYSDK_OFFSET(0x17EE8900)

inline static constexpr unsigned int ALOCJFPAGDG_TypeDefinitionIndex = 17225;

class ALOCJFPAGDG : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::BJNPFEABOGL HBDPAIKANDB; // 0x18
	::System::Int32 JGLEBILJEJK; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte CNIAANMNOCF; // 0x2E

	::System::Void _ctor(::BJNPFEABOGL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BJNPFEABOGL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ALOCJFPAGDG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ALOCJFPAGDG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOCJFPAGDG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PEJMELDJKBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOCJFPAGDG_PEJMELDJKBH_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOCJFPAGDG_LJANCIBECFG_OFFSET))(this);
	}
};
