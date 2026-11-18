#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define EPCHMNJAJBB__CTOR_OFFSET UNITYSDK_OFFSET(0x169B2FA0)

inline static constexpr unsigned int EPCHMNJAJBB_TypeDefinitionIndex = 65333;

class EPCHMNJAJBB : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCHMNJAJBB__CTOR_OFFSET))(this);
	}
};
