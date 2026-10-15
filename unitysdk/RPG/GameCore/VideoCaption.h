#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/VideoCaptionPosition.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VideoCaption; }

#define RPG_GAMECORE_VIDEOCAPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC61700)
#define RPG_GAMECORE_VIDEOCAPTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC61480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VideoCaption_TypeDefinitionIndex = 17015;

	class VideoCaption : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::Client::TextID CaptionTextID; // 0x10
		::RPG::GameCore::VideoCaptionPosition Position; // 0x20
		::System::Single StartTime; // 0x24
		::System::Single EndTime; // 0x28
		::System::Single EaseIn; // 0x2C
		::System::Single EaseOut; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIDEOCAPTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VideoCaption* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VideoCaption*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIDEOCAPTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
