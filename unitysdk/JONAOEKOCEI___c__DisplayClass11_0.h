#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
namespace RPG::Client { class MonoEffect; }

#define JONAOEKOCEI___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB2AC620)
#define JONAOEKOCEI___C__DISPLAYCLASS11_0__UPDATE_B__0_OFFSET UNITYSDK_OFFSET(0xB2AC720)

inline static constexpr unsigned int JONAOEKOCEI___c__DisplayClass11_0_TypeDefinitionIndex = 60186;

	class JONAOEKOCEI___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::UnityEngine::Quaternion particleRot; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JONAOEKOCEI___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Void _Update_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + JONAOEKOCEI___C__DISPLAYCLASS11_0__UPDATE_B__0_OFFSET))(this, a1, a2);
		}

	};
