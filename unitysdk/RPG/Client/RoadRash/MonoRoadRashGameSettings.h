#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::RoadRash { class MonoRoadRashGameRoad; }
namespace RPG::Client::RoadRash { class RoadRashGameSettingsConfigure; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMESETTINGS_COLLECTALLREFASSETPATH_OFFSET UNITYSDK_OFFSET(0xDEE1AA0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMESETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0xDEE2C10)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMESETTINGS_DANOANIAGNA_1_OFFSET UNITYSDK_OFFSET(0xDEE1BC0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMESETTINGS_DANOANIAGNA_OFFSET UNITYSDK_OFFSET(0xDEE1B30)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMESETTINGS_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xDEE2170)

namespace RPG::Client::RoadRash
{
	class MonoRoadRashGameSettings : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::RoadRash::RoadRashGameSettingsConfigure* Configure; // 0x18
		::UnityEngine::Transform* CinematicCameraRoot; // 0x20
		::Il2CppArray<::System::Object*>* Cars; // 0x28
		::System::UInt32 PlayerCarIndex; // 0x30
		::System::Single RoadHalfWidth; // 0x34
		::Il2CppArray<::RPG::Client::RoadRash::MonoRoadRashGameRoad*>* Roads; // 0x38
		::Il2CppArray<::System::Object*>* StartPoints; // 0x40
		::Il2CppArray<::System::Object*>* RoadEvents; // 0x48
		::Il2CppArray<::System::Object*>* AccelerationRings; // 0x50
		::Il2CppArray<::System::Object*>* RoadObstacles; // 0x58
		::UnityEngine::Bounds Boundary; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMESETTINGS_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* CollectAllRefAssetPath()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMESETTINGS_COLLECTALLREFASSETPATH_OFFSET))(this);
		}

		::System::Boolean DANOANIAGNA(::RPG::Client::RoadRash::MonoRoadRashGameRoad* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashGameRoad*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMESETTINGS_DANOANIAGNA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean DANOANIAGNA_1(::RPG::Client::RoadRash::MonoRoadRashGameRoad* a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashGameRoad*, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMESETTINGS_DANOANIAGNA_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMESETTINGS_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

	};
}
