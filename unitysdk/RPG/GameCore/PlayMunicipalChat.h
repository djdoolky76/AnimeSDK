#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicJsonList; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PlayMunicipalChat; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYMUNICIPALCHAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D92E550)
#define RPG_GAMECORE_PLAYMUNICIPALCHAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D92E560)
#define RPG_GAMECORE_PLAYMUNICIPALCHAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D92E520)

namespace RPG::GameCore
{
	class PlayMunicipalChat : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* NewMunicipalChatConfigPath; // 0x18
		::RPG::GameCore::DynamicString* NewMunicipalChatConfigPathDS; // 0x20
		::RPG::GameCore::DynamicJsonList* NewMunicipalChatEntityInfos; // 0x28
		::System::String* MunicipalChatName; // 0x30
		::RPG::GameCore::DynamicString* MunicipalChatNameDS; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMUNICIPALCHAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayMunicipalChat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayMunicipalChat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMUNICIPALCHAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayMunicipalChat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayMunicipalChat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMUNICIPALCHAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
