#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define BBPJKEFOOPB_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x12D18C90)
#define BBPJKEFOOPB_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x12D18CD0)
#define BBPJKEFOOPB_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x12D18B60)
#define BBPJKEFOOPB_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x12D18BF0)
#define BBPJKEFOOPB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x12D18A70)
#define BBPJKEFOOPB__CCTOR_OFFSET UNITYSDK_OFFSET(0x12D18AE0)
#define BBPJKEFOOPB__CTOR_OFFSET UNITYSDK_OFFSET(0x12D18B50)

inline static constexpr unsigned int BBPJKEFOOPB_TypeDefinitionIndex = 58448;

class BBPJKEFOOPB : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x19; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBPJKEFOOPB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBPJKEFOOPB__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBPJKEFOOPB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBPJKEFOOPB_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBPJKEFOOPB_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBPJKEFOOPB_CNHBDOMKKDE_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBPJKEFOOPB_FIGPAOKNJLN_OFFSET))(this);
	}
};
