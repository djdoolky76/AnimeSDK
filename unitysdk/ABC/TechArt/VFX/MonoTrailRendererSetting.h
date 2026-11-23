#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class TrailRenderer; }

#define ABC_TECHART_VFX_MONOTRAILRENDERERSETTING_B807AE2D8C77B476_OFFSET UNITYSDK_OFFSET(0x28E5D80)
#define ABC_TECHART_VFX_MONOTRAILRENDERERSETTING_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x28E5EB0)
#define ABC_TECHART_VFX_MONOTRAILRENDERERSETTING_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x28E5D30)
#define ABC_TECHART_VFX_MONOTRAILRENDERERSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::TechArt::VFX
{
	inline static constexpr unsigned int MonoTrailRendererSetting_TypeDefinitionIndex = 16414;

	class MonoTrailRendererSetting : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean ClearAtAwake; // 0x20
		::System::Byte _padding0[0x7];
		::Il2CppArray<::UnityEngine::TrailRenderer*>* EA46B1860950C228; // 0x28

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOTRAILRENDERERSETTING_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOTRAILRENDERERSETTING__CTOR_OFFSET))(this);
		}

		::System::Void B807AE2D8C77B476()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOTRAILRENDERERSETTING_B807AE2D8C77B476_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOTRAILRENDERERSETTING_FDBCDBBFE02CD51A_OFFSET))(this);
		}
	};
}
