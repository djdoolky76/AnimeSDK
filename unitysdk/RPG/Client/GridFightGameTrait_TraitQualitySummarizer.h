#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
#include "unitysdk/RPG/GameCore/GridFightTrailLayerQuality.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_TRAITQUALITYSUMMARIZER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD718D0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_TRAITQUALITYSUMMARIZER_UPDATEDONE_OFFSET UNITYSDK_OFFSET(0x1CD70700)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_TRAITQUALITYSUMMARIZER_UPDATESTART_OFFSET UNITYSDK_OFFSET(0x1CD6F6B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameTrait_TraitQualitySummarizer_TypeDefinitionIndex = 67298;

	class GridFightGameTrait_TraitQualitySummarizer : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _UpgradedTraitIDs; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _AstropolisTierUpgradedIDs; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* _LegacyTraitEffectActive; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _ActivedTraitEffectIDs; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _AstropolisMaxTierUpgradedIDs; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GridFightTrailLayerQuality>* _LegacyTraitQuality; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _LegacyThreeStarCount; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_TRAITQUALITYSUMMARIZER_CTOR_OFFSET))(this);
		}

		::System::Void UpdateStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_TRAITQUALITYSUMMARIZER_UPDATESTART_OFFSET))(this);
		}

		::System::Void UpdateDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_TRAITQUALITYSUMMARIZER_UPDATEDONE_OFFSET))(this);
		}

	};
}
