#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class BehaviorBase; }
namespace RPG::Client { class CRPVCBackground; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define RPG_CLIENT_SPLITSCREENVCCONTROL_AWAKE_OFFSET UNITYSDK_OFFSET(0xEBAE5F0)
#define RPG_CLIENT_SPLITSCREENVCCONTROL_CREATEBEHAVIOR_OFFSET UNITYSDK_OFFSET(0xEBAE8E0)
#define RPG_CLIENT_SPLITSCREENVCCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xEBAEAB0)
#define RPG_CLIENT_SPLITSCREENVCCONTROL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEBAE9E0)
#define RPG_CLIENT_SPLITSCREENVCCONTROL_HJAMFKEJMLJ_OFFSET UNITYSDK_OFFSET(0xEBAE640)
#define RPG_CLIENT_SPLITSCREENVCCONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xEBAE820)
#define RPG_CLIENT_SPLITSCREENVCCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0xEBAE720)
#define RPG_CLIENT_SPLITSCREENVCCONTROL_REFRESH_OFFSET UNITYSDK_OFFSET(0xEBAE930)
#define RPG_CLIENT_SPLITSCREENVCCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0xEBAE770)

namespace RPG::Client
{
	inline static constexpr unsigned int SplitScreenVCControl_TypeDefinitionIndex = 71671;

	class SplitScreenVCControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Rendering::CRPVirtualCamera* VCLeft; // 0x18
		::UnityEngine::Rendering::CRPVirtualCamera* VCRight; // 0x20
		::System::Single SplitRange; // 0x28
		::System::Single SplitSlope; // 0x2C
		::RPG::Client::CRPVCBackground* LeftBackground; // 0x30
		::RPG::Client::CRPVCBackground* RightBackground; // 0x38
		::UnityEngine::RectTransform* UILine; // 0x40
		::System::Single UILineWidth; // 0x48
		::System::Boolean DebugSlope; // 0x4C
		::System::Byte _padding0[0x3];
		::RPG::Client::BehaviorBase* KADDKEGNCHE; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPLITSCREENVCCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPLITSCREENVCCONTROL_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPLITSCREENVCCONTROL_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPLITSCREENVCCONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPLITSCREENVCCONTROL_ONDESTROY_OFFSET))(this);
		}

		::System::Void HJAMFKEJMLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPLITSCREENVCCONTROL_HJAMFKEJMLJ_OFFSET))(this);
		}

		::System::Void CreateBehavior()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPLITSCREENVCCONTROL_CREATEBEHAVIOR_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPLITSCREENVCCONTROL_REFRESH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPLITSCREENVCCONTROL_DISPOSE_OFFSET))(this);
		}

	};
}
