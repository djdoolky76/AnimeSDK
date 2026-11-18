#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define IIOJOIMEFFE_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x153AC8C0)
#define IIOJOIMEFFE_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x153AC790)
#define IIOJOIMEFFE_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x153AC820)
#define IIOJOIMEFFE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x153AC6A0)
#define IIOJOIMEFFE__CCTOR_OFFSET UNITYSDK_OFFSET(0x153AC710)
#define IIOJOIMEFFE__CTOR_OFFSET UNITYSDK_OFFSET(0x153AC780)

inline static constexpr unsigned int IIOJOIMEFFE_TypeDefinitionIndex = 61750;

class IIOJOIMEFFE : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x9C; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIOJOIMEFFE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIOJOIMEFFE__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIOJOIMEFFE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIOJOIMEFFE_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIOJOIMEFFE_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIOJOIMEFFE_FIGPAOKNJLN_OFFSET))(this);
	}
};
