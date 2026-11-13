#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/StateValueEntry.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_CLIENT_VECTORSTATEVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC62B00)

namespace RPG::Client
{
	inline static constexpr unsigned int VectorStateValue_TypeDefinitionIndex = 72990;

	class VectorStateValue : public ::RPG::Client::StateValueEntry
	{
	public:
		::UnityEngine::Vector4 V; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VECTORSTATEVALUE_CTOR_OFFSET))(this);
		}

	};
}
