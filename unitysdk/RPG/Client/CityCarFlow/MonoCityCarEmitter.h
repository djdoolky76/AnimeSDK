#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_CITYCARFLOW_MONOCITYCAREMITTER_CTOR_OFFSET UNITYSDK_OFFSET(0xCB72FD0)

namespace RPG::Client::CityCarFlow
{
	class MonoCityCarEmitter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::System::String*>* RoadNames; // 0x18
		::UnityEngine::Vector2 RandomRange; // 0x20
		::Il2CppArray<::System::Object*>* Rules; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCAREMITTER_CTOR_OFFSET))(this);
		}

	};
}
