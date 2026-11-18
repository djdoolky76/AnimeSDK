#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define ECPNINDNOPI_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x16BD11C0)
#define ECPNINDNOPI_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x16BD1130)
#define ECPNINDNOPI__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BD10B0)
#define ECPNINDNOPI__CTOR_OFFSET UNITYSDK_OFFSET(0x16BD1120)

inline static constexpr unsigned int ECPNINDNOPI_TypeDefinitionIndex = 85008;

class ECPNINDNOPI : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x74; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECPNINDNOPI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPNINDNOPI__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPNINDNOPI_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPNINDNOPI_FIGPAOKNJLN_OFFSET))(this);
	}
};
