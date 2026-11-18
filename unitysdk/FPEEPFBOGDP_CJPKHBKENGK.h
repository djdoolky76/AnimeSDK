#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FPEEPFBOGDP_CIJIEKNDICN;

#define FPEEPFBOGDP_CJPKHBKENGK_MCNCIJFOEIG_OFFSET UNITYSDK_OFFSET(0x142BD420)
#define FPEEPFBOGDP_CJPKHBKENGK__CTOR_OFFSET UNITYSDK_OFFSET(0x142BD410)

inline static constexpr unsigned int FPEEPFBOGDP_CJPKHBKENGK_TypeDefinitionIndex = 71671;

class FPEEPFBOGDP_CJPKHBKENGK : public ::System::Object
{
public:
	::System::UInt32 GPMOKAFOLBL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEEPFBOGDP_CJPKHBKENGK__CTOR_OFFSET))(this);
	}

	::System::Boolean MCNCIJFOEIG(::FPEEPFBOGDP_CIJIEKNDICN* EJCBEJMGFAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::FPEEPFBOGDP_CIJIEKNDICN*))((::PBYTE)hIl2Cpp + FPEEPFBOGDP_CJPKHBKENGK_MCNCIJFOEIG_OFFSET))(this, EJCBEJMGFAJ);
	}
};
