#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define ODDCKEGBOKG__CTOR_OFFSET UNITYSDK_OFFSET(0x18435D30)

inline static constexpr unsigned int ODDCKEGBOKG_TypeDefinitionIndex = 93240;

class ODDCKEGBOKG : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODDCKEGBOKG__CTOR_OFFSET))(this);
	}
};
