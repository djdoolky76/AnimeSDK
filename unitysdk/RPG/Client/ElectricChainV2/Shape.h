#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ELECTRICCHAINV2_SHAPE_BMOMBCHEEEI_OFFSET UNITYSDK_OFFSET(0xCD83A70)
#define RPG_CLIENT_ELECTRICCHAINV2_SHAPE_CTOR_OFFSET UNITYSDK_OFFSET(0xCD7C8A0)
#define RPG_CLIENT_ELECTRICCHAINV2_SHAPE_PJLHOKMKCCH_OFFSET UNITYSDK_OFFSET(0xCD83B50)

namespace RPG::Client::ElectricChainV2
{
	class Shape : public ::System::Object
	{
	public:
		::UnityEngine::Transform* transform; // 0x10
		::UnityEngine::Vector3 _CachedPoint; // 0x18
		::System::Boolean _Cached; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_SHAPE_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 BMOMBCHEEEI()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_SHAPE_BMOMBCHEEEI_OFFSET))(this);
		}

		::System::Void PJLHOKMKCCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_SHAPE_PJLHOKMKCCH_OFFSET))(this);
		}

	};
}
