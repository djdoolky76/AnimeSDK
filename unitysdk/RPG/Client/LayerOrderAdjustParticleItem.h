#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class ParticleSystemRenderer; }

#define RPG_CLIENT_LAYERORDERADJUSTPARTICLEITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xD38EBD0)

namespace RPG::Client
{
	class LayerOrderAdjustParticleItem : public ::System::Object
	{
	public:
		::UnityEngine::ParticleSystemRenderer* ParticleSysRenderer; // 0x10
		::System::Int32 Offset; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LAYERORDERADJUSTPARTICLEITEM_CTOR_OFFSET))(this);
		}

	};
}
