#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class ParticleSystemBakeMeshOptions : ::System::Int32
	{
		BakeRotationAndScale = 1,
		BakePosition = 2,
		ParticleBakeMeshAddPadding = 4,
		Default = 0,
	};
}
