#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/RPGDepthOfField_CoCMethod.h"
#include "unitysdk/RPG/CustomRP/RPGDepthOfField_DOFMethod.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::CustomRP { class RPGDepthOfField; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC628E0)
#define RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_KCMOIBLMDAI_OFFSET UNITYSDK_OFFSET(0x1BC62160)
#define RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_LLFFBHAPILP_OFFSET UNITYSDK_OFFSET(0x1BC62010)
#define RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_ONACTIVEVCAMERA_OFFSET UNITYSDK_OFFSET(0x1BC62840)
#define RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1BC61F40)
#define RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_ONDISACTIVEVCAMERA_OFFSET UNITYSDK_OFFSET(0x1BC62890)
#define RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BC61E40)
#define RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BC61F90)

namespace RPG::Client
{
	inline static constexpr unsigned int VCameraDOFEffectOverride_TypeDefinitionIndex = 70266;

	class VCameraDOFEffectOverride : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean EnableDOF; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::CustomRP::RPGDepthOfField_CoCMethod CoCMethod; // 0x1C
		::RPG::CustomRP::RPGDepthOfField_DOFMethod DOFMethod; // 0x20
		::System::Single FocusDistance; // 0x24
		::System::Single fStop; // 0x28
		::System::Single SensorWidth; // 0x2C
		::System::Single NearFocalRegion; // 0x30
		::System::Single FarFocalRegion; // 0x34
		::System::Single NearTransitionRegion; // 0x38
		::System::Single FarTransitionRegion; // 0x3C
		::RPG::CustomRP::RPGDepthOfField* LIJIAFPPIDJ; // 0x40
		::UnityEngine::GameObject* CPBAACCBCMI; // 0x48
		::Cinemachine::CinemachineVirtualCamera* OAFAPMNFOLF; // 0x50
		::System::Boolean HAFOABEMBBG; // 0x58
		::System::Boolean DGDJEKKJGLG; // 0x59
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_UPDATE_OFFSET))(this);
		}

		::System::Void OnActiveVCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_ONACTIVEVCAMERA_OFFSET))(this);
		}

		::System::Void OnDisactiveVCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_ONDISACTIVEVCAMERA_OFFSET))(this);
		}

		::System::Void KCMOIBLMDAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_KCMOIBLMDAI_OFFSET))(this);
		}

		::System::Void LLFFBHAPILP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_LLFFBHAPILP_OFFSET))(this);
		}

	};
}
