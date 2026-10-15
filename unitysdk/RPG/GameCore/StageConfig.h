#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StageBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageConfig; }
namespace RPG::GameCore { class StageVolumeConfig; }
namespace RPG::GameCore { class SubStageMetaData; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_STAGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD8220)
#define RPG_GAMECORE_STAGECONFIG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DADB760)
#define RPG_GAMECORE_STAGECONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DADA770)
#define RPG_GAMECORE_STAGECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD8230)
#define RPG_GAMECORE_STAGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DADB720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageConfig_TypeDefinitionIndex = 19140;

	class StageConfig : public ::RPG::GameCore::StageBaseConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SubStageMetaData*>* SubStages; // 0xC0
		::Il2CppArray<::RPG::GameCore::StageVolumeConfig*>* StageVolumeConfigList; // 0xC8
		::System::Boolean PVSEnableRegionFilter; // 0xD0
		::System::Boolean EnableNormDistanceLodTemplate; // 0xD1
		::System::Boolean EnableAudioGroundVoxel; // 0xD2
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGECONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGECONFIG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
