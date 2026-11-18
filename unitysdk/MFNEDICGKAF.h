#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define MFNEDICGKAF__CTOR_OFFSET UNITYSDK_OFFSET(0x18531360)

inline static constexpr unsigned int MFNEDICGKAF_TypeDefinitionIndex = 73220;

class MFNEDICGKAF : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFNEDICGKAF__CTOR_OFFSET))(this);
	}
};
