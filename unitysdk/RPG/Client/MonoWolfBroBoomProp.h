#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::GameCore { class AdventureAttackDetectShapeConfig; }

#define RPG_CLIENT_MONOWOLFBROBOOMPROP_CTOR_OFFSET UNITYSDK_OFFSET(0xD880030)

namespace RPG::Client
{
	class MonoWolfBroBoomProp : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::GameCore::AdventureAttackDetectShapeConfig* AttackDetectConfig; // 0x18
		::System::Boolean AttackDetectCollision; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOWOLFBROBOOMPROP_CTOR_OFFSET))(this);
		}

	};
}
