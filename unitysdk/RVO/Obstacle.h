#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RVO/Vector2.h"
#include "unitysdk/System/Object.h"
namespace RVO { class Obstacle; }

#define RVO_OBSTACLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF37830)

namespace RVO
{
	inline static constexpr unsigned int Obstacle_TypeDefinitionIndex = 47061;

	class Obstacle : public ::System::Object
	{
	public:
		::RVO::Obstacle* previous_; // 0x10
		::RVO::Obstacle* next_; // 0x18
		::System::Single height_; // 0x20
		::System::Int32 id_; // 0x24
		::System::Boolean convex_; // 0x28
		::System::Byte _padding0[0x3];
		::RVO::Vector2 point_; // 0x2C
		::RVO::Vector2 direction_; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_OBSTACLE_CTOR_OFFSET))(this);
		}

	};
}
