#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define ABPJCHDOJMP_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x16D5F280)
#define ABPJCHDOJMP_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x16D5F1F0)
#define ABPJCHDOJMP_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x16D5F160)
#define ABPJCHDOJMP__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D5F0E0)
#define ABPJCHDOJMP__CTOR_OFFSET UNITYSDK_OFFSET(0x16D5F150)

inline static constexpr unsigned int ABPJCHDOJMP_TypeDefinitionIndex = 53737;

class ABPJCHDOJMP : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x116; // 0x0
	::System::UInt32 BHPBPJCDHHG; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABPJCHDOJMP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPJCHDOJMP__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPJCHDOJMP_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPJCHDOJMP_FIGPAOKNJLN_OFFSET))(this);
	}

	::ABPJCHDOJMP* CNHBDOMKKDE(::System::UInt32 BHPBPJCDHHG)
	{
		return ((::ABPJCHDOJMP*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABPJCHDOJMP_CNHBDOMKKDE_OFFSET))(this, BHPBPJCDHHG);
	}
};
