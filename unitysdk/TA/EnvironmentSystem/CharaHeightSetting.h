#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class E2E2311225330715; }
namespace UnityEngine { class Renderer; }

#define TA_ENVIRONMENTSYSTEM_CHARAHEIGHTSETTING_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x28C4820)
#define TA_ENVIRONMENTSYSTEM_CHARAHEIGHTSETTING_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x28C48F0)
#define TA_ENVIRONMENTSYSTEM_CHARAHEIGHTSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int CharaHeightSetting_TypeDefinitionIndex = 16333;

	class CharaHeightSetting : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single CharaHeight; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::UnityEngine::Renderer*>* RendererList; // 0x28
		::UnityEngine::E2E2311225330715* FB3319B3DDB7F9E9; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_CHARAHEIGHTSETTING__CTOR_OFFSET))(this);
		}

		::System::Void E02954280801633F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_CHARAHEIGHTSETTING_E02954280801633F_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_CHARAHEIGHTSETTING_BF13C91AD80643D2_OFFSET))(this);
		}
	};
}
