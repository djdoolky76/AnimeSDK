#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OfflineCullingIndex; }
namespace RPG::GameCore { class OfflineCullingLod; }
namespace RPG::GameCore { class StageLightData; }
namespace RPG::GameCore { class StagePVSData; }

#define RPG_GAMECORE_STAGEPVSDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB11950)
#define RPG_GAMECORE_STAGEPVSDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB114E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StagePVSData_TypeDefinitionIndex = 19174;

	class StagePVSData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsUseBinaryData; // 0x10
		::System::Byte _padding0[0x7];
		::System::Int64 CodeVersion; // 0x18
		::System::Boolean IsUseVFS; // 0x20
		::System::Byte _padding1[0x3];
		::System::Int32 VFSClusterSize; // 0x24
		::System::Int64 SceneHashVersion; // 0x28
		::System::Int64 PatchVersion; // 0x30
		::System::Int64 LightDataVersion; // 0x38
		::Il2CppArray<::RPG::GameCore::StageLightData*>* LightDatas; // 0x40
		::Il2CppArray<::RPG::GameCore::OfflineCullingIndex*>* CullingIndexList; // 0x48
		::Il2CppArray<::RPG::GameCore::OfflineCullingLod*>* PreloadLodList; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StagePVSData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StagePVSData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
