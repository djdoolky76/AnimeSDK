#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NCPOPLKKNFI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define CIIHMGCJIMD_ABECMANHNLA_OFFSET UNITYSDK_OFFSET(0x1A545560)
#define CIIHMGCJIMD_ACPLPHAAPBA_OFFSET UNITYSDK_OFFSET(0x1A545340)
#define CIIHMGCJIMD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A545250)
#define CIIHMGCJIMD_FKHBKOIJCKO_OFFSET UNITYSDK_OFFSET(0x1A545450)
#define CIIHMGCJIMD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A5456A0)
#define CIIHMGCJIMD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A5456B0)
#define CIIHMGCJIMD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A545240)

inline static constexpr unsigned int CIIHMGCJIMD_TypeDefinitionIndex = 13928;

class CIIHMGCJIMD : public ::System::Object
{
public:
	::System::String* BOAPGNPGMEE; // 0x10
	::System::String* IENCBDEPMFJ; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::NCPOPLKKNFI HBDPAIKANDB; // 0x28
	::System::String* CLFNHHFFHNO; // 0x38
	::System::Int32 DPDDPMJMLMN; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x44
	::System::Byte CNIAANMNOCF; // 0x45
	::System::Byte ACIOBDEBDNK; // 0x46
	::System::Byte _padding0[0x1];
	::System::Int32 OEENDPFNCJF; // 0x48

	::System::Void _ctor(::NCPOPLKKNFI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NCPOPLKKNFI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CIIHMGCJIMD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIHMGCJIMD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* ACPLPHAAPBA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIHMGCJIMD_ACPLPHAAPBA_OFFSET))(this);
	}

	::System::String* FKHBKOIJCKO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIHMGCJIMD_FKHBKOIJCKO_OFFSET))(this);
	}

	::System::Int32 ABECMANHNLA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIHMGCJIMD_ABECMANHNLA_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CIIHMGCJIMD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIHMGCJIMD_LJANCIBECFG_OFFSET))(this);
	}
};
