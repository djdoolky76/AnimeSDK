#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMOFEMCCJFE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MCCDFHDGFCE_AJEPONDFFLC_OFFSET UNITYSDK_OFFSET(0x19DAF870)
#define MCCDFHDGFCE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19DAF9B0)
#define MCCDFHDGFCE_FENENGEMOFG_OFFSET UNITYSDK_OFFSET(0x19DAF620)
#define MCCDFHDGFCE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19DAFAA0)
#define MCCDFHDGFCE_KLPGMJMEFLO_OFFSET UNITYSDK_OFFSET(0x19DAF760)
#define MCCDFHDGFCE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19DAF610)
#define MCCDFHDGFCE_NIFCDDGDILA_OFFSET UNITYSDK_OFFSET(0x19DAF4D0)
#define MCCDFHDGFCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19DAF4C0)

inline static constexpr unsigned int MCCDFHDGFCE_TypeDefinitionIndex = 12746;

class MCCDFHDGFCE : public ::System::Object
{
public:
	::System::String* EJAFLNMMNDE; // 0x10
	::BMOFEMCCJFE HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 BLAIDFNECKO; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x35
	::System::Byte CNIAANMNOCF; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 HODKDBBBLFN; // 0x38
	::System::Int32 KJEAGOGPENB; // 0x3C

	::System::Void _ctor(::BMOFEMCCJFE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BMOFEMCCJFE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MCCDFHDGFCE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 NIFCDDGDILA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCDFHDGFCE_NIFCDDGDILA_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCDFHDGFCE_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 FENENGEMOFG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCDFHDGFCE_FENENGEMOFG_OFFSET))(this);
	}

	::System::String* KLPGMJMEFLO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCDFHDGFCE_KLPGMJMEFLO_OFFSET))(this);
	}

	::System::Int32 AJEPONDFFLC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCDFHDGFCE_AJEPONDFFLC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCDFHDGFCE_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MCCDFHDGFCE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
