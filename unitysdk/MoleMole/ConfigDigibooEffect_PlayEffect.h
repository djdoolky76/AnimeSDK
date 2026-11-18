#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigDigibooEffect_EffectAction.h"

namespace System { class String; }

#define MOLEMOLE_CONFIGDIGIBOOEFFECT_PLAYEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xFFF18E0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigDigibooEffect_PlayEffect_TypeDefinitionIndex = 81398;

	class ConfigDigibooEffect_PlayEffect : public ::MoleMole::ConfigDigibooEffect_EffectAction
	{
	public:
		::System::String* EffectPath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDIGIBOOEFFECT_PLAYEFFECT__CTOR_OFFSET))(this);
		}
	};
}
