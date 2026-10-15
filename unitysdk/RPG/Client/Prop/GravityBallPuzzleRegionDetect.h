#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Action; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_PROP_GRAVITYBALLPUZZLEREGIONDETECT_CTOR_OFFSET UNITYSDK_OFFSET(0xDCF4130)
#define RPG_CLIENT_PROP_GRAVITYBALLPUZZLEREGIONDETECT_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0xDCF40C0)

namespace RPG::Client::Prop
{
	class GravityBallPuzzleRegionDetect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action* OnBallOutCallback; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLPUZZLEREGIONDETECT_CTOR_OFFSET))(this);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLPUZZLEREGIONDETECT_ONTRIGGEREXIT_OFFSET))(this, a1);
		}

	};
}
