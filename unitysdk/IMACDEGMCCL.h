#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define IMACDEGMCCL__CTOR_OFFSET UNITYSDK_OFFSET(0x19888300)

inline static constexpr unsigned int IMACDEGMCCL_TypeDefinitionIndex = 65015;

class IMACDEGMCCL : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMACDEGMCCL__CTOR_OFFSET))(this);
	}
};
