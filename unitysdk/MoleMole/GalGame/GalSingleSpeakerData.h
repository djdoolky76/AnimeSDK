#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::GalGame { class GalSwitchPoseData; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_GALSINGLESPEAKERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x12462FE0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalSingleSpeakerData_TypeDefinitionIndex = 81762;

	class GalSingleSpeakerData : public ::System::Object
	{
	public:
		::MoleMole::GalGame::GalSwitchPoseData* SwitchPoseData; // 0x10
		::System::String* externalVoiceKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSINGLESPEAKERDATA__CTOR_OFFSET))(this);
		}
	};
}
