#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StagePVSOfflineSamplerResult; }
namespace RPG::GameCore { class StagePVSOfflineVolumeResult; }
namespace System { class String; }

#define RPG_GAMECORE_STAGEPVSOFFLINEVOLUMERESULT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB12DA0)
#define RPG_GAMECORE_STAGEPVSOFFLINEVOLUMERESULT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB12BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StagePVSOfflineVolumeResult_TypeDefinitionIndex = 19186;

	class StagePVSOfflineVolumeResult : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* VolumeName; // 0x10
		::Il2CppArray<::RPG::GameCore::StagePVSOfflineSamplerResult*>* AutoGenResults; // 0x18
		::Il2CppArray<::RPG::GameCore::StagePVSOfflineSamplerResult*>* RandomSearchResults; // 0x20
		::Il2CppArray<::RPG::GameCore::StagePVSOfflineSamplerResult*>* CustomResults; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINEVOLUMERESULT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StagePVSOfflineVolumeResult* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StagePVSOfflineVolumeResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINEVOLUMERESULT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
