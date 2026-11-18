#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define OOAPFLPMAEK_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x13A777F0)
#define OOAPFLPMAEK_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x13A77850)
#define OOAPFLPMAEK_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x13A77750)
#define OOAPFLPMAEK_GHNFMFOFMHG_OFFSET UNITYSDK_OFFSET(0x13A777E0)
#define OOAPFLPMAEK_KOGPKKOCMKK_OFFSET UNITYSDK_OFFSET(0x13A778E0)
#define OOAPFLPMAEK__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A776D0)
#define OOAPFLPMAEK__CTOR_OFFSET UNITYSDK_OFFSET(0x13A77740)

inline static constexpr unsigned int OOAPFLPMAEK_TypeDefinitionIndex = 88295;

class OOAPFLPMAEK : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x157; // 0x0
	::System::UInt64 _MJCLEEHGLGF_k__BackingField; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOAPFLPMAEK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOAPFLPMAEK__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOAPFLPMAEK_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::UInt64 GHNFMFOFMHG()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + OOAPFLPMAEK_GHNFMFOFMHG_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::System::UInt64 ACHBBPJIBIE)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + OOAPFLPMAEK_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, ACHBBPJIBIE);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOAPFLPMAEK_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void KOGPKKOCMKK(::System::UInt64 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + OOAPFLPMAEK_KOGPKKOCMKK_OFFSET))(this, EGEGIMGMJHN);
	}
};
