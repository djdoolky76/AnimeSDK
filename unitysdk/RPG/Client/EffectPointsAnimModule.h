#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEFCMPKCMAF;

#define RPG_CLIENT_EFFECTPOINTSANIMMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0xCD0EE30)
#define RPG_CLIENT_EFFECTPOINTSANIMMODULE_KEDAJPMCGOE_OFFSET UNITYSDK_OFFSET(0xCD0EDE0)
#define RPG_CLIENT_EFFECTPOINTSANIMMODULE_MEJPCPBPMNM_OFFSET UNITYSDK_OFFSET(0xCD0ED90)

namespace RPG::Client
{
	inline static constexpr unsigned int EffectPointsAnimModule_TypeDefinitionIndex = 70627;

	class EffectPointsAnimModule : public ::System::Object
	{
	public:
		::System::Boolean Enabled; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPOINTSANIMMODULE_CTOR_OFFSET))(this);
		}

		::System::Void MEJPCPBPMNM(::CEFCMPKCMAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEFCMPKCMAF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPOINTSANIMMODULE_MEJPCPBPMNM_OFFSET))(this, a1);
		}

		::System::Void KEDAJPMCGOE(::CEFCMPKCMAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEFCMPKCMAF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPOINTSANIMMODULE_KEDAJPMCGOE_OFFSET))(this, a1);
		}

	};
}
