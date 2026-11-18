#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_CUSTOMLIGHTTEST_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16550530)
#define MOLEMOLE_CUSTOMLIGHTTEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x16550610)
#define MOLEMOLE_CUSTOMLIGHTTEST__CTOR_OFFSET UNITYSDK_OFFSET(0x16550910)

namespace MoleMole
{
	inline static constexpr unsigned int CustomLightTest_TypeDefinitionIndex = 48215;

	class CustomLightTest : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Color _CustomGIColor; // 0x18
		::UnityEngine::Color _CustomMainLightColor; // 0x28
		::System::Single Intensity; // 0x38
		::System::Byte _padding0[0x4];
		::UnityEngine::Cubemap* ReflectionCube; // 0x40
		::System::Single ReflectionCubeRotation; // 0x48
		::System::Byte _padding1[0x4];
		::UnityEngine::Material* OIJKKAAIBAJ; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CUSTOMLIGHTTEST__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CUSTOMLIGHTTEST_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CUSTOMLIGHTTEST_UPDATE_OFFSET))(this);
		}
	};
}
