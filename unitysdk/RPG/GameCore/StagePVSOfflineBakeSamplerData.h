#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StagePVSOfflineBakeSamplerData; }
namespace RPG::GameCore { class StagePVSOfflineVolumeInfo; }

#define RPG_GAMECORE_STAGEPVSOFFLINEBAKESAMPLERDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB11D50)
#define RPG_GAMECORE_STAGEPVSOFFLINEBAKESAMPLERDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB11BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StagePVSOfflineBakeSamplerData_TypeDefinitionIndex = 19181;

	class StagePVSOfflineBakeSamplerData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 DataVersion; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::StagePVSOfflineVolumeInfo*>* VolumeInfos; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINEBAKESAMPLERDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StagePVSOfflineBakeSamplerData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StagePVSOfflineBakeSamplerData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINEBAKESAMPLERDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
