#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlayVideoQTEStage.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PLAYVIDEOQTESEQUENCEBRIDGE___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE67C8F0)
#define RPG_CLIENT_PLAYVIDEOQTESEQUENCEBRIDGE___C__DISPLAYCLASS0_0__STARTSEQUENCE_B__0_OFFSET UNITYSDK_OFFSET(0xE67CBB0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayVideoQTESequenceBridge___c__DisplayClass0_0_TypeDefinitionIndex = 74944;

	class PlayVideoQTESequenceBridge___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Int32>* onStageStarted; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTESEQUENCEBRIDGE___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Void _StartSequence_b__0(::RPG::Client::PlayVideoQTEStage a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayVideoQTEStage))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTESEQUENCEBRIDGE___C__DISPLAYCLASS0_0__STARTSEQUENCE_B__0_OFFSET))(this, a1);
		}

	};
}
