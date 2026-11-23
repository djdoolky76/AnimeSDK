#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define ABC_TECHART_EFFECTMONOBEHAVIOR_A2F13B4B2E757C7E_OFFSET UNITYSDK_OFFSET(0x2870640)
#define ABC_TECHART_EFFECTMONOBEHAVIOR_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x2870710)
#define ABC_TECHART_EFFECTMONOBEHAVIOR_E37E569E4B7B49B8_OFFSET UNITYSDK_OFFSET(0x2870770)
#define ABC_TECHART_EFFECTMONOBEHAVIOR_EABDCC6794BE9209_OFFSET UNITYSDK_OFFSET(0x28706A0)
#define ABC_TECHART_EFFECTMONOBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x181C280)

namespace ABC::TechArt
{
	inline static constexpr unsigned int EffectMonoBehavior_TypeDefinitionIndex = 16104;

	class EffectMonoBehavior : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single ParticleSystemRateOverTime; // 0x20

		::System::Void A2F13B4B2E757C7E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_EFFECTMONOBEHAVIOR_A2F13B4B2E757C7E_OFFSET))(this);
		}

		::System::Void E37E569E4B7B49B8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_EFFECTMONOBEHAVIOR_E37E569E4B7B49B8_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_EFFECTMONOBEHAVIOR_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_EFFECTMONOBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void EABDCC6794BE9209(::System::Single& B08C100B92DF4430)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + ABC_TECHART_EFFECTMONOBEHAVIOR_EABDCC6794BE9209_OFFSET))(this, B08C100B92DF4430);
		}
	};
}
