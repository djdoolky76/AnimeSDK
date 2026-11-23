#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PampelGames/RoadConstructor/RoadBuilderBase.h"

#define PAMPELGAMES_ROADCONSTRUCTOR_ROADBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x3DA7950)

namespace PampelGames::RoadConstructor
{
	inline static constexpr unsigned int RoadBuilder_TypeDefinitionIndex = 18903;

	class RoadBuilder : public ::PampelGames::RoadConstructor::RoadBuilderBase
	{
	public:
		::System::Boolean _editorSettingsVisible; // 0xD8
		::System::Boolean checkExistingMeshes; // 0xD9

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_ROADBUILDER__CTOR_OFFSET))(this);
		}
	};
}
