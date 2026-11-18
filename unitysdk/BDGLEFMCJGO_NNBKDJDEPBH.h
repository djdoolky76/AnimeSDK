#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BKGKJNHLCKC;
class MANBGDFAHPC;

#define BDGLEFMCJGO_NNBKDJDEPBH_KLBOLCAAPGP_OFFSET UNITYSDK_OFFSET(0x1822E560)
#define BDGLEFMCJGO_NNBKDJDEPBH__CTOR_OFFSET UNITYSDK_OFFSET(0x1822E550)

inline static constexpr unsigned int BDGLEFMCJGO_NNBKDJDEPBH_TypeDefinitionIndex = 80410;

class BDGLEFMCJGO_NNBKDJDEPBH : public ::System::Object
{
public:
	::MANBGDFAHPC* CGELPKBKHOJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDGLEFMCJGO_NNBKDJDEPBH__CTOR_OFFSET))(this);
	}

	::System::Boolean KLBOLCAAPGP(::BKGKJNHLCKC* PELAJIFDIPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::BKGKJNHLCKC*))((::PBYTE)hIl2Cpp + BDGLEFMCJGO_NNBKDJDEPBH_KLBOLCAAPGP_OFFSET))(this, PELAJIFDIPN);
	}
};
