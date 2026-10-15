#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimBaseEventAction; }
namespace RPG::GameCore { class FourRotateVoxelEntranceConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FOURROTATEVOXELENTRANCECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C0210)
#define RPG_GAMECORE_FOURROTATEVOXELENTRANCECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6C0220)
#define RPG_GAMECORE_FOURROTATEVOXELENTRANCECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C01D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelEntranceConfig_TypeDefinitionIndex = 16754;

	class FourRotateVoxelEntranceConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsEntrance; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* LockTextInfo; // 0x18
		::System::String* UnlockTextInfo; // 0x20
		::System::UInt32 TargetQuestID; // 0x28
		::System::Byte _padding1[0x4];
		::Il2CppArray<::System::String*>* FinishTargetGP; // 0x30
		::Il2CppArray<::System::UInt32>* FinishTargetGPTargetValue; // 0x38
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* OnFinishTargetActionConfigs; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELENTRANCECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelEntranceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelEntranceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELENTRANCECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelEntranceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelEntranceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELENTRANCECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
