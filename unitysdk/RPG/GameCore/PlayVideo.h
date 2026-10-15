#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayVideo; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYVIDEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D905080)
#define RPG_GAMECORE_PLAYVIDEO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D905090)
#define RPG_GAMECORE_PLAYVIDEO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D905040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayVideo_TypeDefinitionIndex = 20878;

	class PlayVideo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 VideoID; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* OverrideCaptionPath; // 0x20
		::System::Boolean IsMuteBGM; // 0x28
		::System::Boolean MuteBGMWithFadeOut; // 0x29
		::System::Boolean IsLoop; // 0x2A
		::System::Boolean WithoutChangeAudio; // 0x2B
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYVIDEO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayVideo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayVideo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYVIDEO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayVideo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayVideo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYVIDEO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
