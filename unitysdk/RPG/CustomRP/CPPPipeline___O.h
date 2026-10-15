#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Light_OnParticleLightEvent; }

namespace RPG::CustomRP
{
	class CPPPipeline___O : public ::System::Object
	{
	public:
		static ::UnityEngine::Light_OnParticleLightEvent** StaticGet__0___ParticleLightOnLoad()
		{
			return (::UnityEngine::Light_OnParticleLightEvent**)UnitySDK::FromName("RPG.CustomRP", "<>O")->GetStaticField(0x2CBC0);
		}

	};
}
