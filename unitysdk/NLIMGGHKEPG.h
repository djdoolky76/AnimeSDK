#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CANIKIFMDGI.h"

#define NLIMGGHKEPG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x114A8360)
#define NLIMGGHKEPG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x114A83C0)
#define NLIMGGHKEPG__CTOR_OFFSET UNITYSDK_OFFSET(0x114A83B0)

inline static constexpr unsigned int NLIMGGHKEPG_TypeDefinitionIndex = 40232;

class NLIMGGHKEPG : public ::CANIKIFMDGI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLIMGGHKEPG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLIMGGHKEPG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLIMGGHKEPG_GDEOPIBNOIN_OFFSET))(this);
	}
};
