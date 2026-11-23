#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PampelGames/RoadConstructor/IntersectionObject.h"

#define PAMPELGAMES_ROADCONSTRUCTOR_ROUNDABOUTOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x3DA5E90)

namespace PampelGames::RoadConstructor
{
	inline static constexpr unsigned int RoundaboutObject_TypeDefinitionIndex = 18887;

	class RoundaboutObject : public ::PampelGames::RoadConstructor::IntersectionObject
	{
	public:
		::System::Single radius; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_ROUNDABOUTOBJECT__CTOR_OFFSET))(this);
		}
	};
}
