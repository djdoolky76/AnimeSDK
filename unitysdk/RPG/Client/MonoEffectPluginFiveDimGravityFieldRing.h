#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class LineRenderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMGRAVITYFIELDRING_CTOR_OFFSET UNITYSDK_OFFSET(0xD7FEF80)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMGRAVITYFIELDRING_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7FEEE0)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMGRAVITYFIELDRING_INIT_OFFSET UNITYSDK_OFFSET(0xD7FEB80)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMGRAVITYFIELDRING_JIJELKLMIBO_OFFSET UNITYSDK_OFFSET(0xD7FECE0)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMGRAVITYFIELDRING_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7FEE30)

namespace RPG::Client
{
	class MonoEffectPluginFiveDimGravityFieldRing : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::UnityEngine::GameObject* RingParticle; // 0x28
		::System::Single RingParticleRadius; // 0x30
		::System::UInt32 UnitLengthIndex; // 0x34
		::UnityEngine::LineRenderer* Curve; // 0x38
		::UnityEngine::Vector3 AMHNNDHJNKD; // 0x40
		::System::Byte _padding0[0x4];
		::UnityEngine::LineRenderer* KDCGABOBNCE; // 0x50
		::System::Single LFGACCIBFBC; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMGRAVITYFIELDRING_CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMGRAVITYFIELDRING_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void JIJELKLMIBO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMGRAVITYFIELDRING_JIJELKLMIBO_OFFSET))(this, a1);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMGRAVITYFIELDRING_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMGRAVITYFIELDRING_DISPOSEPLUGIN_OFFSET))(this);
		}

	};
}
