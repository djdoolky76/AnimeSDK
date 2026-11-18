#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFAGNHKPCGN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define LHOEFLMJMMD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17FB2F90)
#define LHOEFLMJMMD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17FB3190)
#define LHOEFLMJMMD_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x17FB2E40)
#define LHOEFLMJMMD_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x17FB2D30)
#define LHOEFLMJMMD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17FB2F80)
#define LHOEFLMJMMD_MNBGAIEPADE_OFFSET UNITYSDK_OFFSET(0x17FB3080)
#define LHOEFLMJMMD__CTOR_OFFSET UNITYSDK_OFFSET(0x17FB2D20)

inline static constexpr unsigned int LHOEFLMJMMD_TypeDefinitionIndex = 11133;

class LHOEFLMJMMD : public ::System::Object
{
public:
	::System::String* NFFPNFDEDBN; // 0x10
	::System::String* EOALHEEBMKM; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::OFAGNHKPCGN HBDPAIKANDB; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 POKJNGILNLB; // 0x3C

	::System::Void _ctor(::OFAGNHKPCGN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OFAGNHKPCGN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LHOEFLMJMMD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHOEFLMJMMD_IFDIOIOCGDP_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHOEFLMJMMD_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHOEFLMJMMD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHOEFLMJMMD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* MNBGAIEPADE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHOEFLMJMMD_MNBGAIEPADE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LHOEFLMJMMD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
