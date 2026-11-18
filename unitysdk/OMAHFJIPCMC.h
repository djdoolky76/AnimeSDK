#pragma once
#include "unitysdk/unitysdk.h"

class ENGKPGFGGLM;

#define OMAHFJIPCMC_BPKNEKOKBCK_OFFSET UNITYSDK_OFFSET(0x12949A70)
#define OMAHFJIPCMC_DCHDAHBCDMG_OFFSET UNITYSDK_OFFSET(0x12949550)
#define OMAHFJIPCMC_ONEVENT_OFFSET UNITYSDK_OFFSET(0x12949490)
#define OMAHFJIPCMC__CCTOR_OFFSET UNITYSDK_OFFSET(0x12949360)
#define OMAHFJIPCMC__CTOR_OFFSET UNITYSDK_OFFSET(0x12949A30)

inline static constexpr unsigned int OMAHFJIPCMC_TypeDefinitionIndex = 46088;

class OMAHFJIPCMC
{
public:
	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMAHFJIPCMC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAHFJIPCMC__CTOR_OFFSET))(this);
	}

	::System::Void OnEvent(::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + OMAHFJIPCMC_ONEVENT_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void DCHDAHBCDMG(::System::UInt32 JHGKGEGGGFF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OMAHFJIPCMC_DCHDAHBCDMG_OFFSET))(this, JHGKGEGGGFF);
	}

	::System::Void BPKNEKOKBCK(::ENGKPGFGGLM* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + OMAHFJIPCMC_BPKNEKOKBCK_OFFSET))(this, MIALFKCCCPI);
	}
};
