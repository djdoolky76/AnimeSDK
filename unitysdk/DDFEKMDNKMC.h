#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCAHMONLDAE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define DDFEKMDNKMC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B9A2890)
#define DDFEKMDNKMC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B9A2880)
#define DDFEKMDNKMC_GCEBCIOKFEH_OFFSET UNITYSDK_OFFSET(0x1B9A2630)
#define DDFEKMDNKMC_IMNDONCPHID_OFFSET UNITYSDK_OFFSET(0x1B9A24F0)
#define DDFEKMDNKMC_JKNFLMKLBLB_OFFSET UNITYSDK_OFFSET(0x1B9A23E0)
#define DDFEKMDNKMC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B9A23D0)
#define DDFEKMDNKMC_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B9A2740)
#define DDFEKMDNKMC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9A23C0)

inline static constexpr unsigned int DDFEKMDNKMC_TypeDefinitionIndex = 14978;

class DDFEKMDNKMC : public ::System::Object
{
public:
	::System::String* DELMGGOOFEF; // 0x10
	::System::String* FPNFNIKKCEN; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::DCAHMONLDAE HBDPAIKANDB; // 0x28
	::System::Int32 PCMOJLNOPPM; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x3D
	::System::Byte CNIAANMNOCF; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Int32 HCHEGEPMCEC; // 0x40

	::System::Void _ctor(::DCAHMONLDAE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DCAHMONLDAE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DDFEKMDNKMC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFEKMDNKMC_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* JKNFLMKLBLB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFEKMDNKMC_JKNFLMKLBLB_OFFSET))(this);
	}

	::System::Int32 IMNDONCPHID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFEKMDNKMC_IMNDONCPHID_OFFSET))(this);
	}

	::System::String* GCEBCIOKFEH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFEKMDNKMC_GCEBCIOKFEH_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFEKMDNKMC_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DDFEKMDNKMC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFEKMDNKMC_COFGIJJOFLP_OFFSET))(this);
	}
};
