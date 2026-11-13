#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_CITYCARFLOW_MONOCITYCARFLOWROAD_RULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CFFE410)

namespace RPG::Client::CityCarFlow
{
	inline static constexpr unsigned int MonoCityCarFlowRoad_Rule_TypeDefinitionIndex = 85107;

	class MonoCityCarFlowRoad_Rule : public ::System::Object
	{
	public:
		::System::String* IntersectionName; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCARFLOWROAD_RULE_CTOR_OFFSET))(this);
		}

	};
}
