#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CGBGBGOGEMK;

#define CGBGBGOGEMK_PAGLAKDBPAK_FADJNCPEKDJ_OFFSET UNITYSDK_OFFSET(0x139C44E0)
#define CGBGBGOGEMK_PAGLAKDBPAK__CTOR_OFFSET UNITYSDK_OFFSET(0x139C44D0)

inline static constexpr unsigned int CGBGBGOGEMK_PAGLAKDBPAK_TypeDefinitionIndex = 88856;

class CGBGBGOGEMK_PAGLAKDBPAK : public ::System::Object
{
public:
	::CGBGBGOGEMK* KLHPEBKNIFB; // 0x10
	::System::Boolean CIBEBBIDGGO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_PAGLAKDBPAK__CTOR_OFFSET))(this);
	}

	::System::Void FADJNCPEKDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_PAGLAKDBPAK_FADJNCPEKDJ_OFFSET))(this);
	}
};
