#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFNPKBOEJJO_SizeSetting.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class IFNPKBOEJJO;
namespace UnityEngine { class Shader; }

#define OCEANSYSTEM_OCEANSHAREDWAVE_CCTOR_OFFSET UNITYSDK_OFFSET(0xBFB1B00)
#define OCEANSYSTEM_OCEANSHAREDWAVE_CTOR_OFFSET UNITYSDK_OFFSET(0xBFB1AD0)
#define OCEANSYSTEM_OCEANSHAREDWAVE_KANEMCMHEKG_OFFSET UNITYSDK_OFFSET(0xBFB1620)
#define OCEANSYSTEM_OCEANSHAREDWAVE_LLINPDCGMMN_OFFSET UNITYSDK_OFFSET(0xBFB1670)
#define OCEANSYSTEM_OCEANSHAREDWAVE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xBFB1A70)
#define OCEANSYSTEM_OCEANSHAREDWAVE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xBFB1A50)
#define OCEANSYSTEM_OCEANSHAREDWAVE_UPDATE_OFFSET UNITYSDK_OFFSET(0xBFB1A60)

namespace OceanSystem
{
	inline static constexpr unsigned int OceanSharedWave_TypeDefinitionIndex = 48979;

	class OceanSharedWave : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Shader* m_ComputeNormalShader; // 0x18
		::UnityEngine::Shader* m_BlurShader; // 0x20
		::IFNPKBOEJJO_SizeSetting m_SimulationSize; // 0x28
		::System::Single m_WindSpeed; // 0x2C
		::System::Single m_WindRotation; // 0x30
		::System::Single m_WindTurbulence; // 0x34
		::System::Single m_TimeScale; // 0x38
		::System::Single jacobianRange; // 0x3C
		::System::Single jacobianScaling; // 0x40
		::System::Single jacobianBlur; // 0x44
		::IFNPKBOEJJO* FMLGNONNOLC; // 0x48
		static ::System::Single* StaticGet_DomainSize()
		{
			return (::System::Single*)UnitySDK::FromName("OceanSystem", "OceanSharedWave")->GetStaticField(0x14C10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANSYSTEM_OCEANSHAREDWAVE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCEANSYSTEM_OCEANSHAREDWAVE_CCTOR_OFFSET))();
		}

		::IFNPKBOEJJO* KANEMCMHEKG()
		{
			return ((::IFNPKBOEJJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANSYSTEM_OCEANSHAREDWAVE_KANEMCMHEKG_OFFSET))(this);
		}

		::System::Void LLINPDCGMMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANSYSTEM_OCEANSHAREDWAVE_LLINPDCGMMN_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANSYSTEM_OCEANSHAREDWAVE_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANSYSTEM_OCEANSHAREDWAVE_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANSYSTEM_OCEANSHAREDWAVE_ONDESTROY_OFFSET))(this);
		}

	};
}
