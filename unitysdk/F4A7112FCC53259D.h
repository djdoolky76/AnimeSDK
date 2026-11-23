#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B561E1378DD652CB.h"
#include "unitysdk/UnityEngine/B3A7F113FE1DE383.h"

class A223860C50512B7D;
class F77C0B948299CD47;
namespace UnityEngine::Splines { class Spline; }

#define F4A7112FCC53259D__CTOR_OFFSET UNITYSDK_OFFSET(0x3DAC570)

inline static constexpr unsigned int F4A7112FCC53259D_TypeDefinitionIndex = 18915;

class F4A7112FCC53259D : public ::B561E1378DD652CB
{
public:
	::UnityEngine::B3A7F113FE1DE383 F469DE3A333B0874; // 0x20
	::A223860C50512B7D* FFE58E715263F6E4; // 0x38

	::System::Void _ctor(::F77C0B948299CD47* EC442B0F96180C55, ::UnityEngine::Splines::Spline* F03E0BDCBABB08A2, ::A223860C50512B7D* FFE58E715263F6E4)
	{
		return ((::System::Void(*)(::PVOID, ::F77C0B948299CD47*, ::UnityEngine::Splines::Spline*, ::A223860C50512B7D*))((::PBYTE)hIl2Cpp + F4A7112FCC53259D__CTOR_OFFSET))(this, EC442B0F96180C55, F03E0BDCBABB08A2, FFE58E715263F6E4);
	}
};
