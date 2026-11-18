#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define KFKKHKDCGLB__CTOR_OFFSET UNITYSDK_OFFSET(0x14FD5C90)

inline static constexpr unsigned int KFKKHKDCGLB_TypeDefinitionIndex = 61709;

class KFKKHKDCGLB : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKKHKDCGLB__CTOR_OFFSET))(this);
	}
};
