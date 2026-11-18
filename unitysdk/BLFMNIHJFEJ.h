#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/KBDIDMBGFCE.h"

#define BLFMNIHJFEJ_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1692B320)
#define BLFMNIHJFEJ_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1692B290)
#define BLFMNIHJFEJ_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1692B200)
#define BLFMNIHJFEJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x1692B180)
#define BLFMNIHJFEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1692B1F0)

inline static constexpr unsigned int BLFMNIHJFEJ_TypeDefinitionIndex = 67972;

class BLFMNIHJFEJ : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x43; // 0x0
	::KBDIDMBGFCE PBBAJGBCFAO; // 0x20
	::System::Int32 MFPKGNIGAOK; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLFMNIHJFEJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFMNIHJFEJ__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFMNIHJFEJ_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFMNIHJFEJ_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Int32 CFFFADGEKLK, ::KBDIDMBGFCE NFEJLEOLEFD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::KBDIDMBGFCE))((::PBYTE)hIl2Cpp + BLFMNIHJFEJ_CNHBDOMKKDE_OFFSET))(this, CFFFADGEKLK, NFEJLEOLEFD);
	}
};
