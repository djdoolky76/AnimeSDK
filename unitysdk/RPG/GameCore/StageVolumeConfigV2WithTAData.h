#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StageVolumeConfigV2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FilterVolumeData; }
namespace RPG::GameCore { class StageVolumeComponentData; }
namespace RPG::GameCore { class StageVolumeConfigV2WithTAData; }
namespace RPG::GameCore { class StreamingSceneObjLodScaleVolumeComponentData; }

#define RPG_GAMECORE_STAGEVOLUMECONFIGV2WITHTADATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE93A0)
#define RPG_GAMECORE_STAGEVOLUMECONFIGV2WITHTADATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE93B0)
#define RPG_GAMECORE_STAGEVOLUMECONFIGV2WITHTADATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE9870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageVolumeConfigV2WithTAData_TypeDefinitionIndex = 19152;

	class StageVolumeConfigV2WithTAData : public ::RPG::GameCore::StageVolumeConfigV2
	{
	public:
		::Il2CppArray<::RPG::GameCore::StageVolumeComponentData*>* BlockVolumeList; // 0x50
		::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData* SceneObjLodScaleData; // 0x58
		::RPG::GameCore::FilterVolumeData* FilterVolumeData; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOLUMECONFIGV2WITHTADATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageVolumeConfigV2WithTAData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageVolumeConfigV2WithTAData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOLUMECONFIGV2WITHTADATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageVolumeConfigV2WithTAData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageVolumeConfigV2WithTAData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOLUMECONFIGV2WITHTADATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
