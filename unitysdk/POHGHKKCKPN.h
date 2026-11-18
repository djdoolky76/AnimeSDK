#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define POHGHKKCKPN_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x119A56F0)
#define POHGHKKCKPN_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x119A5790)
#define POHGHKKCKPN_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x119A5660)
#define POHGHKKCKPN__CCTOR_OFFSET UNITYSDK_OFFSET(0x119A55E0)
#define POHGHKKCKPN__CTOR_OFFSET UNITYSDK_OFFSET(0x119A5650)

inline static constexpr unsigned int POHGHKKCKPN_TypeDefinitionIndex = 63922;

class POHGHKKCKPN : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xC7; // 0x0
	::System::String* DNPDCNPMMJN; // 0x20
	::System::UInt32 GDINDFOPDFC; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POHGHKKCKPN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHGHKKCKPN__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHGHKKCKPN_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::System::UInt32 IPHNKGAJOPN, ::System::String* DPHONIJGNNP)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + POHGHKKCKPN_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, IPHNKGAJOPN, DPHONIJGNNP);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHGHKKCKPN_FIGPAOKNJLN_OFFSET))(this);
	}
};
