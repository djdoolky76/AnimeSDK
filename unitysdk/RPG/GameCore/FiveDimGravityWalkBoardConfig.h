#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GravityWalkBoardType.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/GameCore/Quadrant.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimGravityBoardCameraConfig; }
namespace RPG::GameCore { class FiveDimGravityWalkBoardConfig; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMGRAVITYWALKBOARDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C2740)
#define RPG_GAMECORE_FIVEDIMGRAVITYWALKBOARDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6C2750)
#define RPG_GAMECORE_FIVEDIMGRAVITYWALKBOARDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C2700)

namespace RPG::GameCore
{
	class FiveDimGravityWalkBoardConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsGravityWalkBoard; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::MVector3 Center; // 0x14
		::System::Single Radius; // 0x20
		::RPG::GameCore::GravityWalkBoardType BoardType; // 0x24
		::System::Boolean RightArc; // 0x28
		::System::Byte _padding1[0x3];
		::RPG::GameCore::Quadrant Quadrant; // 0x2C
		::System::Boolean AutoTransition; // 0x30
		::System::Byte _padding2[0x7];
		::System::String* RTPCName; // 0x38
		::System::Single TopRTPCValue; // 0x40
		::System::Single BottomRTPCValue; // 0x44
		::RPG::GameCore::LittleGameEvent* EnterTopEvent; // 0x48
		::RPG::GameCore::LittleGameEvent* ExitTopEvent; // 0x50
		::RPG::GameCore::LittleGameEvent* EnterBottomEvent; // 0x58
		::RPG::GameCore::LittleGameEvent* ExitBottomEvent; // 0x60
		::RPG::GameCore::FiveDimGravityBoardCameraConfig* CameraConfig; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRAVITYWALKBOARDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimGravityWalkBoardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimGravityWalkBoardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRAVITYWALKBOARDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimGravityWalkBoardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimGravityWalkBoardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRAVITYWALKBOARDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
