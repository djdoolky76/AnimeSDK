#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Component.h"

#define UNITYENGINE_FOLIAGEWINDSTATE_A5ABE49B4D814BD5_OFFSET UNITYSDK_OFFSET(0x41C40D0)
#define UNITYENGINE_FOLIAGEWINDSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x410F8D0)

namespace UnityEngine
{
	inline static constexpr unsigned int FoliageWindState_TypeDefinitionIndex = 21039;

	class FoliageWindState : public ::UnityEngine::Component
	{
	public:
		::System::Void A5ABE49B4D814BD5(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FOLIAGEWINDSTATE_A5ABE49B4D814BD5_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FOLIAGEWINDSTATE__CTOR_OFFSET))(this);
		}
	};
}
