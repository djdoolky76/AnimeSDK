#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StageVolumeComponentData.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class StreamingBlockVolumeComponentData; }
namespace RPG::GameCore { class StreamingForceHLODVolumeData; }
namespace RPG::GameCore { class StreamingLightVolumeData; }
namespace RPG::GameCore { class StreamingRatioVolumeData; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_STREAMINGBLOCKVOLUMECOMPONENTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAFBA80)
#define RPG_GAMECORE_STREAMINGBLOCKVOLUMECOMPONENTDATA_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DAFBD50)
#define RPG_GAMECORE_STREAMINGBLOCKVOLUMECOMPONENTDATA_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DAFBD20)
#define RPG_GAMECORE_STREAMINGBLOCKVOLUMECOMPONENTDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAFBA90)
#define RPG_GAMECORE_STREAMINGBLOCKVOLUMECOMPONENTDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAFBA50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StreamingBlockVolumeComponentData_TypeDefinitionIndex = 19122;

	class StreamingBlockVolumeComponentData : public ::RPG::GameCore::StageVolumeComponentData
	{
	public:
		::RPG::GameCore::HoyoTagContainer* EffectBlocks; // 0x10
		::System::String* BlockAlias; // 0x18
		::System::Boolean HLOD; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::StreamingRatioVolumeData* StreamingRatioComponent; // 0x28
		::RPG::GameCore::StreamingForceHLODVolumeData* StreamingHLODComponent; // 0x30
		::RPG::GameCore::StreamingLightVolumeData* StreamingLightComponent; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGBLOCKVOLUMECOMPONENTDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StreamingBlockVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StreamingBlockVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGBLOCKVOLUMECOMPONENTDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StreamingBlockVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StreamingBlockVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGBLOCKVOLUMECOMPONENTDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingBlockVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingBlockVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGBLOCKVOLUMECOMPONENTDATA_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingBlockVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingBlockVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGBLOCKVOLUMECOMPONENTDATA_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
