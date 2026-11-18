#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define IOGPIAPLAJI__CTOR_OFFSET UNITYSDK_OFFSET(0x15C285C0)

inline static constexpr unsigned int IOGPIAPLAJI_TypeDefinitionIndex = 83974;

class IOGPIAPLAJI : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOGPIAPLAJI__CTOR_OFFSET))(this);
	}
};
