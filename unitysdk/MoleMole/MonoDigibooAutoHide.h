#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONODIGIBOOAUTOHIDE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x14AF8C80)
#define MOLEMOLE_MONODIGIBOOAUTOHIDE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x14AF8C30)
#define MOLEMOLE_MONODIGIBOOAUTOHIDE_UPDATE_OFFSET UNITYSDK_OFFSET(0x14AF8CC0)
#define MOLEMOLE_MONODIGIBOOAUTOHIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x14AF8D60)

namespace MoleMole
{
	inline static constexpr unsigned int MonoDigibooAutoHide_TypeDefinitionIndex = 82722;

	class MonoDigibooAutoHide : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single Delay; // 0x18
		::System::Single GPDCBHEPDGL; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIGIBOOAUTOHIDE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIGIBOOAUTOHIDE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIGIBOOAUTOHIDE_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIGIBOOAUTOHIDE_UPDATE_OFFSET))(this);
		}
	};
}
