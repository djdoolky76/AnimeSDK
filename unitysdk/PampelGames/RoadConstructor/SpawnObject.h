#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B223EC95048EAAE0/A4009A1AD7BEA6FD.h"
#include "unitysdk/B223EC95048EAAE0/A852A574B847A96C.h"
#include "unitysdk/B223EC95048EAAE0/A9FAEBB09064F6A7.h"
#include "unitysdk/B223EC95048EAAE0/BCEED95A3AF93D69.h"
#include "unitysdk/B223EC95048EAAE0/E40A1BCCA04386EC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class GameObject; }

#define PAMPELGAMES_ROADCONSTRUCTOR_SPAWNOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x3D777E0)

namespace PampelGames::RoadConstructor
{
	inline static constexpr unsigned int SpawnObject_TypeDefinitionIndex = 18822;

	class SpawnObject : public ::System::Object
	{
	public:
		::B223EC95048EAAE0::BCEED95A3AF93D69 objectType; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::GameObject* obj; // 0x18
		::B223EC95048EAAE0::A4009A1AD7BEA6FD spacingType; // 0x20
		::System::Single spacing; // 0x24
		::B223EC95048EAAE0::A9FAEBB09064F6A7 position; // 0x28
		::System::Single positionOffsetForward; // 0x2C
		::System::Single positionOffsetRight; // 0x30
		::System::Single heightOffset; // 0x34
		::B223EC95048EAAE0::A852A574B847A96C rotation; // 0x38
		::System::Boolean alignToNormal; // 0x3C
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector2 scale; // 0x40
		::System::Boolean requiresDirection; // 0x48
		::System::Boolean requiresDirectionForward; // 0x49
		::System::Boolean requiresDirectionLeft; // 0x4A
		::System::Boolean requiresDirectionRight; // 0x4B
		::B223EC95048EAAE0::E40A1BCCA04386EC elevation; // 0x4C
		::UnityEngine::Vector2 heightRange; // 0x50
		::System::Boolean removeOverlap; // 0x58
		::System::Byte _padding2[0x3];
		::System::Single chance; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_SPAWNOBJECT__CTOR_OFFSET))(this);
		}
	};
}
