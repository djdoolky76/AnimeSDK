#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KICMBFLPIPF_JNENFEELMBP_OFFSET UNITYSDK_OFFSET(0x168093E0)
#define KICMBFLPIPF_MDMKMKAKEMA_OFFSET UNITYSDK_OFFSET(0x168094D0)
#define KICMBFLPIPF_PLGGOLBMJOI_OFFSET UNITYSDK_OFFSET(0x168096F0)
#define KICMBFLPIPF__CTOR_OFFSET UNITYSDK_OFFSET(0x168093F0)

inline static constexpr unsigned int KICMBFLPIPF_TypeDefinitionIndex = 65307;

class KICMBFLPIPF : public ::System::Object
{
public:
	::System::Boolean EGCCIODCJIA; // 0x10
	::System::Boolean BJCNFHNOIEK; // 0x11
	::System::Boolean IEBCLAHLEOA; // 0x12
	::System::Byte _padding0[0x1];
	::System::Int32 AAJKJJJMODO; // 0x14

	::System::Void _ctor(::System::Int32 MOBNMDEDJIP, ::System::Boolean IEBCLAHLEOA, ::System::Boolean LNFHNBDHOHF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + KICMBFLPIPF__CTOR_OFFSET))(this, MOBNMDEDJIP, IEBCLAHLEOA, LNFHNBDHOHF);
	}

	::System::Boolean JNENFEELMBP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KICMBFLPIPF_JNENFEELMBP_OFFSET))(this);
	}

	::System::Void MDMKMKAKEMA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KICMBFLPIPF_MDMKMKAKEMA_OFFSET))(this);
	}

	::System::Void PLGGOLBMJOI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KICMBFLPIPF_PLGGOLBMJOI_OFFSET))(this);
	}
};
