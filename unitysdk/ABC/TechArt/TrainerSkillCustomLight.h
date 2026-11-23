#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class E2E2311225330715; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Renderer; }

#define ABC_TECHART_TRAINERSKILLCUSTOMLIGHT_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x28E9520)
#define ABC_TECHART_TRAINERSKILLCUSTOMLIGHT_E88AA380F3D900FA_OFFSET UNITYSDK_OFFSET(0x28E9570)
#define ABC_TECHART_TRAINERSKILLCUSTOMLIGHT_EEA5D6E8F4B2655A_OFFSET UNITYSDK_OFFSET(0x28E93D0)
#define ABC_TECHART_TRAINERSKILLCUSTOMLIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x28E98E0)

namespace ABC::TechArt
{
	inline static constexpr unsigned int TrainerSkillCustomLight_TypeDefinitionIndex = 16417;

	class TrainerSkillCustomLight : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean EnableCustomLight; // 0x20
		::System::Byte _padding0[0x7];
		::UnityEngine::Light* CustomLight; // 0x28
		::UnityEngine::GameObject* TargetGO; // 0x30
		::Il2CppArray<::UnityEngine::Renderer*>* F608C40402CA0128; // 0x38
		::UnityEngine::E2E2311225330715* FB3319B3DDB7F9E9; // 0x40
		::UnityEngine::E8984F4E44AE20E5 B20E12FD1CCC33AD; // 0x48
		::UnityEngine::E8984F4E44AE20E5 F0C952775A796A58; // 0x58

		::System::Void E88AA380F3D900FA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TRAINERSKILLCUSTOMLIGHT_E88AA380F3D900FA_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TRAINERSKILLCUSTOMLIGHT__CTOR_OFFSET))(this);
		}

		::System::Void EEA5D6E8F4B2655A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TRAINERSKILLCUSTOMLIGHT_EEA5D6E8F4B2655A_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TRAINERSKILLCUSTOMLIGHT_BF13C91AD80643D2_OFFSET))(this);
		}
	};
}
