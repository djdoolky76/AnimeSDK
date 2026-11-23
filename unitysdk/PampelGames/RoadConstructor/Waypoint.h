#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B223EC95048EAAE0/A92CA8C5CE7ED303.h"
#include "unitysdk/B223EC95048EAAE0/B3CC6E5519497EE3.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PAMPELGAMES_ROADCONSTRUCTOR_WAYPOINT_A5137C776547DF63_OFFSET UNITYSDK_OFFSET(0x3DA2370)
#define PAMPELGAMES_ROADCONSTRUCTOR_WAYPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x3DA24A0)

namespace PampelGames::RoadConstructor
{
	inline static constexpr unsigned int Waypoint_TypeDefinitionIndex = 18850;

	class Waypoint : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* roadID; // 0x20
		::B223EC95048EAAE0::B3CC6E5519497EE3 laneType; // 0x28
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::Waypoint*>* next; // 0x30
		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::Waypoint*>* prev; // 0x38
		::System::Single laneWidth; // 0x40
		::System::Boolean startPoint; // 0x44
		::System::Boolean endPoint; // 0x45
		::System::Byte _padding1[0x2];
		::B223EC95048EAAE0::A92CA8C5CE7ED303 direction; // 0x48

		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::Waypoint*>* A5137C776547DF63()
		{
			return ((::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::Waypoint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_WAYPOINT_A5137C776547DF63_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_WAYPOINT__CTOR_OFFSET))(this);
		}
	};
}
