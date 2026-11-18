#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNAHDMPGENO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define MCOBMCEIMOM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1959D330)
#define MCOBMCEIMOM_DDIHDOPJILC_OFFSET UNITYSDK_OFFSET(0x1959D430)
#define MCOBMCEIMOM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1959D420)
#define MCOBMCEIMOM_GPFJDFDHJPJ_OFFSET UNITYSDK_OFFSET(0x1959D1F0)
#define MCOBMCEIMOM_JJADMJBFMAE_OFFSET UNITYSDK_OFFSET(0x1959D0B0)
#define MCOBMCEIMOM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1959CF60)
#define MCOBMCEIMOM_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x1959CF70)
#define MCOBMCEIMOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1959CF50)

inline static constexpr unsigned int MCOBMCEIMOM_TypeDefinitionIndex = 12901;

class MCOBMCEIMOM : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::BNAHDMPGENO HBDPAIKANDB; // 0x18
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x28
	::System::Byte CNIAANMNOCF; // 0x29
	::System::Byte ACIOBDEBDNK; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 MAPHECLALMO; // 0x2C
	::System::Int32 LFDPJECLPBF; // 0x30
	::System::Int32 PHKFNMBJGNJ; // 0x34
	::System::Int32 JABJBJHKDMH; // 0x38

	::System::Void _ctor(::BNAHDMPGENO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BNAHDMPGENO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MCOBMCEIMOM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCOBMCEIMOM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCOBMCEIMOM_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::Int32 JJADMJBFMAE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCOBMCEIMOM_JJADMJBFMAE_OFFSET))(this);
	}

	::System::Int32 GPFJDFDHJPJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCOBMCEIMOM_GPFJDFDHJPJ_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCOBMCEIMOM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MCOBMCEIMOM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 DDIHDOPJILC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCOBMCEIMOM_DDIHDOPJILC_OFFSET))(this);
	}
};
