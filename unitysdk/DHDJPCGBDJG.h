#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define DHDJPCGBDJG_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x12411A30)
#define DHDJPCGBDJG_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x124119A0)
#define DHDJPCGBDJG_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x12411910)
#define DHDJPCGBDJG__CCTOR_OFFSET UNITYSDK_OFFSET(0x12411890)
#define DHDJPCGBDJG__CTOR_OFFSET UNITYSDK_OFFSET(0x12411900)

inline static constexpr unsigned int DHDJPCGBDJG_TypeDefinitionIndex = 46137;

class DHDJPCGBDJG : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x91; // 0x0
	::System::String* DNPDCNPMMJN; // 0x20
	::System::UInt32 GDINDFOPDFC; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHDJPCGBDJG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHDJPCGBDJG__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHDJPCGBDJG_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHDJPCGBDJG_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::System::UInt32 IPHNKGAJOPN, ::System::String* DPHONIJGNNP)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + DHDJPCGBDJG_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, IPHNKGAJOPN, DPHONIJGNNP);
	}
};
