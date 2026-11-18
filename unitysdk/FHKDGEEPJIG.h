#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define FHKDGEEPJIG__CTOR_OFFSET UNITYSDK_OFFSET(0x10F6C560)

inline static constexpr unsigned int FHKDGEEPJIG_TypeDefinitionIndex = 72342;

class FHKDGEEPJIG : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHKDGEEPJIG__CTOR_OFFSET))(this);
	}
};
