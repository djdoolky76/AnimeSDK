#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define DBIDOJCBKPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12400200)

inline static constexpr unsigned int DBIDOJCBKPJ_TypeDefinitionIndex = 63773;

class DBIDOJCBKPJ : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIDOJCBKPJ__CTOR_OFFSET))(this);
	}
};
