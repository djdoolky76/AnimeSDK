#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_EFFECT_PSEMITCONTROLLERMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCD4E110)

namespace RPG::Client
{
	class Effect_PSEmitControllerMonoPlugin
	{
	public:
		::Il2CppArray<::System::Object*>* EmitList; // 0x30
		::UnityEngine::ParticleSystem* MainEmitter; // 0x38
		::System::Single ScaleMultiplier; // 0x40
		::System::Byte _padding0[0x4];
		::System::String* ConfigPath; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PSEMITCONTROLLERMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
