#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GraphicQuality.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BlockNodeConfig; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class StageBaseConfig; }
namespace RPG::GameCore { class StageGrassOverrideConfig; }
namespace RPG::GameCore { class StageIslandConfig; }
namespace RPG::GameCore { class StageVersionData; }
namespace RPG::GameCore { class SubStageData; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_STAGEBASECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB053D0)
#define RPG_GAMECORE_STAGEBASECONFIG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB06770)
#define RPG_GAMECORE_STAGEBASECONFIG_GET_ACTIVEBLOCKNODECONFIGLIST_OFFSET UNITYSDK_OFFSET(0x1DB08390)
#define RPG_GAMECORE_STAGEBASECONFIG_GET_ENABLENORMDISTANCELODTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1DB083D0)
#define RPG_GAMECORE_STAGEBASECONFIG_GET_PVSENABLEREGIONFILTER_OFFSET UNITYSDK_OFFSET(0x1DB08410)
#define RPG_GAMECORE_STAGEBASECONFIG_JCPAIPCJMLE_OFFSET UNITYSDK_OFFSET(0x1DB083C0)
#define RPG_GAMECORE_STAGEBASECONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB06490)
#define RPG_GAMECORE_STAGEBASECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB053E0)
#define RPG_GAMECORE_STAGEBASECONFIG_NLCCMIIAJNJ_OFFSET UNITYSDK_OFFSET(0x1DB08220)
#define RPG_GAMECORE_STAGEBASECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB052A0)
#define RPG_GAMECORE_STAGEBASECONFIG_OMCEFHPDIEC_OFFSET UNITYSDK_OFFSET(0x1DB08360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageBaseConfig_TypeDefinitionIndex = 19137;

	class StageBaseConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::UInt32 Index; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* ParentStageName; // 0x20
		::System::String* RegionPath; // 0x28
		::System::String* IRILodConfigPath; // 0x30
		::Il2CppArray<::RPG::GameCore::BlockNodeConfig*>* BlockNodeConfigList; // 0x38
		::Il2CppArray<::RPG::GameCore::StageIslandConfig*>* IslandConfigList; // 0x40
		::Il2CppArray<::System::String*>* AliasConfigList; // 0x48
		::Il2CppArray<::System::String*>* SharedAliasConfigList; // 0x50
		::Il2CppArray<::System::String*>* BlockOverlayConfigList; // 0x58
		::System::String* VolumeConfigPath; // 0x60
		::System::Single OfflineCullingCellSize; // 0x68
		::System::Byte _padding1[0x4];
		::System::String* PVSMetaDataPath; // 0x70
		::System::Int32 UsePVS; // 0x78
		::System::Boolean UseSplittingItem; // 0x7C
		::System::Byte _padding2[0x3];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* ExternalConfigPaths; // 0x80
		::RPG::GameCore::HoyoTagContainer* StageFeatureTags; // 0x88
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GraphicQuality, ::RPG::GameCore::StageGrassOverrideConfig*>* GrassOverrideConfigs; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* OverrideStageLodConfig; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* OverrideStageNormDistanceLodConfig; // 0xA0
		::RPG::GameCore::StageVersionData* StageVersionData; // 0xA8
		::RPG::GameCore::SubStageData* SubStageData; // 0xB0
		::System::Collections::Generic::List_1<::RPG::GameCore::BlockNodeConfig*>* _ActiveBlockNodeConfig; // 0xB8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEBASECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageBaseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEBASECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageBaseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEBASECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageBaseConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEBASECONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageBaseConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEBASECONFIG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::BlockNodeConfig*>* NLCCMIIAJNJ()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::BlockNodeConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEBASECONFIG_NLCCMIIAJNJ_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::BlockNodeConfig*>* OMCEFHPDIEC()
		{
			return ((::Il2CppArray<::RPG::GameCore::BlockNodeConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEBASECONFIG_OMCEFHPDIEC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::BlockNodeConfig*>* get_ActiveBlockNodeConfigList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::BlockNodeConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEBASECONFIG_GET_ACTIVEBLOCKNODECONFIGLIST_OFFSET))(this);
		}

		::System::Void JCPAIPCJMLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEBASECONFIG_JCPAIPCJMLE_OFFSET))(this);
		}

		::System::Boolean get_EnableNormDistanceLodTemplate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEBASECONFIG_GET_ENABLENORMDISTANCELODTEMPLATE_OFFSET))(this);
		}

		::System::Boolean get_PVSEnableRegionFilter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEBASECONFIG_GET_PVSENABLEREGIONFILTER_OFFSET))(this);
		}

	};
}
