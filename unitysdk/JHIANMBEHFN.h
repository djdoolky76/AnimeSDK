#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define JHIANMBEHFN_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x19812180)
#define JHIANMBEHFN_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x198120F0)
#define JHIANMBEHFN__CCTOR_OFFSET UNITYSDK_OFFSET(0x19812070)
#define JHIANMBEHFN__CTOR_OFFSET UNITYSDK_OFFSET(0x198120E0)

inline static constexpr unsigned int JHIANMBEHFN_TypeDefinitionIndex = 76660;

class JHIANMBEHFN : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x72; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHIANMBEHFN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIANMBEHFN__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIANMBEHFN_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIANMBEHFN_FIGPAOKNJLN_OFFSET))(this);
	}
};
