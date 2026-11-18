#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define IKFFHLHMJCL__CTOR_OFFSET UNITYSDK_OFFSET(0x197D1170)

inline static constexpr unsigned int IKFFHLHMJCL_TypeDefinitionIndex = 60461;

class IKFFHLHMJCL : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFFHLHMJCL__CTOR_OFFSET))(this);
	}
};
