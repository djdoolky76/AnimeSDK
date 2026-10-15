#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/RPG/Client/Subway/AirshipSubwayEmitter_SubPrefab.h"
class CBABAAOHGHH;
class IBMCNLIKBKL;
namespace RPG::Client::Subway { class AirshipSubway; }
namespace RPG::Client::Subway { class AirshipSubwayTimetable; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYEMITTER_ALLOC_OFFSET UNITYSDK_OFFSET(0xE14FB30)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYEMITTER_CREATEMANAGER_OFFSET UNITYSDK_OFFSET(0xE14FAA0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYEMITTER_CTOR_OFFSET UNITYSDK_OFFSET(0xE14FF60)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYEMITTER_RANDOMSUBPREFAB_OFFSET UNITYSDK_OFFSET(0xE14FCE0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYEMITTER_RELEASE_OFFSET UNITYSDK_OFFSET(0xE14FF00)

namespace RPG::Client::Subway
{
	class AirshipSubwayEmitter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Subway::AirshipSubwayTimetable* Timetable; // 0x18
		::RPG::Client::Subway::AirshipSubway* Prefab; // 0x20
		::Il2CppArray<::System::Object*>* SubPrefabs; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYEMITTER_CTOR_OFFSET))(this);
		}

		::CBABAAOHGHH* CreateManager(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::CBABAAOHGHH*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYEMITTER_CREATEMANAGER_OFFSET))(this, a1, a2);
		}

		::IBMCNLIKBKL* Alloc(::UnityEngine::Transform* a1)
		{
			return ((::IBMCNLIKBKL*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYEMITTER_ALLOC_OFFSET))(this, a1);
		}

		::RPG::Client::Subway::AirshipSubwayEmitter_SubPrefab RandomSubPrefab()
		{
			return ((::RPG::Client::Subway::AirshipSubwayEmitter_SubPrefab(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYEMITTER_RANDOMSUBPREFAB_OFFSET))(this);
		}

		::System::Void Release(::IBMCNLIKBKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBMCNLIKBKL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYEMITTER_RELEASE_OFFSET))(this, a1);
		}

	};
}
