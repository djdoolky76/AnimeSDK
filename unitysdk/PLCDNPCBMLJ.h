#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define PLCDNPCBMLJ_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1A7F8DD0)
#define PLCDNPCBMLJ_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1A7F8D40)
#define PLCDNPCBMLJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7F8CC0)
#define PLCDNPCBMLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7F8D30)

inline static constexpr unsigned int PLCDNPCBMLJ_TypeDefinitionIndex = 70602;

class PLCDNPCBMLJ : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xC1; // 0x0
	::System::Boolean GAKHIFGJIAA; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLCDNPCBMLJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCDNPCBMLJ__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCDNPCBMLJ_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCDNPCBMLJ_FIGPAOKNJLN_OFFSET))(this);
	}
};
