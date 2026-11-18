#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CIALPHHFGDF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define AMDKBNJAHNP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x15774DD0)
#define AMDKBNJAHNP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x15774C70)
#define AMDKBNJAHNP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x15774C80)
#define AMDKBNJAHNP_MFIFLPFADKP_OFFSET UNITYSDK_OFFSET(0x15774C90)
#define AMDKBNJAHNP__CTOR_OFFSET UNITYSDK_OFFSET(0x15774C60)

inline static constexpr unsigned int AMDKBNJAHNP_TypeDefinitionIndex = 13247;

class AMDKBNJAHNP : public ::System::Object
{
public:
	::CIALPHHFGDF HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x28
	::System::Byte CNIAANMNOCF; // 0x29
	::System::Byte ACIOBDEBDNK; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 MDPOLLPKCCD; // 0x2C

	::System::Void _ctor(::CIALPHHFGDF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CIALPHHFGDF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AMDKBNJAHNP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMDKBNJAHNP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDKBNJAHNP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 MFIFLPFADKP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDKBNJAHNP_MFIFLPFADKP_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDKBNJAHNP_COFGIJJOFLP_OFFSET))(this);
	}
};
