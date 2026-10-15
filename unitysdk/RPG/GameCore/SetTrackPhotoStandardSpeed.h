#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetTrackPhotoStandardSpeed; }

#define RPG_GAMECORE_SETTRACKPHOTOSTANDARDSPEED_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC86E0)
#define RPG_GAMECORE_SETTRACKPHOTOSTANDARDSPEED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC86F0)
#define RPG_GAMECORE_SETTRACKPHOTOSTANDARDSPEED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC86B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTrackPhotoStandardSpeed_TypeDefinitionIndex = 21647;

	class SetTrackPhotoStandardSpeed : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Speed; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTRACKPHOTOSTANDARDSPEED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTrackPhotoStandardSpeed* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTrackPhotoStandardSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTRACKPHOTOSTANDARDSPEED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTrackPhotoStandardSpeed* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTrackPhotoStandardSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTRACKPHOTOSTANDARDSPEED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
