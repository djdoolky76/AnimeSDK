#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define GOGPPKLPHME_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x181647D0)
#define GOGPPKLPHME_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x18164820)
#define GOGPPKLPHME_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x18164740)
#define GOGPPKLPHME__CCTOR_OFFSET UNITYSDK_OFFSET(0x181646C0)
#define GOGPPKLPHME__CTOR_OFFSET UNITYSDK_OFFSET(0x18164730)

inline static constexpr unsigned int GOGPPKLPHME_TypeDefinitionIndex = 55995;

class GOGPPKLPHME : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xAC; // 0x0
	::System::Int32 NMFIBMNBHAB; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOGPPKLPHME__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOGPPKLPHME__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOGPPKLPHME_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Int32 NMFIBMNBHAB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOGPPKLPHME_CNHBDOMKKDE_OFFSET))(this, NMFIBMNBHAB);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOGPPKLPHME_FIGPAOKNJLN_OFFSET))(this);
	}
};
