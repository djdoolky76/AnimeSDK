#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"
namespace RPG::Client { class CharacterMonoAvatar; }
namespace RPGTools::Timeline { class CharacterStopLookAtData; }

#define RPGTOOLS_TIMELINE_CHARACTERSTOPLOOKATBEHAVIOUR_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x1E3F0FF0)
#define RPGTOOLS_TIMELINE_CHARACTERSTOPLOOKATBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F1220)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterStopLookAtBehaviour_TypeDefinitionIndex = 49020;

	class CharacterStopLookAtBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::RPGTools::Timeline::CharacterStopLookAtData* Config; // 0x20
		::RPG::Client::CharacterMonoAvatar* _CharacterMonoAvatar; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTOPLOOKATBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTOPLOOKATBEHAVIOUR_CLJEBKODGHK_OFFSET))(this);
		}

	};
}
