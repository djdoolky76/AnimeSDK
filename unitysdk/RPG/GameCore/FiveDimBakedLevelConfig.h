#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimBakedLevelConfig; }
namespace RPG::GameCore { class FiveDimRenderingItemStateMappingConfig; }
namespace RPG::GameCore { class FiveDimSurfaceBakedInfo; }
namespace RPG::GameCore { class FiveDimViewBakedInfo; }
namespace RPG::GameCore { class MeshBound; }
namespace RPG::GameCore { class StatisticsBakedInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_FIVEDIMBAKEDLEVELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B0690)
#define RPG_GAMECORE_FIVEDIMBAKEDLEVELCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B02F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimBakedLevelConfig_TypeDefinitionIndex = 16725;

	class FiveDimBakedLevelConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FiveDimViewBakedInfo*>* ViewBakedInfos; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FiveDimSurfaceBakedInfo*>* SurfaceBakedInfos; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FiveDimViewBakedInfo*>* ViewBakedInfosByInstance; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FiveDimSurfaceBakedInfo*>* SurfaceBakedInfosByInstance; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FiveDimRenderingItemStateMappingConfig*>* RenderingItemStateMappingBakedInfos; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* GravityFieldRingBakedRadiusByInstance; // 0x38
		::RPG::GameCore::StatisticsBakedInfo* StatisticsBakedInfo; // 0x40
		::RPG::GameCore::MeshBound* LevelBound; // 0x48
		::System::Boolean DelayLoad; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBAKEDLEVELCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimBakedLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimBakedLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBAKEDLEVELCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
