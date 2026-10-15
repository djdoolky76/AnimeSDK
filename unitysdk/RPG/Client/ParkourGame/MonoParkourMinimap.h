#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURMINIMAP_CTOR_OFFSET UNITYSDK_OFFSET(0xDA76AA0)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourMinimap_TypeDefinitionIndex = 74152;

	class MonoParkourMinimap : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 Center; // 0x18
		::UnityEngine::Vector3 Size; // 0x24
		::Il2CppArray<::System::Object*>* Roads; // 0x30
		// static const ::System::Object TextureSize; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURMINIMAP_CTOR_OFFSET))(this);
		}

	};
}
