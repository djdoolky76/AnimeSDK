#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLingFes/ChenLingFesView.h"
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESVISITORVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD418530)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESVISITORVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD418480)

namespace RPG::Client::LittleGame::ChenLingFes
{
	class ChenLingFesVisitorView : public ::RPG::Client::LittleGame::ChenLingFes::ChenLingFesView
	{
	public:
		::UnityEngine::Animator* Animator; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESVISITORVIEW_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESVISITORVIEW_ONENABLE_OFFSET))(this);
		}

	};
}
