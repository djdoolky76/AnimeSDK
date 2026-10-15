#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TrainPartyEventFadeInType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyShowEventFadeIn; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYSHOWEVENTFADEIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC07410)
#define RPG_GAMECORE_TRAINPARTYSHOWEVENTFADEIN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC07420)
#define RPG_GAMECORE_TRAINPARTYSHOWEVENTFADEIN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC073E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyShowEventFadeIn_TypeDefinitionIndex = 22370;

	class TrainPartyShowEventFadeIn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TrainPartyEventFadeInType FadeInType; // 0x18
		::System::Boolean IsReplaceImage; // 0x1C
		::System::Byte _padding0[0x3];
		::System::String* ImagePath; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSHOWEVENTFADEIN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyShowEventFadeIn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyShowEventFadeIn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSHOWEVENTFADEIN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyShowEventFadeIn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyShowEventFadeIn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSHOWEVENTFADEIN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
