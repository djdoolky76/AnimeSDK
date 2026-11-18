#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIGDIGIBOOEFFECT_EFFECTACTIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A04F880)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigDigibooEffect_EffectActionContext_TypeDefinitionIndex = 81397;

	class ConfigDigibooEffect_EffectActionContext : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDIGIBOOEFFECT_EFFECTACTIONCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
