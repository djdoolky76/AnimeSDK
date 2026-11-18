#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define KHPIDLKKDEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1299B850)

inline static constexpr unsigned int KHPIDLKKDEN_TypeDefinitionIndex = 74030;

class KHPIDLKKDEN : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPIDLKKDEN__CTOR_OFFSET))(this);
	}
};
