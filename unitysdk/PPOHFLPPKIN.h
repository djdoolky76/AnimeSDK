#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define PPOHFLPPKIN_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1D63B1F0)
#define PPOHFLPPKIN_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1D63B160)
#define PPOHFLPPKIN_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1D63B030)
#define PPOHFLPPKIN_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x1D63B0C0)
#define PPOHFLPPKIN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D63AF30)
#define PPOHFLPPKIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D63AFB0)
#define PPOHFLPPKIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D63B020)

inline static constexpr unsigned int PPOHFLPPKIN_TypeDefinitionIndex = 65997;

class PPOHFLPPKIN : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xE4; // 0x0
	::System::Boolean JLNKJDLGFKD; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPOHFLPPKIN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOHFLPPKIN__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOHFLPPKIN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOHFLPPKIN_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOHFLPPKIN_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOHFLPPKIN_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Boolean COJLHPCNOEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PPOHFLPPKIN_CNHBDOMKKDE_OFFSET))(this, COJLHPCNOEA);
	}
};
