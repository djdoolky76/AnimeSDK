#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimBaseEventAction; }
namespace RPG::GameCore { class FourRotateVoxelPortalConfig; }
namespace RPG::GameCore { class FourRotateVoxelPortalTarget; }
namespace RPG::GameCore { class PropButtonConfig; }

#define RPG_GAMECORE_FOURROTATEVOXELPORTALCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F1210)
#define RPG_GAMECORE_FOURROTATEVOXELPORTALCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6F1220)
#define RPG_GAMECORE_FOURROTATEVOXELPORTALCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F11E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelPortalConfig_TypeDefinitionIndex = 16752;

	class FourRotateVoxelPortalConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsPortal; // 0x10
		::System::Boolean IsPortalByAction; // 0x11
		::System::Byte _padding0[0x6];
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* OnPortalActionConfigs; // 0x18
		::RPG::GameCore::PropButtonConfig* InteractButtonConfig; // 0x20
		::RPG::GameCore::FourRotateVoxelPortalTarget* Target; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPORTALCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelPortalConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelPortalConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPORTALCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelPortalConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelPortalConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPORTALCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
