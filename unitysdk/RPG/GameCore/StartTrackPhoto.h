#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class StartTrackPhoto; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TrackPhotoEvent; }

#define RPG_GAMECORE_STARTTRACKPHOTO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB1E9C0)
#define RPG_GAMECORE_STARTTRACKPHOTO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB1E9D0)
#define RPG_GAMECORE_STARTTRACKPHOTO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB1E990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartTrackPhoto_TypeDefinitionIndex = 21645;

	class StartTrackPhoto : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* StageID; // 0x18
		::RPG::GameCore::DynamicString* WayPointPath; // 0x20
		::Il2CppArray<::RPG::GameCore::TrackPhotoEvent*>* Events; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnRestart; // 0x30
		::System::Single StandardScreenDis; // 0x38
		::System::Boolean CameraManualRotation; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTTRACKPHOTO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartTrackPhoto* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartTrackPhoto*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTTRACKPHOTO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartTrackPhoto* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartTrackPhoto*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTTRACKPHOTO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
