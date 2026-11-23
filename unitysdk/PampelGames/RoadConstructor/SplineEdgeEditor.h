#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B223EC95048EAAE0/BF6907CCCE77CCAA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Material; }

#define PAMPELGAMES_ROADCONSTRUCTOR_SPLINEEDGEEDITOR_INVERTLANETORIGHT_OFFSET UNITYSDK_OFFSET(0x3DB6520)
#define PAMPELGAMES_ROADCONSTRUCTOR_SPLINEEDGEEDITOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3DB65F0)
#define PAMPELGAMES_ROADCONSTRUCTOR_SPLINEEDGEEDITOR__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3DB6550)
#define PAMPELGAMES_ROADCONSTRUCTOR_SPLINEEDGEEDITOR__CTOR_OFFSET UNITYSDK_OFFSET(0x3DB6610)

namespace PampelGames::RoadConstructor
{
	inline static constexpr unsigned int SplineEdgeEditor_TypeDefinitionIndex = 18917;

	class SplineEdgeEditor : public ::System::Object
	{
	public:
		::B223EC95048EAAE0::BF6907CCCE77CCAA laneType; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::Material* material; // 0x18
		::UnityEngine::Vector2 positionX; // 0x20
		::UnityEngine::Vector2 uvX; // 0x28
		::System::Single height; // 0x30
		::System::Boolean closedEnds; // 0x34
		::System::Boolean invert; // 0x35

		::System::Void _ctor(::UnityEngine::Material* E3AD885F703BB54B, ::UnityEngine::Vector2 ABAD4CDD9E82A248, ::UnityEngine::Vector2 A6F2EFAAC9666709, ::System::Single F0961C93719F7B0D)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_SPLINEEDGEEDITOR__CTOR_OFFSET))(this, E3AD885F703BB54B, ABAD4CDD9E82A248, A6F2EFAAC9666709, F0961C93719F7B0D);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_SPLINEEDGEEDITOR__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::PampelGames::RoadConstructor::SplineEdgeEditor* BAEB39D97BA3B8E2)
		{
			return ((::System::Void(*)(::PVOID, ::PampelGames::RoadConstructor::SplineEdgeEditor*))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_SPLINEEDGEEDITOR__CTOR_2_OFFSET))(this, BAEB39D97BA3B8E2);
		}

		::System::Void InvertLaneToRight(::System::Single F4367424CC8BB3F4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_SPLINEEDGEEDITOR_INVERTLANETORIGHT_OFFSET))(this, F4367424CC8BB3F4);
		}
	};
}
