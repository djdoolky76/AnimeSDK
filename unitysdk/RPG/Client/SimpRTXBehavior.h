#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

#define RPG_CLIENT_SIMPRTXBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xEB33C00)

namespace RPG::Client
{
	inline static constexpr unsigned int SimpRTXBehavior_TypeDefinitionIndex = 72150;

	class SimpRTXBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXBEHAVIOR_CTOR_OFFSET))(this);
		}

	};
}
