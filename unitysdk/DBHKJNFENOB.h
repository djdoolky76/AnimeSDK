#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define DBHKJNFENOB_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1A1CE9E0)
#define DBHKJNFENOB_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1A1CE950)
#define DBHKJNFENOB_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1A1CE8C0)
#define DBHKJNFENOB_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x1A1CEA20)
#define DBHKJNFENOB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A1CE7D0)
#define DBHKJNFENOB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1CE840)
#define DBHKJNFENOB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1CE8B0)

inline static constexpr unsigned int DBHKJNFENOB_TypeDefinitionIndex = 81106;

class DBHKJNFENOB : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x9A; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBHKJNFENOB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHKJNFENOB__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHKJNFENOB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHKJNFENOB_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHKJNFENOB_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHKJNFENOB_CNHBDOMKKDE_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHKJNFENOB_OHFHFOHMBJH_OFFSET))(this);
	}
};
