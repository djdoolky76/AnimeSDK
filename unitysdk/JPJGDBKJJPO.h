#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AEIPDDFFIMJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define JPJGDBKJJPO_ACCDJOIMBAE_OFFSET UNITYSDK_OFFSET(0x19364A50)
#define JPJGDBKJJPO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19364960)
#define JPJGDBKJJPO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19364800)
#define JPJGDBKJJPO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19364950)
#define JPJGDBKJJPO_MHKKOFEKPHI_OFFSET UNITYSDK_OFFSET(0x19364810)
#define JPJGDBKJJPO_OOGJNLDFOLO_OFFSET UNITYSDK_OFFSET(0x193646C0)
#define JPJGDBKJJPO__CTOR_OFFSET UNITYSDK_OFFSET(0x193646B0)

inline static constexpr unsigned int JPJGDBKJJPO_TypeDefinitionIndex = 12825;

class JPJGDBKJJPO : public ::System::Object
{
public:
	::AEIPDDFFIMJ HBDPAIKANDB; // 0x10
	::System::String* MKOIOLHAMBA; // 0x20
	::System::String* KMLADELGPBP; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Int32 IJCGIOJKFPO; // 0x38
	::System::Int32 FGPFBDNOCPN; // 0x3C
	::System::Int32 JECMPHIAJCO; // 0x40
	::System::Int32 FNPCPGNGNAC; // 0x44
	::System::Int32 ODNACCFMFJM; // 0x48
	::System::Int32 CFMLELJAKFK; // 0x4C
	::System::Byte GCHCDJCFCEG; // 0x50
	::System::Byte CNIAANMNOCF; // 0x51
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x52
	::System::Byte ACIOBDEBDNK; // 0x53
	::System::Int32 AICFILHLIPF; // 0x54

	::System::Void _ctor(::AEIPDDFFIMJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AEIPDDFFIMJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JPJGDBKJJPO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 OOGJNLDFOLO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJGDBKJJPO_OOGJNLDFOLO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JPJGDBKJJPO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MHKKOFEKPHI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJGDBKJJPO_MHKKOFEKPHI_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJGDBKJJPO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJGDBKJJPO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 ACCDJOIMBAE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJGDBKJJPO_ACCDJOIMBAE_OFFSET))(this);
	}
};
