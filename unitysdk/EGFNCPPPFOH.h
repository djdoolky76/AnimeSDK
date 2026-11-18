#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AEPEOOIOMKL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define EGFNCPPPFOH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x166268E0)
#define EGFNCPPPFOH_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x166269E0)
#define EGFNCPPPFOH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x166268D0)
#define EGFNCPPPFOH_HMDGCICMGJI_OFFSET UNITYSDK_OFFSET(0x16626AF0)
#define EGFNCPPPFOH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x166269D0)
#define EGFNCPPPFOH_NNNDPKGFFFM_OFFSET UNITYSDK_OFFSET(0x16626C30)
#define EGFNCPPPFOH__CTOR_OFFSET UNITYSDK_OFFSET(0x166268C0)

inline static constexpr unsigned int EGFNCPPPFOH_TypeDefinitionIndex = 12498;

class EGFNCPPPFOH : public ::System::Object
{
public:
	::System::String* OKOCAPIPGLA; // 0x10
	::System::String* OMDLAHBLCAM; // 0x18
	::AEPEOOIOMKL HBDPAIKANDB; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Int32 IMIDMHPHFDG; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x3D
	::System::Byte ACIOBDEBDNK; // 0x3E

	::System::Void _ctor(::AEPEOOIOMKL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AEPEOOIOMKL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EGFNCPPPFOH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EGFNCPPPFOH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFNCPPPFOH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFNCPPPFOH_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFNCPPPFOH_ENJENAJGHFI_OFFSET))(this);
	}

	::System::Int32 HMDGCICMGJI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFNCPPPFOH_HMDGCICMGJI_OFFSET))(this);
	}

	::System::String* NNNDPKGFFFM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFNCPPPFOH_NNNDPKGFFFM_OFFSET))(this);
	}
};
