#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define JJEKEJDIEMP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A479490)

inline static constexpr unsigned int JJEKEJDIEMP_TypeDefinitionIndex = 69022;

class JJEKEJDIEMP : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEKEJDIEMP__CTOR_OFFSET))(this);
	}
};
