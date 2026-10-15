#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimSplineMoveControlMode.h"
#include "unitysdk/RPG/GameCore/FiveDimSplineMoveDirection.h"
#include "unitysdk/RPG/GameCore/FiveDimSplineMoveLoopType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSplineMoveConfig; }
namespace RPG::GameCore { class FiveDimSplineMovePoint; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSPLINEMOVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DDE30)
#define RPG_GAMECORE_FIVEDIMSPLINEMOVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6DD8D0)

namespace RPG::GameCore
{
	class FiveDimSplineMoveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FiveDimSplineMoveControlMode ControlMode; // 0x10
		::System::UInt32 CurveID; // 0x14
		::System::Boolean FollowRotation; // 0x18
		::System::Boolean InitShowLineTrace; // 0x19
		::System::Byte _padding0[0x6];
		::System::String* LineTraceEffectPath; // 0x20
		::RPG::MVector3 LineTraceOffset; // 0x28
		::System::Boolean PauseOnInvisible; // 0x34
		::System::Boolean StartOnInit; // 0x35
		::System::Byte _padding1[0x2];
		::System::String* StartOnPoint; // 0x38
		::RPG::GameCore::FiveDimSplineMoveDirection StartDirection; // 0x40
		::RPG::GameCore::FiveDimSplineMoveLoopType LoopType; // 0x44
		::RPG::GameCore::LittleGameEvent* OnMoveStart; // 0x48
		::RPG::GameCore::LittleGameEvent* OnMoveStop; // 0x50
		::RPG::GameCore::LittleGameEvent* OnMoveReverse; // 0x58
		::Il2CppArray<::RPG::GameCore::FiveDimSplineMovePoint*>* PointConfigs; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPLINEMOVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSplineMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSplineMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPLINEMOVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
