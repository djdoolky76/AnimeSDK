#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/EntityType.h"

#define MNKAABDAOKL_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x18B5B1F0)
#define MNKAABDAOKL_DMJFNIOHOCD_OFFSET UNITYSDK_OFFSET(0x18B5B140)
#define MNKAABDAOKL_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x18B5B150)
#define MNKAABDAOKL_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x18B5B0B0)
#define MNKAABDAOKL_NHDAFFBNAFI_OFFSET UNITYSDK_OFFSET(0x18B5B1E0)
#define MNKAABDAOKL__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B5B030)
#define MNKAABDAOKL__CTOR_OFFSET UNITYSDK_OFFSET(0x18B5B0A0)

inline static constexpr unsigned int MNKAABDAOKL_TypeDefinitionIndex = 88907;

class MNKAABDAOKL : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x5C; // 0x0
	::MoleMole::Config::EntityType _FLDOEOIFNDO_k__BackingField; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNKAABDAOKL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKAABDAOKL__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKAABDAOKL_GCDIGLPEOGH_OFFSET))(this);
	}

	::MoleMole::Config::EntityType DMJFNIOHOCD()
	{
		return ((::MoleMole::Config::EntityType(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKAABDAOKL_DMJFNIOHOCD_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKAABDAOKL_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void NHDAFFBNAFI(::MoleMole::Config::EntityType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + MNKAABDAOKL_NHDAFFBNAFI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::MoleMole::Config::EntityType MKCOMJHINNJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + MNKAABDAOKL_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, MKCOMJHINNJ);
	}
};
