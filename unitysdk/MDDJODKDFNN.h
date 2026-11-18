#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EKAGOMFDEMN.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define MDDJODKDFNN_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x151C1B30)
#define MDDJODKDFNN_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x151C1AA0)
#define MDDJODKDFNN_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x151C1A10)
#define MDDJODKDFNN__CCTOR_OFFSET UNITYSDK_OFFSET(0x151C1990)
#define MDDJODKDFNN__CTOR_OFFSET UNITYSDK_OFFSET(0x151C1A00)

inline static constexpr unsigned int MDDJODKDFNN_TypeDefinitionIndex = 51067;

class MDDJODKDFNN : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x1B; // 0x0
	::EKAGOMFDEMN FMMJAJOOOIA; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDDJODKDFNN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDJODKDFNN__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDJODKDFNN_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDJODKDFNN_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::EKAGOMFDEMN KKMENMCMMBN)
	{
		return ((::System::Void(*)(::PVOID, ::EKAGOMFDEMN))((::PBYTE)hIl2Cpp + MDDJODKDFNN_CNHBDOMKKDE_OFFSET))(this, KKMENMCMMBN);
	}
};
