#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define CPBPOJMOIEG_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x168883E0)
#define CPBPOJMOIEG_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x16888350)
#define CPBPOJMOIEG_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x168882C0)
#define CPBPOJMOIEG__CCTOR_OFFSET UNITYSDK_OFFSET(0x16888240)
#define CPBPOJMOIEG__CTOR_OFFSET UNITYSDK_OFFSET(0x168882B0)

inline static constexpr unsigned int CPBPOJMOIEG_TypeDefinitionIndex = 78850;

class CPBPOJMOIEG : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xFB; // 0x0
	::System::UInt32 NMPJMCCBNLO; // 0x20
	::System::UInt32 BBDCIEAPOIP; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPBPOJMOIEG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPBPOJMOIEG__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPBPOJMOIEG_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPBPOJMOIEG_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 NMPJMCCBNLO, ::System::UInt32 BBDCIEAPOIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CPBPOJMOIEG_CNHBDOMKKDE_OFFSET))(this, NMPJMCCBNLO, BBDCIEAPOIP);
	}
};
