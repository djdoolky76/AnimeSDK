#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CIGCNCNHEML__CTOR_OFFSET UNITYSDK_OFFSET(0x1686A6F0)

inline static constexpr unsigned int CIGCNCNHEML_TypeDefinitionIndex = 75712;

class CIGCNCNHEML : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGCNCNHEML__CTOR_OFFSET))(this);
	}
};
