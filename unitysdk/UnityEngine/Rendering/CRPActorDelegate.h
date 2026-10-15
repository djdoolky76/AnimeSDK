#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

#define UNITYENGINE_RENDERING_CRPACTORDELEGATE_SETSAFEDELETE_OFFSET UNITYSDK_OFFSET(0x1F41BE40)

namespace UnityEngine::Rendering
{
	class CRPActorDelegate : public ::UnityEngine::Behaviour
	{
	public:
		static ::System::Void SetSafeDelete(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPACTORDELEGATE_SETSAFEDELETE_OFFSET))(a1);
		}

	};
}
