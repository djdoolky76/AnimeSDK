#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define JBBJECKOFMA_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1ACC92A0)
#define JBBJECKOFMA_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1ACC92E0)
#define JBBJECKOFMA_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1ACC9210)
#define JBBJECKOFMA_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x1ACC9370)
#define JBBJECKOFMA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1ACC9120)
#define JBBJECKOFMA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ACC9190)
#define JBBJECKOFMA__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACC9200)

inline static constexpr unsigned int JBBJECKOFMA_TypeDefinitionIndex = 42432;

class JBBJECKOFMA : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xD4; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBBJECKOFMA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBBJECKOFMA__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBBJECKOFMA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBBJECKOFMA_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBBJECKOFMA_CNHBDOMKKDE_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBBJECKOFMA_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBBJECKOFMA_OHFHFOHMBJH_OFFSET))(this);
	}
};
