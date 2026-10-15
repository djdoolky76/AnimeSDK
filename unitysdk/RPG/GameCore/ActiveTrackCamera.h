#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActiveTrackCameraMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActiveTrackCamera; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVETRACKCAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D31D840)
#define RPG_GAMECORE_ACTIVETRACKCAMERA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D31D870)
#define RPG_GAMECORE_ACTIVETRACKCAMERA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D31D7E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActiveTrackCamera_TypeDefinitionIndex = 20834;

	class ActiveTrackCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::GameCore::ActiveTrackCameraMode ActiveMode; // 0x1C
		::System::String* AreaName; // 0x20
		::System::String* AnchorName; // 0x28
		::RPG::GameCore::DynamicString* LevelAreaCameraKey; // 0x30
		::System::Boolean UseOwnerGroup; // 0x38
		::System::Byte _padding1[0x7];
		::RPG::GameCore::DynamicFloat* PathGroupID; // 0x40
		::RPG::GameCore::DynamicFloat* PathID; // 0x48
		::RPG::GameCore::DynamicFloat* CurveID; // 0x50
		::RPG::GameCore::DynamicFloat* TrackWidth; // 0x58
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ExitFromStart; // 0x60
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ExitFromEnd; // 0x68
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnOutOfRange; // 0x70
		::System::Boolean OverrideInputByTrack; // 0x78
		::System::Boolean IsAutoMode; // 0x79
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVETRACKCAMERA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActiveTrackCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActiveTrackCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVETRACKCAMERA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActiveTrackCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActiveTrackCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVETRACKCAMERA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
