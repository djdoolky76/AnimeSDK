#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define BPJDBNCENIE__CTOR_OFFSET UNITYSDK_OFFSET(0x159A40E0)

inline static constexpr unsigned int BPJDBNCENIE_TypeDefinitionIndex = 53274;

class BPJDBNCENIE : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJDBNCENIE__CTOR_OFFSET))(this);
	}
};
