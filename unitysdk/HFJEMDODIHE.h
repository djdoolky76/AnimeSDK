#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define HFJEMDODIHE__CTOR_OFFSET UNITYSDK_OFFSET(0x11013240)

inline static constexpr unsigned int HFJEMDODIHE_TypeDefinitionIndex = 65810;

class HFJEMDODIHE : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJEMDODIHE__CTOR_OFFSET))(this);
	}
};
