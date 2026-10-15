#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TRFCameraComponentConfig; }

#define RPG_GAMECORE_TRFCAMERACOMPONENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB53450)
#define RPG_GAMECORE_TRFCAMERACOMPONENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB53460)
#define RPG_GAMECORE_TRFCAMERACOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB53400)

namespace RPG::GameCore
{
	class TRFCameraComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::RPG::MVector3 Position; // 0x10
		::RPG::MVector3 Rotation; // 0x1C
		::RPG::MVector3 MoveRange; // 0x28
		::System::Single OrthographicSize; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFCAMERACOMPONENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TRFCameraComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TRFCameraComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFCAMERACOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TRFCameraComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TRFCameraComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFCAMERACOMPONENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
