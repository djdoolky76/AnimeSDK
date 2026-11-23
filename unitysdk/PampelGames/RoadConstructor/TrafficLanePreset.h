#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PampelGames::RoadConstructor { class TrafficLaneEditor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PAMPELGAMES_ROADCONSTRUCTOR_TRAFFICLANEPRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x3DB83C0)

namespace PampelGames::RoadConstructor
{
	inline static constexpr unsigned int TrafficLanePreset_TypeDefinitionIndex = 18899;

	class TrafficLanePreset : public ::System::Object
	{
	public:
		::System::Boolean _editorVisible; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* category; // 0x18
		::System::String* trafficLanePresetName; // 0x20
		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::TrafficLaneEditor*>* trafficLanes; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_TRAFFICLANEPRESET__CTOR_OFFSET))(this);
		}
	};
}
