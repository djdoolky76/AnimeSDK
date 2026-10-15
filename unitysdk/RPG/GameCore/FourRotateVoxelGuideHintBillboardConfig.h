#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelGuideHintBillboardConfig; }
namespace RPG::GameCore { class FourRotateVoxelLevelVarConditionSet; }
namespace System { class String; }

#define RPG_GAMECORE_FOURROTATEVOXELGUIDEHINTBILLBOARDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6EF6F0)
#define RPG_GAMECORE_FOURROTATEVOXELGUIDEHINTBILLBOARDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6EF700)
#define RPG_GAMECORE_FOURROTATEVOXELGUIDEHINTBILLBOARDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6EF6A0)

namespace RPG::GameCore
{
	class FourRotateVoxelGuideHintBillboardConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsGuideHintBillboard; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* AttachPointName; // 0x18
		::RPG::GameCore::FourRotateVoxelLevelVarConditionSet* ActiveCondition; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELGUIDEHINTBILLBOARDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelGuideHintBillboardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelGuideHintBillboardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELGUIDEHINTBILLBOARDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelGuideHintBillboardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelGuideHintBillboardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELGUIDEHINTBILLBOARDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
