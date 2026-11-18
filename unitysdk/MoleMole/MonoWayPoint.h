#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EJLEHDNPNCK.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOWAYPOINT_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1A936D30)
#define MOLEMOLE_MONOWAYPOINT_INIT_OFFSET UNITYSDK_OFFSET(0x1A936C70)
#define MOLEMOLE_MONOWAYPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A936F10)

namespace MoleMole
{
	inline static constexpr unsigned int MonoWayPoint_TypeDefinitionIndex = 55452;

	class MonoWayPoint : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean isTerminalPoint; // 0x18
		::System::Byte _padding0[0x3];
		::EJLEHDNPNCK terminalPointAction; // 0x1C
		::System::Single radius; // 0x20
		::System::Byte _padding1[0x4];
		::System::String* wayPointName; // 0x28
		::System::Int32 index; // 0x30
		::System::Single stayTime; // 0x34
		::UnityEngine::Transform* KBLLFJCIPPO; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWAYPOINT__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWAYPOINT_INIT_OFFSET))(this, ABHBKFJKINO);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWAYPOINT_GET_POSITION_OFFSET))(this);
		}
	};
}
