#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CollectHeartDialCameraIndex; }

#define RPG_GAMECORE_COLLECTHEARTDIALCAMERAINDEX_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CA220)
#define RPG_GAMECORE_COLLECTHEARTDIALCAMERAINDEX_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5CA230)
#define RPG_GAMECORE_COLLECTHEARTDIALCAMERAINDEX_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5CA160)

namespace RPG::GameCore
{
	class CollectHeartDialCameraIndex : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLECTHEARTDIALCAMERAINDEX_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CollectHeartDialCameraIndex* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CollectHeartDialCameraIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLECTHEARTDIALCAMERAINDEX_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CollectHeartDialCameraIndex* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CollectHeartDialCameraIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLECTHEARTDIALCAMERAINDEX_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
