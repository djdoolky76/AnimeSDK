#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDJDJKEEHNM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define KCDKCNDNCCH_ACBOKMCCCFG_OFFSET UNITYSDK_OFFSET(0x18DE2770)
#define KCDKCNDNCCH_CGACDBPFDNJ_OFFSET UNITYSDK_OFFSET(0x18DE2620)
#define KCDKCNDNCCH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18DE2080)
#define KCDKCNDNCCH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18DE2760)
#define KCDKCNDNCCH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18DE24D0)
#define KCDKCNDNCCH_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x18DE1F40)
#define KCDKCNDNCCH_MCPGCCECEGE_OFFSET UNITYSDK_OFFSET(0x18DE2170)
#define KCDKCNDNCCH_MNANMJGNLLM_OFFSET UNITYSDK_OFFSET(0x18DE23C0)
#define KCDKCNDNCCH_OMEENAIGOKL_OFFSET UNITYSDK_OFFSET(0x18DE2280)
#define KCDKCNDNCCH_OOAMMDCDIGF_OFFSET UNITYSDK_OFFSET(0x18DE24E0)
#define KCDKCNDNCCH__CTOR_OFFSET UNITYSDK_OFFSET(0x18DE1F30)

inline static constexpr unsigned int KCDKCNDNCCH_TypeDefinitionIndex = 14278;

class KCDKCNDNCCH : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* HPCGBPFMJEN; // 0x18
	::System::String* ECFGBBADCIK; // 0x20
	::EDJDJKEEHNM HBDPAIKANDB; // 0x28
	::System::Int32 AOGEGMMMOHD; // 0x38
	::System::Int32 CJDCMOMKFMD; // 0x3C
	::System::Int32 FAJAHHMEIFB; // 0x40
	::System::Int32 KAKLAAPGOKN; // 0x44
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x48
	::System::Byte CNIAANMNOCF; // 0x49
	::System::Byte ACIOBDEBDNK; // 0x4A
	::System::Byte _padding0[0x1];
	::System::Int32 JEDEMPHDCAK; // 0x4C

	::System::Void _ctor(::EDJDJKEEHNM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EDJDJKEEHNM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KCDKCNDNCCH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDKCNDNCCH_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDKCNDNCCH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* MCPGCCECEGE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDKCNDNCCH_MCPGCCECEGE_OFFSET))(this);
	}

	::System::Int32 OMEENAIGOKL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDKCNDNCCH_OMEENAIGOKL_OFFSET))(this);
	}

	::System::String* MNANMJGNLLM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDKCNDNCCH_MNANMJGNLLM_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDKCNDNCCH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 OOAMMDCDIGF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDKCNDNCCH_OOAMMDCDIGF_OFFSET))(this);
	}

	::System::Int32 CGACDBPFDNJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDKCNDNCCH_CGACDBPFDNJ_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KCDKCNDNCCH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 ACBOKMCCCFG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDKCNDNCCH_ACBOKMCCCFG_OFFSET))(this);
	}
};
