#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define MNBFFDGBKIN__CTOR_OFFSET UNITYSDK_OFFSET(0x14072910)

inline static constexpr unsigned int MNBFFDGBKIN_TypeDefinitionIndex = 61956;

class MNBFFDGBKIN : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBFFDGBKIN__CTOR_OFFSET))(this);
	}
};
