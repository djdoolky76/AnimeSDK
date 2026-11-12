#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace Cinemachine { class CinemachineComposer; }
namespace Cinemachine { class CinemachineVirtualCamera; }

#define RPG_CLIENT_VCAMERALOOKATCENTERFITUI_AWAKE_OFFSET UNITYSDK_OFFSET(0xEEFB9C0)
#define RPG_CLIENT_VCAMERALOOKATCENTERFITUI_CTOR_OFFSET UNITYSDK_OFFSET(0xEEFBBA0)

namespace RPG::Client
{
	inline static constexpr unsigned int VCameraLookAtCenterFitUI_TypeDefinitionIndex = 70267;

	class VCameraLookAtCenterFitUI : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Cinemachine::CinemachineVirtualCamera* EDHDOCKJIDG; // 0x18
		::Cinemachine::CinemachineComposer* NOJIKPIMAHH; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VCAMERALOOKATCENTERFITUI_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VCAMERALOOKATCENTERFITUI_AWAKE_OFFSET))(this);
		}

	};
}
