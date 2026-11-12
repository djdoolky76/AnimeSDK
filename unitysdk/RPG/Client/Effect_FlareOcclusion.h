#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class GDHFBPEJPHC;

#define RPG_CLIENT_EFFECT_FLAREOCCLUSION_AWAKE_OFFSET UNITYSDK_OFFSET(0xD6F1E80)
#define RPG_CLIENT_EFFECT_FLAREOCCLUSION_CTOR_OFFSET UNITYSDK_OFFSET(0xD6F2050)
#define RPG_CLIENT_EFFECT_FLAREOCCLUSION_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0xD6F1FE0)
#define RPG_CLIENT_EFFECT_FLAREOCCLUSION_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD6F1EF0)
#define RPG_CLIENT_EFFECT_FLAREOCCLUSION_UPDATE_OFFSET UNITYSDK_OFFSET(0xD6F1F90)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_FlareOcclusion_TypeDefinitionIndex = 72449;

	class Effect_FlareOcclusion : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single EnableRange; // 0x18
		::System::Byte _padding0[0x4];
		::GDHFBPEJPHC* EIGCKKONNIO; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FLAREOCCLUSION_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FLAREOCCLUSION_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FLAREOCCLUSION_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FLAREOCCLUSION_UPDATE_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FLAREOCCLUSION_ONDRAWGIZMOS_OFFSET))(this);
		}

	};
}
