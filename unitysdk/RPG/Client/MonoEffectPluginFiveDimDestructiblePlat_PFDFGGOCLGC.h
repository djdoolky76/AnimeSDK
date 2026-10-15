#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class ParticleSystem; }

namespace RPG::Client
{
	struct alignas(8) MonoEffectPluginFiveDimDestructiblePlat_PFDFGGOCLGC
	{
		::System::Single IKAEPOBLOGE; // 0x10
		::UnityEngine::Vector3 AHFDKBCHPBF; // 0x14
		::UnityEngine::Vector3 BDNEGGEADNL; // 0x20
		::System::Byte _padding0[0x4];
		::UnityEngine::ParticleSystem* GEIEKOJPANB; // 0x30
	};
}
