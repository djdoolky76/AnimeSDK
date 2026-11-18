#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define GLBEKMLJIKH__CTOR_OFFSET UNITYSDK_OFFSET(0x1490A870)

inline static constexpr unsigned int GLBEKMLJIKH_TypeDefinitionIndex = 88753;

class GLBEKMLJIKH : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBEKMLJIKH__CTOR_OFFSET))(this);
	}
};
