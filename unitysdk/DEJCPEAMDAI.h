#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define DEJCPEAMDAI__CTOR_OFFSET UNITYSDK_OFFSET(0x183357F0)

inline static constexpr unsigned int DEJCPEAMDAI_TypeDefinitionIndex = 58024;

class DEJCPEAMDAI : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJCPEAMDAI__CTOR_OFFSET))(this);
	}
};
