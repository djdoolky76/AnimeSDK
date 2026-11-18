#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JOGDEBNCHAB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define PEEKBNGLPHB_CHKLCDFBMLO_OFFSET UNITYSDK_OFFSET(0x1B346C10)
#define PEEKBNGLPHB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B346B10)
#define PEEKBNGLPHB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B346E90)
#define PEEKBNGLPHB_ICGGGGFAKIN_OFFSET UNITYSDK_OFFSET(0x1B346D50)
#define PEEKBNGLPHB_IDJOIAFBCDB_OFFSET UNITYSDK_OFFSET(0x1B346FE0)
#define PEEKBNGLPHB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B346C00)
#define PEEKBNGLPHB_LMBABJLBCLA_OFFSET UNITYSDK_OFFSET(0x1B346EA0)
#define PEEKBNGLPHB_MHECDHKOHNI_OFFSET UNITYSDK_OFFSET(0x1B347140)
#define PEEKBNGLPHB_OGNCEPHHIGI_OFFSET UNITYSDK_OFFSET(0x1B347280)
#define PEEKBNGLPHB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B346B00)

inline static constexpr unsigned int PEEKBNGLPHB_TypeDefinitionIndex = 10011;

class PEEKBNGLPHB : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* BKAPFHAFLBM; // 0x18
	::JOGDEBNCHAB HBDPAIKANDB; // 0x20
	::System::String* OPPOIACDPIF; // 0x30
	::System::Int32 OBKNEHPJMAD; // 0x38
	::System::Int32 GPDOOBOKKOA; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x41
	::System::Boolean OLEMNJABNPB; // 0x42
	::System::Byte ACIOBDEBDNK; // 0x43
	::System::Int32 ELFGCJKGHKK; // 0x44
	::System::Int32 AMOKAJMJCHP; // 0x48

	::System::Void _ctor(::JOGDEBNCHAB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JOGDEBNCHAB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PEEKBNGLPHB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEKBNGLPHB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEKBNGLPHB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 CHKLCDFBMLO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEKBNGLPHB_CHKLCDFBMLO_OFFSET))(this);
	}

	::System::Int32 ICGGGGFAKIN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEKBNGLPHB_ICGGGGFAKIN_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEEKBNGLPHB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 LMBABJLBCLA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEKBNGLPHB_LMBABJLBCLA_OFFSET))(this);
	}

	::System::Boolean IDJOIAFBCDB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEKBNGLPHB_IDJOIAFBCDB_OFFSET))(this);
	}

	::System::Int32 MHECDHKOHNI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEKBNGLPHB_MHECDHKOHNI_OFFSET))(this);
	}

	::System::String* OGNCEPHHIGI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEKBNGLPHB_OGNCEPHHIGI_OFFSET))(this);
	}
};
