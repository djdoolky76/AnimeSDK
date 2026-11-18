#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShaderPathID_TypeDefinitionIndex = 27120;

	enum class ShaderPathID : ::System::Int32
	{
		ParticlesLit = 4,
		Count = 8,
		BakedLit = 7,
		ParticlesSimpleLit = 5,
		TerrainLit = 3,
		Unlit = 2,
		SimpleLit = 1,
		Lit = 0,
		ParticlesUnlit = 6,
	};
}
