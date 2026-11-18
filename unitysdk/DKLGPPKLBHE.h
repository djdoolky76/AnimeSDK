#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define DKLGPPKLBHE_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x16BA4B40)
#define DKLGPPKLBHE_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x16BA4AB0)
#define DKLGPPKLBHE_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x16BA4A20)
#define DKLGPPKLBHE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BA49A0)
#define DKLGPPKLBHE__CTOR_OFFSET UNITYSDK_OFFSET(0x16BA4A10)

inline static constexpr unsigned int DKLGPPKLBHE_TypeDefinitionIndex = 82741;

class DKLGPPKLBHE : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x14F; // 0x0
	::System::Boolean BNIMADFICKN; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKLGPPKLBHE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKLGPPKLBHE__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKLGPPKLBHE_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKLGPPKLBHE_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::System::Boolean BNIMADFICKN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + DKLGPPKLBHE_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, BNIMADFICKN);
	}
};
