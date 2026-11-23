#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F77C0B948299CD47;
namespace UnityEngine::Splines { class Spline; }

#define B561E1378DD652CB__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B561E1378DD652CB_TypeDefinitionIndex = 18862;

class B561E1378DD652CB : public ::System::Object
{
public:
	::F77C0B948299CD47* EC442B0F96180C55; // 0x10
	::UnityEngine::Splines::Spline* F03E0BDCBABB08A2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B561E1378DD652CB__CTOR_OFFSET))(this);
	}
};
