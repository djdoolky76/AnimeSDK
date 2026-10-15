#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Mono/FiveDimBodyCollisionSensor.h"
namespace System { class Action; }
namespace UnityEngine { class Collision; }

#define RPG_CLIENT_MONO_FIVEDIMBODYCOLLISIONSENSORWITHSTAY_ADD_ONSTAY_OFFSET UNITYSDK_OFFSET(0xD72CB60)
#define RPG_CLIENT_MONO_FIVEDIMBODYCOLLISIONSENSORWITHSTAY_CTOR_OFFSET UNITYSDK_OFFSET(0xD72CC20)
#define RPG_CLIENT_MONO_FIVEDIMBODYCOLLISIONSENSORWITHSTAY_ONCOLLISIONSTAY_OFFSET UNITYSDK_OFFSET(0xD72CAF0)
#define RPG_CLIENT_MONO_FIVEDIMBODYCOLLISIONSENSORWITHSTAY_REMOVE_ONSTAY_OFFSET UNITYSDK_OFFSET(0xD72CBC0)

namespace RPG::Client::Mono
{
	class FiveDimBodyCollisionSensorWithStay : public ::RPG::Client::Mono::FiveDimBodyCollisionSensor
	{
	public:
		::System::Action* OnStay; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMBODYCOLLISIONSENSORWITHSTAY_CTOR_OFFSET))(this);
		}

		::System::Void OnCollisionStay(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMBODYCOLLISIONSENSORWITHSTAY_ONCOLLISIONSTAY_OFFSET))(this, a1);
		}

		::System::Void add_OnStay(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMBODYCOLLISIONSENSORWITHSTAY_ADD_ONSTAY_OFFSET))(this, a1);
		}

		::System::Void remove_OnStay(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMBODYCOLLISIONSENSORWITHSTAY_REMOVE_ONSTAY_OFFSET))(this, a1);
		}

	};
}
