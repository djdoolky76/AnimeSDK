#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class MarbleEffect; }
namespace UnityEngine { class Transform; }

#define NDHMIJHMGIL___C__DISPLAYCLASS101_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBB48F30)
#define NDHMIJHMGIL___C__DISPLAYCLASS101_0__TRIGGERMARBLEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xBB48F40)

	class NDHMIJHMGIL___c__DisplayClass101_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* attachTransform; // 0x10
		::RPG::GameCore::MarbleEffect* config; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL___C__DISPLAYCLASS101_0_CTOR_OFFSET))(this);
		}

		::System::Void _TriggerMarbleEffect_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + NDHMIJHMGIL___C__DISPLAYCLASS101_0__TRIGGERMARBLEEFFECT_B__0_OFFSET))(this, a1, a2);
		}

	};
