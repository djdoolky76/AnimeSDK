#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Component.h"

#define UNITYENGINE_BEHAVIOUR_A46A031EE965D849_OFFSET UNITYSDK_OFFSET(0x41453B0)
#define UNITYENGINE_BEHAVIOUR_A5ABE49B4D814BD5_OFFSET UNITYSDK_OFFSET(0x41453F0)
#define UNITYENGINE_BEHAVIOUR_B8212E874BC69D7A_OFFSET UNITYSDK_OFFSET(0x4145440)
#define UNITYENGINE_BEHAVIOUR_E66D0BEF1CF98356_OFFSET UNITYSDK_OFFSET(0x4145370)
#define UNITYENGINE_BEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x410F8D0)

namespace UnityEngine
{
	inline static constexpr unsigned int Behaviour_TypeDefinitionIndex = 17387;

	class Behaviour : public ::UnityEngine::Component
	{
	public:
		::System::Boolean E66D0BEF1CF98356()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BEHAVIOUR_E66D0BEF1CF98356_OFFSET))(this);
		}

		::System::Boolean A46A031EE965D849()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BEHAVIOUR_A46A031EE965D849_OFFSET))(this);
		}

		::System::Void A5ABE49B4D814BD5(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_BEHAVIOUR_A5ABE49B4D814BD5_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void B8212E874BC69D7A(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_BEHAVIOUR_B8212E874BC69D7A_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
