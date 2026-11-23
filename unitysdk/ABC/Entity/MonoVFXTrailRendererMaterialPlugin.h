#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Material; }

#define ABC_ENTITY_MONOVFXTRAILRENDERERMATERIALPLUGIN_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x22D4920)
#define ABC_ENTITY_MONOVFXTRAILRENDERERMATERIALPLUGIN_F5E407B60CCCAC07_OFFSET UNITYSDK_OFFSET(0x22D4760)
#define ABC_ENTITY_MONOVFXTRAILRENDERERMATERIALPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::Entity
{
	inline static constexpr unsigned int MonoVFXTrailRendererMaterialPlugin_TypeDefinitionIndex = 7272;

	class MonoVFXTrailRendererMaterialPlugin : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single DissolveRange; // 0x20
		::System::Single A0697E8A5AD2AB07; // 0x24
		::System::Single DissolveSmoothness; // 0x28
		::System::Single F1486C0816DD1787; // 0x2C
		::System::Single NoiseIntensity; // 0x30
		::System::Single AB7BCB7502E68EE1; // 0x34
		::UnityEngine::Material* B7A89CBF2DE7201F; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOVFXTRAILRENDERERMATERIALPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void F5E407B60CCCAC07()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOVFXTRAILRENDERERMATERIALPLUGIN_F5E407B60CCCAC07_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOVFXTRAILRENDERERMATERIALPLUGIN_BF13C91AD80643D2_OFFSET))(this);
		}
	};
}
