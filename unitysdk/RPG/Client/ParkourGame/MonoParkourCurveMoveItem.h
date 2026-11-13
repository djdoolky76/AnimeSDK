#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURCURVEMOVEITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF27890)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURCURVEMOVEITEM_SETPOSANDROT_OFFSET UNITYSDK_OFFSET(0x1BF277D0)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourCurveMoveItem_TypeDefinitionIndex = 76283;

	class MonoParkourCurveMoveItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single Offset; // 0x18
		::System::Single Distance; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURCURVEMOVEITEM_CTOR_OFFSET))(this);
		}

		::System::Void SetPosAndRot(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURCURVEMOVEITEM_SETPOSANDROT_OFFSET))(this, a1, a2);
		}

	};
}
