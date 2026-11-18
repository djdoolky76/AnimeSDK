#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define JIPMMACKHKF_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x198CE990)
#define JIPMMACKHKF_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x198CE900)
#define JIPMMACKHKF_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x198CE870)
#define JIPMMACKHKF__CCTOR_OFFSET UNITYSDK_OFFSET(0x198CE7F0)
#define JIPMMACKHKF__CTOR_OFFSET UNITYSDK_OFFSET(0x198CE860)

inline static constexpr unsigned int JIPMMACKHKF_TypeDefinitionIndex = 64543;

class JIPMMACKHKF : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x11C; // 0x0
	::System::UInt32 MGNMJMACKLO; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIPMMACKHKF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPMMACKHKF__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPMMACKHKF_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPMMACKHKF_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 AOCOIDIMLIH)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JIPMMACKHKF_CNHBDOMKKDE_OFFSET))(this, AOCOIDIMLIH);
	}
};
