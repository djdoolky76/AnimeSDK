#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define NKIAEJLNDCJ_KCPECPDEOPD_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x114A6490)
#define NKIAEJLNDCJ_KCPECPDEOPD__CTOR_OFFSET UNITYSDK_OFFSET(0x114A6480)

inline static constexpr unsigned int NKIAEJLNDCJ_KCPECPDEOPD_TypeDefinitionIndex = 53948;

class NKIAEJLNDCJ_KCPECPDEOPD : public ::System::Object
{
public:
	::HOCDHMEPPEG ABMKEFPKPMD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIAEJLNDCJ_KCPECPDEOPD__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIAEJLNDCJ_KCPECPDEOPD_LIDNPLMPHAL_OFFSET))(this);
	}
};
