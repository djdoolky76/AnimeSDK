#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define AICJOCDKAMO_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x17DD8E50)
#define AICJOCDKAMO_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x17DD8DC0)
#define AICJOCDKAMO_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x17DD8D30)
#define AICJOCDKAMO_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x17DD8EA0)
#define AICJOCDKAMO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17DD8C30)
#define AICJOCDKAMO__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DD8CB0)
#define AICJOCDKAMO__CTOR_OFFSET UNITYSDK_OFFSET(0x17DD8D20)

inline static constexpr unsigned int AICJOCDKAMO_TypeDefinitionIndex = 75437;

class AICJOCDKAMO : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xB0; // 0x0
	::System::Boolean CDIPBMMDICL; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AICJOCDKAMO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AICJOCDKAMO__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AICJOCDKAMO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AICJOCDKAMO_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AICJOCDKAMO_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Boolean HPINBCPMHJE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AICJOCDKAMO_CNHBDOMKKDE_OFFSET))(this, HPINBCPMHJE);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AICJOCDKAMO_OHFHFOHMBJH_OFFSET))(this);
	}
};
