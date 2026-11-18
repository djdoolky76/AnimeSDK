#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OGADKOBJHJL;

#define JMHFOKCBCNF_SPAWN_OFFSET UNITYSDK_OFFSET(0x1A47CF10)
#define JMHFOKCBCNF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A47CF90)

inline static constexpr unsigned int JMHFOKCBCNF_TypeDefinitionIndex = 85892;

class JMHFOKCBCNF : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMHFOKCBCNF__CTOR_OFFSET))(this);
	}

	::OGADKOBJHJL* Spawn()
	{
		return ((::OGADKOBJHJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMHFOKCBCNF_SPAWN_OFFSET))(this);
	}
};
