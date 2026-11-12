#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOPOLYBALLCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0xE2D5EB0)
#define RPG_CLIENT_MONOPOLYBALLCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE2D59A0)
#define RPG_CLIENT_MONOPOLYBALLCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE2D5960)
#define RPG_CLIENT_MONOPOLYBALLCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xE2D58E0)
#define RPG_CLIENT_MONOPOLYBALLCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xE2D59E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyBallController_TypeDefinitionIndex = 74918;

	class MonopolyBallController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean MCAALJNDJHO; // 0x18
		::System::Byte _padding0[0x7];
		::UnityEngine::Transform* AKDNEGFAKLM; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBALLCONTROLLER_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBALLCONTROLLER_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBALLCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBALLCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBALLCONTROLLER_UPDATE_OFFSET))(this);
		}

	};
}
