#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PampelGames::RoadConstructor { class SplineEdgeEditor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PAMPELGAMES_ROADCONSTRUCTOR_LANEPRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x3D6E6A0)

namespace PampelGames::RoadConstructor
{
	inline static constexpr unsigned int LanePreset_TypeDefinitionIndex = 18781;

	class LanePreset : public ::System::Object
	{
	public:
		::System::Boolean _editorVisible; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* category; // 0x18
		::System::String* templateName; // 0x20
		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::SplineEdgeEditor*>* lanes; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_LANEPRESET__CTOR_OFFSET))(this);
		}
	};
}
