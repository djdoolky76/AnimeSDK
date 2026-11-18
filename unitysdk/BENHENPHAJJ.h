#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPCLFJBIBEK.h"
#include "unitysdk/System/Object.h"

#define BENHENPHAJJ_AAEAHAGDIOP_OFFSET UNITYSDK_OFFSET(0x1F307900)
#define BENHENPHAJJ_IPHFDIKBFGD_OFFSET UNITYSDK_OFFSET(0x1F3078C0)
#define BENHENPHAJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3078B0)

inline static constexpr unsigned int BENHENPHAJJ_TypeDefinitionIndex = 29144;

class BENHENPHAJJ : public ::System::Object
{
public:
	::System::Boolean MHIADOJACCA; // 0x10

	::System::Void _ctor(::System::Boolean MHIADOJACCA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BENHENPHAJJ__CTOR_OFFSET))(this, MHIADOJACCA);
	}

	::IPCLFJBIBEK IPHFDIKBFGD()
	{
		return ((::IPCLFJBIBEK(*)(::PVOID))((::PBYTE)hIl2Cpp + BENHENPHAJJ_IPHFDIKBFGD_OFFSET))(this);
	}

	::System::Boolean AAEAHAGDIOP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BENHENPHAJJ_AAEAHAGDIOP_OFFSET))(this);
	}
};
