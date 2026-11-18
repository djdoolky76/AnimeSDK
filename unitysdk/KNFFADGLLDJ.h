#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define KNFFADGLLDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16820FA0)

inline static constexpr unsigned int KNFFADGLLDJ_TypeDefinitionIndex = 85292;

class KNFFADGLLDJ : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFFADGLLDJ__CTOR_OFFSET))(this);
	}
};
