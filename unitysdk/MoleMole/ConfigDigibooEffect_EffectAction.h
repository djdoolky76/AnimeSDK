#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigDigibooEffect_EffectActionContext; }
namespace System { class String; }

#define MOLEMOLE_CONFIGDIGIBOOEFFECT_EFFECTACTION_ONTRIGGER_OFFSET UNITYSDK_OFFSET(0x19B2CD00)
#define MOLEMOLE_CONFIGDIGIBOOEFFECT_EFFECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19B2CD50)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigDigibooEffect_EffectAction_TypeDefinitionIndex = 81399;

	class ConfigDigibooEffect_EffectAction : public ::System::Object
	{
	public:
		::System::Single TriggerTime; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* AnimationName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDIGIBOOEFFECT_EFFECTACTION__CTOR_OFFSET))(this);
		}

		::System::Void OnTrigger(::MoleMole::ConfigDigibooEffect_EffectActionContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigDigibooEffect_EffectActionContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDIGIBOOEFFECT_EFFECTACTION_ONTRIGGER_OFFSET))(this, context);
		}
	};
}
