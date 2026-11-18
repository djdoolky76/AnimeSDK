#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define DBPGGMPEMFO__CTOR_OFFSET UNITYSDK_OFFSET(0x15A2B270)

inline static constexpr unsigned int DBPGGMPEMFO_TypeDefinitionIndex = 53808;

class DBPGGMPEMFO : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPGGMPEMFO__CTOR_OFFSET))(this);
	}
};
