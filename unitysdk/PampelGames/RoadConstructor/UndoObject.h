#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class B66F534B95FABB6C;
namespace PampelGames::RoadConstructor { class IntersectionObject; }
namespace PampelGames::RoadConstructor { class RoadObject; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PAMPELGAMES_ROADCONSTRUCTOR_UNDOOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace PampelGames::RoadConstructor
{
	inline static constexpr unsigned int UndoObject_TypeDefinitionIndex = 18820;

	class UndoObject : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>* newRoads; // 0x20
		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::IntersectionObject*>* newIntersections; // 0x28
		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>* dirtyRoads; // 0x30
		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::IntersectionObject*>* dirtyIntersections; // 0x38
		::B66F534B95FABB6C* TerrainUpdateUndo; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_UNDOOBJECT__CTOR_OFFSET))(this);
		}
	};
}
