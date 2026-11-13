#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class TrailRenderer; }

#define RPG_CLIENT_MONOEFFECTTRAILRENDERER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1ADF4D10)
#define RPG_CLIENT_MONOEFFECTTRAILRENDERER_CTOR_OFFSET UNITYSDK_OFFSET(0x1ADF5150)
#define RPG_CLIENT_MONOEFFECTTRAILRENDERER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1ADF5100)
#define RPG_CLIENT_MONOEFFECTTRAILRENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1ADF4DE0)
#define RPG_CLIENT_MONOEFFECTTRAILRENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1ADF4E40)
#define RPG_CLIENT_MONOEFFECTTRAILRENDERER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1ADF4EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectTrailRenderer_TypeDefinitionIndex = 72104;

	class MonoEffectTrailRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single WidthFact; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::TrailRenderer* BMPJHKKIGAF; // 0x20
		::System::Int32 AJFDMBHMJED; // 0x28
		::System::Single GHABAAOGBNO; // 0x2C
		::System::Single CFFGNKPJAGE; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTTRAILRENDERER_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTTRAILRENDERER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTTRAILRENDERER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTTRAILRENDERER_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTTRAILRENDERER_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTTRAILRENDERER_ONDESTROY_OFFSET))(this);
		}

	};
}
