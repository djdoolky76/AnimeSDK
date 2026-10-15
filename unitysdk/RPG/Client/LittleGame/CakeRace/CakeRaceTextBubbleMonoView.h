#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceBaseBubbleMonoView.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceGameplayBubbleType.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETEXTBUBBLEMONOVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD405940)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETEXTBUBBLEMONOVIEW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xD406000)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETEXTBUBBLEMONOVIEW_HOKENEHPKKJ_OFFSET UNITYSDK_OFFSET(0xD405FB0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETEXTBUBBLEMONOVIEW_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0xD406010)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETEXTBUBBLEMONOVIEW_NPHAGKOIGKK_OFFSET UNITYSDK_OFFSET(0xD406060)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETEXTBUBBLEMONOVIEW_SETTEXTID_OFFSET UNITYSDK_OFFSET(0xD4041E0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETEXTBUBBLEMONOVIEW_SETTEXT_OFFSET UNITYSDK_OFFSET(0xD404060)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceTextBubbleMonoView_TypeDefinitionIndex = 78144;

	class CakeRaceTextBubbleMonoView : public ::RPG::Client::LittleGame::CakeRace::CakeRaceBaseBubbleMonoView
	{
	public:
		::System::String* IKFLLBLIMDL; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETEXTBUBBLEMONOVIEW_CTOR_OFFSET))(this);
		}

		::System::Single HOKENEHPKKJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETEXTBUBBLEMONOVIEW_HOKENEHPKKJ_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETEXTBUBBLEMONOVIEW_GET_PRIORITY_OFFSET))(this);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceGameplayBubbleType JBIOGKPHKKC()
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceGameplayBubbleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETEXTBUBBLEMONOVIEW_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::String* NPHAGKOIGKK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETEXTBUBBLEMONOVIEW_NPHAGKOIGKK_OFFSET))(this);
		}

		::System::Void SetText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETEXTBUBBLEMONOVIEW_SETTEXT_OFFSET))(this, a1);
		}

		::System::Void SetTextID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETEXTBUBBLEMONOVIEW_SETTEXTID_OFFSET))(this, a1);
		}

	};
}
