#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsWorld; }

#define JOFANLNIMPC_JPKHGCEMGFK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A47FA90)

inline static constexpr unsigned int JOFANLNIMPC_JPKHGCEMGFK_TypeDefinitionIndex = 54087;

class JOFANLNIMPC_JPKHGCEMGFK : public ::System::Object
{
public:
	::Nap::NapECS::EcsWorld* GEEHGDABNJF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFANLNIMPC_JPKHGCEMGFK__CTOR_OFFSET))(this);
	}
};
