#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define DOBHGKLLBEA_AKMHKBFCBCA_CTOR_OFFSET UNITYSDK_OFFSET(0x11FD9C90)

inline static constexpr unsigned int DOBHGKLLBEA_AKMHKBFCBCA_TypeDefinitionIndex = 71477;

	class DOBHGKLLBEA_AKMHKBFCBCA : public ::System::Object
	{
	public:
		::UnityEngine::Transform* EGJIOFMAHGK; // 0x10
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBHGKLLBEA_AKMHKBFCBCA_CTOR_OFFSET))(this);
		}

	};
