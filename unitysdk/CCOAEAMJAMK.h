#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CCOAEAMJAMK__CTOR_OFFSET UNITYSDK_OFFSET(0x128C7A80)

inline static constexpr unsigned int CCOAEAMJAMK_TypeDefinitionIndex = 83449;

class CCOAEAMJAMK : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOAEAMJAMK__CTOR_OFFSET))(this);
	}
};
