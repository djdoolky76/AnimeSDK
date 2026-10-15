#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_FJBBJCJGFNF_CTOR_OFFSET UNITYSDK_OFFSET(0xC6B1900)

namespace RPG::Client
{
	inline static constexpr unsigned int AudienceGroupInstance_FJBBJCJGFNF_TypeDefinitionIndex = 69143;

	class AudienceGroupInstance_FJBBJCJGFNF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_FJBBJCJGFNF_CTOR_OFFSET))(this);
		}

	};
}
