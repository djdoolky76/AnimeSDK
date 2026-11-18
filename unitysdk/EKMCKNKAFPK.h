#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/IBNBHLOKIKJ.h"

#define EKMCKNKAFPK_CNHBDOMKKDE_1_OFFSET UNITYSDK_OFFSET(0xFE1E010)
#define EKMCKNKAFPK_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0xFE1DF70)
#define EKMCKNKAFPK_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0xFE1E0F0)
#define EKMCKNKAFPK_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0xFE1DEE0)
#define EKMCKNKAFPK_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0xFE1E180)
#define EKMCKNKAFPK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0xFE1DDD0)
#define EKMCKNKAFPK__CCTOR_OFFSET UNITYSDK_OFFSET(0xFE1DE60)
#define EKMCKNKAFPK__CTOR_OFFSET UNITYSDK_OFFSET(0xFE1DED0)

inline static constexpr unsigned int EKMCKNKAFPK_TypeDefinitionIndex = 70173;

class EKMCKNKAFPK : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x95; // 0x0
	::IBNBHLOKIKJ IDEICNMIHHI; // 0x20
	::System::UInt32 LECIEAPJIMM; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKMCKNKAFPK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKMCKNKAFPK__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKMCKNKAFPK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKMCKNKAFPK_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 HBFCDLLPFGK, ::System::UInt32 LECIEAPJIMM, ::IBNBHLOKIKJ& IDEICNMIHHI)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::IBNBHLOKIKJ&))((::PBYTE)hIl2Cpp + EKMCKNKAFPK_CNHBDOMKKDE_OFFSET))(this, HBFCDLLPFGK, LECIEAPJIMM, IDEICNMIHHI);
	}

	::System::Void CNHBDOMKKDE_1(::System::UInt32 HBFCDLLPFGK, ::System::UInt32 LECIEAPJIMM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EKMCKNKAFPK_CNHBDOMKKDE_1_OFFSET))(this, HBFCDLLPFGK, LECIEAPJIMM);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKMCKNKAFPK_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKMCKNKAFPK_OHFHFOHMBJH_OFFSET))(this);
	}
};
