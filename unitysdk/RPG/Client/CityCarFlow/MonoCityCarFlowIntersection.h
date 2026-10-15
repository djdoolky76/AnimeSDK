#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class HBFIBDGJLHE;
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_CITYCARFLOW_MONOCITYCARFLOWINTERSECTION_CTOR_OFFSET UNITYSDK_OFFSET(0xCB72FE0)

namespace RPG::Client::CityCarFlow
{
	inline static constexpr unsigned int MonoCityCarFlowIntersection_TypeDefinitionIndex = 82227;

	class MonoCityCarFlowIntersection : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::System::Object*>* Lanes; // 0x18
		::System::String* SignName; // 0x20
		::System::Single SignRuleTimeOffset; // 0x28
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Object*>* SignRules; // 0x30
		::HBFIBDGJLHE* Proxy; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCARFLOWINTERSECTION_CTOR_OFFSET))(this);
		}

	};
}
