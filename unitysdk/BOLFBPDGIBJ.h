#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define BOLFBPDGIBJ_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x14F01CC0)
#define BOLFBPDGIBJ_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x14F01D20)
#define BOLFBPDGIBJ_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x14F01C30)
#define BOLFBPDGIBJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F01BB0)
#define BOLFBPDGIBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14F01C20)

inline static constexpr unsigned int BOLFBPDGIBJ_TypeDefinitionIndex = 88154;

class BOLFBPDGIBJ : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x8C; // 0x0
	::System::Int32 DALHMFLINDE; // 0x20
	::System::Int32 PEEOIGPMBBI; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOLFBPDGIBJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOLFBPDGIBJ__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOLFBPDGIBJ_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Int32 PEEOIGPMBBI, ::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BOLFBPDGIBJ_CNHBDOMKKDE_OFFSET))(this, PEEOIGPMBBI, JHFKDGBCOBA);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOLFBPDGIBJ_FIGPAOKNJLN_OFFSET))(this);
	}
};
