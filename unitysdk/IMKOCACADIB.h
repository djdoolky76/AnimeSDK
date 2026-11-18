#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define IMKOCACADIB__CTOR_OFFSET UNITYSDK_OFFSET(0x187102A0)

inline static constexpr unsigned int IMKOCACADIB_TypeDefinitionIndex = 41972;

class IMKOCACADIB : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMKOCACADIB__CTOR_OFFSET))(this);
	}
};
