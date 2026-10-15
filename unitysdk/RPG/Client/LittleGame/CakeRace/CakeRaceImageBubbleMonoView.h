#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceBaseBubbleMonoView.h"
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEIMAGEBUBBLEMONOVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD402A60)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEIMAGEBUBBLEMONOVIEW_IDBHAGEDEIP_OFFSET UNITYSDK_OFFSET(0xD404DF0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEIMAGEBUBBLEMONOVIEW_SETICON_OFFSET UNITYSDK_OFFSET(0xD4044B0)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceImageBubbleMonoView_TypeDefinitionIndex = 78141;

	class CakeRaceImageBubbleMonoView : public ::RPG::Client::LittleGame::CakeRace::CakeRaceBaseBubbleMonoView
	{
	public:
		::System::String* FADILKPGCEM; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEIMAGEBUBBLEMONOVIEW_CTOR_OFFSET))(this);
		}

		::System::String* IDBHAGEDEIP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEIMAGEBUBBLEMONOVIEW_IDBHAGEDEIP_OFFSET))(this);
		}

		::System::Void SetIcon(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEIMAGEBUBBLEMONOVIEW_SETICON_OFFSET))(this, a1);
		}

	};
}
