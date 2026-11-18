#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PCNLEECCLAC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define FIFLFGDMKHJ_CLCJAJFGOKN_OFFSET UNITYSDK_OFFSET(0x17AB3B80)
#define FIFLFGDMKHJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17AB3830)
#define FIFLFGDMKHJ_FECFCHMJHML_OFFSET UNITYSDK_OFFSET(0x17AB3930)
#define FIFLFGDMKHJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17AB3920)
#define FIFLFGDMKHJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17AB3CC0)
#define FIFLFGDMKHJ_OENEGODNAAE_OFFSET UNITYSDK_OFFSET(0x17AB3A40)
#define FIFLFGDMKHJ_PPLLGAOKLCB_OFFSET UNITYSDK_OFFSET(0x17AB3CD0)
#define FIFLFGDMKHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17AB3820)

inline static constexpr unsigned int FIFLFGDMKHJ_TypeDefinitionIndex = 10506;

class FIFLFGDMKHJ : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* AFAFGDJPGNF; // 0x18
	::System::String* MGGCLNIDGOM; // 0x20
	::PCNLEECCLAC HBDPAIKANDB; // 0x28
	::System::Int32 FAEINHBPHLF; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x3D
	::System::Byte ACIOBDEBDNK; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Int32 EJHELOOGNBN; // 0x40

	::System::Void _ctor(::PCNLEECCLAC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PCNLEECCLAC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FIFLFGDMKHJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFLFGDMKHJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FIFLFGDMKHJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* FECFCHMJHML()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFLFGDMKHJ_FECFCHMJHML_OFFSET))(this);
	}

	::System::Int32 OENEGODNAAE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFLFGDMKHJ_OENEGODNAAE_OFFSET))(this);
	}

	::System::Int32 CLCJAJFGOKN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFLFGDMKHJ_CLCJAJFGOKN_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFLFGDMKHJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* PPLLGAOKLCB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFLFGDMKHJ_PPLLGAOKLCB_OFFSET))(this);
	}
};
