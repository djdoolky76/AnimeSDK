#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define DOBHGKLLBEA_AKMHKBFCBCA_CTOR_OFFSET UNITYSDK_OFFSET(0x11FDF090)

	class DOBHGKLLBEA_AKMHKBFCBCA : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::UnityEngine::Transform* EGJIOFMAHGK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBHGKLLBEA_AKMHKBFCBCA_CTOR_OFFSET))(this);
		}

	};
