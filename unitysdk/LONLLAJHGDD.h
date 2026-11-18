#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AEPLGFNFMFA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define LONLLAJHGDD_CMFNJOGIHOP_OFFSET UNITYSDK_OFFSET(0x19DAB900)
#define LONLLAJHGDD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19DABA40)
#define LONLLAJHGDD_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x19DABDB0)
#define LONLLAJHGDD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19DABEC0)
#define LONLLAJHGDD_GFMDDADFFNC_OFFSET UNITYSDK_OFFSET(0x19DAB6B0)
#define LONLLAJHGDD_HJEFCNNHHEO_OFFSET UNITYSDK_OFFSET(0x19DABC70)
#define LONLLAJHGDD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19DAC010)
#define LONLLAJHGDD_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x19DABED0)
#define LONLLAJHGDD_MBBIMKJCKKN_OFFSET UNITYSDK_OFFSET(0x19DAB7C0)
#define LONLLAJHGDD_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19DABB30)
#define LONLLAJHGDD__CTOR_OFFSET UNITYSDK_OFFSET(0x19DAB6A0)

inline static constexpr unsigned int LONLLAJHGDD_TypeDefinitionIndex = 12161;

class LONLLAJHGDD : public ::System::Object
{
public:
	::AEPLGFNFMFA HBDPAIKANDB; // 0x10
	::System::String* IENCBDEPMFJ; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::String* LGOKJHBJJGE; // 0x30
	::System::Int32 DLKCAJJEMCP; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x3D
	::System::Byte ACIOBDEBDNK; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Int32 OKHIOCNEJPB; // 0x40
	::System::Int32 JABJBJHKDMH; // 0x44
	::System::Int32 PCMOJLNOPPM; // 0x48
	::System::Int32 ONPMJGJBNOA; // 0x4C

	::System::Void _ctor(::AEPLGFNFMFA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AEPLGFNFMFA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LONLLAJHGDD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* GFMDDADFFNC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LONLLAJHGDD_GFMDDADFFNC_OFFSET))(this);
	}

	::System::Int32 MBBIMKJCKKN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LONLLAJHGDD_MBBIMKJCKKN_OFFSET))(this);
	}

	::System::Int32 CMFNJOGIHOP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LONLLAJHGDD_CMFNJOGIHOP_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LONLLAJHGDD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LONLLAJHGDD_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 HJEFCNNHHEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LONLLAJHGDD_HJEFCNNHHEO_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LONLLAJHGDD_DECMGICKDLH_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LONLLAJHGDD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LONLLAJHGDD_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LONLLAJHGDD_LJANCIBECFG_OFFSET))(this);
	}
};
