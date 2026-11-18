#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define BONHFEGEEGP__CTOR_OFFSET UNITYSDK_OFFSET(0x14C57A90)

inline static constexpr unsigned int BONHFEGEEGP_TypeDefinitionIndex = 68826;

class BONHFEGEEGP : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONHFEGEEGP__CTOR_OFFSET))(this);
	}
};
