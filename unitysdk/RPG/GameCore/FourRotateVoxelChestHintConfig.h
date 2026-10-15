#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelChestHintConfig; }
namespace RPG::GameCore { class LittleGameDynamicVar; }
namespace System { class String; }

#define RPG_GAMECORE_FOURROTATEVOXELCHESTHINTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BF900)
#define RPG_GAMECORE_FOURROTATEVOXELCHESTHINTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6BF910)
#define RPG_GAMECORE_FOURROTATEVOXELCHESTHINTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BF8D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelChestHintConfig_TypeDefinitionIndex = 16781;

	class FourRotateVoxelChestHintConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsChestHint; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::LittleGameDynamicVar* ChestHintBindLevelVarName; // 0x18
		::System::SByte ChestHintLevelVarTargetValue; // 0x20
		::System::Byte _padding1[0x7];
		::System::String* HintAttachPointName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELCHESTHINTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelChestHintConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelChestHintConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELCHESTHINTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelChestHintConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelChestHintConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELCHESTHINTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
