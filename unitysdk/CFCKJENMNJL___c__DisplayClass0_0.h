#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
namespace RPG::Client { class MonoEffect; }

#define CFCKJENMNJL___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCA0A0B0)
#define CFCKJENMNJL___C__DISPLAYCLASS0_0__ONACTIVE_B__0_OFFSET UNITYSDK_OFFSET(0xCA0A0E0)

	class CFCKJENMNJL___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::UnityEngine::Quaternion rot; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFCKJENMNJL___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnActive_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CFCKJENMNJL___C__DISPLAYCLASS0_0__ONACTIVE_B__0_OFFSET))(this, a1, a2);
		}

	};
