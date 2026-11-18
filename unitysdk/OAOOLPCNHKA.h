#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystem.h"

#define OAOOLPCNHKA__CTOR_OFFSET UNITYSDK_OFFSET(0xE0E2830)

inline static constexpr unsigned int OAOOLPCNHKA_TypeDefinitionIndex = 71066;

class OAOOLPCNHKA : public ::Nap::NapECS::EcsSystem
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOOLPCNHKA__CTOR_OFFSET))(this);
	}
};
