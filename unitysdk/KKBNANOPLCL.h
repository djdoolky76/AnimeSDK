#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIHFMFLBPHM.h"

#define KKBNANOPLCL__CTOR_OFFSET UNITYSDK_OFFSET(0x1995C780)

inline static constexpr unsigned int KKBNANOPLCL_TypeDefinitionIndex = 80338;

class KKBNANOPLCL : public ::KIHFMFLBPHM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBNANOPLCL__CTOR_OFFSET))(this);
	}
};
