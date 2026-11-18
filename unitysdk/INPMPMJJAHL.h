#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/EntityType.h"

#define INPMPMJJAHL_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x13AB1100)
#define INPMPMJJAHL_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x13AB1070)
#define INPMPMJJAHL_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x13AB0FE0)
#define INPMPMJJAHL__CCTOR_OFFSET UNITYSDK_OFFSET(0x13AB0F60)
#define INPMPMJJAHL__CTOR_OFFSET UNITYSDK_OFFSET(0x13AB0FD0)

inline static constexpr unsigned int INPMPMJJAHL_TypeDefinitionIndex = 65756;

class INPMPMJJAHL : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x5E; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INPMPMJJAHL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPMPMJJAHL__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPMPMJJAHL_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPMPMJJAHL_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::MoleMole::Config::EntityType MKCOMJHINNJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + INPMPMJJAHL_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, MKCOMJHINNJ);
	}
};
