#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CaptureLocalPlayer; }
namespace System { class String; }

#define RPG_GAMECORE_CAPTURELOCALPLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D557480)
#define RPG_GAMECORE_CAPTURELOCALPLAYER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D557490)
#define RPG_GAMECORE_CAPTURELOCALPLAYER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D557450)

namespace RPG::GameCore
{
	class CaptureLocalPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTURELOCALPLAYER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CaptureLocalPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CaptureLocalPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTURELOCALPLAYER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CaptureLocalPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CaptureLocalPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTURELOCALPLAYER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
