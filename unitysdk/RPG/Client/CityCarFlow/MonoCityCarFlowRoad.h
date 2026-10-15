#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace System { class Object; }

#define RPG_CLIENT_CITYCARFLOW_MONOCITYCARFLOWROAD_AWAKE_OFFSET UNITYSDK_OFFSET(0xCB73050)
#define RPG_CLIENT_CITYCARFLOW_MONOCITYCARFLOWROAD_CTOR_OFFSET UNITYSDK_OFFSET(0xCB73100)

namespace RPG::Client::CityCarFlow
{
	class MonoCityCarFlowRoad : public ::UnityEngine::MonoBehaviour
	{
	public:
		::BansheeGz::BGSpline::Curve::BGCurve* Curve; // 0x18
		::BansheeGz::BGSpline::Components::BGCcMath* Math; // 0x20
		::Il2CppArray<::System::Object*>* Lanes; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCARFLOWROAD_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCARFLOWROAD_AWAKE_OFFSET))(this);
		}

	};
}
