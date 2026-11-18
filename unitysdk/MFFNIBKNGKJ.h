#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define MFFNIBKNGKJ_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x156A6480)
#define MFFNIBKNGKJ_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x156A63F0)
#define MFFNIBKNGKJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x156A6370)
#define MFFNIBKNGKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x156A63E0)

inline static constexpr unsigned int MFFNIBKNGKJ_TypeDefinitionIndex = 83073;

class MFFNIBKNGKJ : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xD3; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFFNIBKNGKJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFNIBKNGKJ__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFNIBKNGKJ_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFNIBKNGKJ_FIGPAOKNJLN_OFFSET))(this);
	}
};
