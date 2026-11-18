#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHBJNJJCBPP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define ELFBMHAHPIK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B0FD8D0)
#define ELFBMHAHPIK_FADPBKFIBDD_OFFSET UNITYSDK_OFFSET(0x1B0FD9E0)
#define ELFBMHAHPIK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B0FD9C0)
#define ELFBMHAHPIK_IGDCIFGOCCP_OFFSET UNITYSDK_OFFSET(0x1B0FD7C0)
#define ELFBMHAHPIK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B0FD9D0)
#define ELFBMHAHPIK_OPHJPODKMHM_OFFSET UNITYSDK_OFFSET(0x1B0FD570)
#define ELFBMHAHPIK_PIGMOAKNCBI_OFFSET UNITYSDK_OFFSET(0x1B0FD6B0)
#define ELFBMHAHPIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0FD560)

inline static constexpr unsigned int ELFBMHAHPIK_TypeDefinitionIndex = 10428;

class ELFBMHAHPIK : public ::System::Object
{
public:
	::System::String* BHMOGLIOECA; // 0x10
	::System::String* BMKCIKMHNPJ; // 0x18
	::LHBJNJJCBPP HBDPAIKANDB; // 0x20
	::System::String* IPAOAEJLOGO; // 0x30
	::System::String* IMAFCDDJOME; // 0x38
	::System::String* KGKLAFAMMIG; // 0x40
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x48
	::System::Int32 HPEPLLEGALI; // 0x50
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x54
	::System::Byte CNIAANMNOCF; // 0x55
	::System::Byte ACIOBDEBDNK; // 0x56

	::System::Void _ctor(::LHBJNJJCBPP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LHBJNJJCBPP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ELFBMHAHPIK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 OPHJPODKMHM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELFBMHAHPIK_OPHJPODKMHM_OFFSET))(this);
	}

	::System::String* PIGMOAKNCBI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELFBMHAHPIK_PIGMOAKNCBI_OFFSET))(this);
	}

	::System::String* IGDCIFGOCCP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELFBMHAHPIK_IGDCIFGOCCP_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELFBMHAHPIK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ELFBMHAHPIK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELFBMHAHPIK_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* FADPBKFIBDD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELFBMHAHPIK_FADPBKFIBDD_OFFSET))(this);
	}
};
