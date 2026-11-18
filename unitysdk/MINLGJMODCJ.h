#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define MINLGJMODCJ_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1405F6E0)
#define MINLGJMODCJ_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1405F650)
#define MINLGJMODCJ_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1405F5C0)
#define MINLGJMODCJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x1405F540)
#define MINLGJMODCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1405F5B0)

inline static constexpr unsigned int MINLGJMODCJ_TypeDefinitionIndex = 75647;

class MINLGJMODCJ : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x16; // 0x0
	::System::Boolean NCLMABGFLFF; // 0x20
	::System::Boolean ALCACBNGPII; // 0x21

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MINLGJMODCJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINLGJMODCJ__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINLGJMODCJ_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINLGJMODCJ_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::System::Boolean NCLMABGFLFF, ::System::Boolean ALCACBNGPII)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MINLGJMODCJ_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, NCLMABGFLFF, ALCACBNGPII);
	}
};
