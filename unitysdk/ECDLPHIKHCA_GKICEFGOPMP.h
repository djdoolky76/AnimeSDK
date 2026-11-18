#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DPPLIMLDPDG;

#define ECDLPHIKHCA_GKICEFGOPMP_OGPIGIDNDGK_OFFSET UNITYSDK_OFFSET(0x20034600)
#define ECDLPHIKHCA_GKICEFGOPMP__CTOR_OFFSET UNITYSDK_OFFSET(0x200345F0)

inline static constexpr unsigned int ECDLPHIKHCA_GKICEFGOPMP_TypeDefinitionIndex = 96551;

class ECDLPHIKHCA_GKICEFGOPMP : public ::System::Object
{
public:
	::DPPLIMLDPDG* OGIMECHIIDD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECDLPHIKHCA_GKICEFGOPMP__CTOR_OFFSET))(this);
	}

	::System::Void OGPIGIDNDGK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECDLPHIKHCA_GKICEFGOPMP_OGPIGIDNDGK_OFFSET))(this);
	}
};
