#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StagePVSOfflineBakeResultData; }
namespace RPG::GameCore { class StagePVSOfflineLightInfo; }
namespace RPG::GameCore { class StagePVSOfflineSceneItemInfo; }
namespace RPG::GameCore { class StagePVSOfflineVolumeResult; }
namespace System { class String; }

#define RPG_GAMECORE_STAGEPVSOFFLINEBAKERESULTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB11BD0)
#define RPG_GAMECORE_STAGEPVSOFFLINEBAKERESULTDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB11960)

namespace RPG::GameCore
{
	class StagePVSOfflineBakeResultData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 DataVersion; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::String*>* ObjLod0Paths; // 0x18
		::Il2CppArray<::RPG::GameCore::StagePVSOfflineSceneItemInfo*>* SceneObjInfos; // 0x20
		::Il2CppArray<::RPG::GameCore::StagePVSOfflineLightInfo*>* LightInfos; // 0x28
		::Il2CppArray<::RPG::GameCore::StagePVSOfflineVolumeResult*>* VolumeResult; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINEBAKERESULTDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StagePVSOfflineBakeResultData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StagePVSOfflineBakeResultData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINEBAKERESULTDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
