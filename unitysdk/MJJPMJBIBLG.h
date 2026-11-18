#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define MJJPMJBIBLG__CTOR_OFFSET UNITYSDK_OFFSET(0x151D9540)

inline static constexpr unsigned int MJJPMJBIBLG_TypeDefinitionIndex = 72129;

class MJJPMJBIBLG : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJJPMJBIBLG__CTOR_OFFSET))(this);
	}
};
