#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VideoCaption; }
namespace RPG::GameCore { class VideoCaptionConfig; }

#define RPG_GAMECORE_VIDEOCAPTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC8F080)
#define RPG_GAMECORE_VIDEOCAPTIONCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC8EFC0)

namespace RPG::GameCore
{
	class VideoCaptionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::VideoCaption*>* CaptionList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIDEOCAPTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::VideoCaptionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VideoCaptionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIDEOCAPTIONCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
