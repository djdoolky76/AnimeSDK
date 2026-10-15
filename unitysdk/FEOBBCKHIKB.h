#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GeneralAudioItem; }
namespace UnityEngine { class GameObject; }

#define FEOBBCKHIKB_BEJDIFDOLBG_OFFSET UNITYSDK_OFFSET(0x1572C8A0)

	class FEOBBCKHIKB : public ::System::Object
	{
	public:
		static ::System::Void BEJDIFDOLBG(::RPG::Client::GeneralAudioItem* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::RPG::Client::GeneralAudioItem*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FEOBBCKHIKB_BEJDIFDOLBG_OFFSET))(a1, a2);
		}

	};
