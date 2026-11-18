#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define LAIIKAJECIK_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x15BAB600)
#define LAIIKAJECIK_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x15BAB6E0)
#define LAIIKAJECIK_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x15BAB570)
#define LAIIKAJECIK_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x15BAB640)
#define LAIIKAJECIK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15BAB480)
#define LAIIKAJECIK__CCTOR_OFFSET UNITYSDK_OFFSET(0x15BAB4F0)
#define LAIIKAJECIK__CTOR_OFFSET UNITYSDK_OFFSET(0x15BAB560)

inline static constexpr unsigned int LAIIKAJECIK_TypeDefinitionIndex = 58247;

class LAIIKAJECIK : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x15F; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAIIKAJECIK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAIIKAJECIK__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAIIKAJECIK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAIIKAJECIK_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAIIKAJECIK_CNHBDOMKKDE_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAIIKAJECIK_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAIIKAJECIK_FIGPAOKNJLN_OFFSET))(this);
	}
};
