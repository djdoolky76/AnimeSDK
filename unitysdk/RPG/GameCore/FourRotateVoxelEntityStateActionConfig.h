#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimBaseEventAction; }
namespace RPG::GameCore { class FourRotateVoxelEntityStateActionConfig; }
namespace RPG::GameCore { class LittleGameEvent; }

#define RPG_GAMECORE_FOURROTATEVOXELENTITYSTATEACTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C0000)
#define RPG_GAMECORE_FOURROTATEVOXELENTITYSTATEACTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BFE00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelEntityStateActionConfig_TypeDefinitionIndex = 16764;

	class FourRotateVoxelEntityStateActionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LittleGameEvent* InitEvent; // 0x10
		::RPG::GameCore::LittleGameEvent* EnterEvent; // 0x18
		::RPG::GameCore::LittleGameEvent* ExitEvent; // 0x20
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* InitActionConfigs; // 0x28
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* EnterActionConfigs; // 0x30
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* ExitActionConfigs; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELENTITYSTATEACTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelEntityStateActionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelEntityStateActionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELENTITYSTATEACTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
