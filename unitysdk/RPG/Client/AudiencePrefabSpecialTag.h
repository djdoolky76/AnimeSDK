#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_AUDIENCEPREFABSPECIALTAG_CTOR_OFFSET UNITYSDK_OFFSET(0xD00E550)

namespace RPG::Client
{
	inline static constexpr unsigned int AudiencePrefabSpecialTag_TypeDefinitionIndex = 71079;

	class AudiencePrefabSpecialTag : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEPREFABSPECIALTAG_CTOR_OFFSET))(this);
		}

	};
}
