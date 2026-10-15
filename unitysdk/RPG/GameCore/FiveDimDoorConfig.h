#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/Sirenix/OdinInspector/ValueDropdownItem_1.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimDoorConfig; }
namespace RPG::GameCore { class LittleGameDynamicVar; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_GAMECORE_FIVEDIMDOORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D68B960)
#define RPG_GAMECORE_FIVEDIMDOORCONFIG_EHJGEOBLMEC_OFFSET UNITYSDK_OFFSET(0x1D68BC10)
#define RPG_GAMECORE_FIVEDIMDOORCONFIG_FJMIIJCECKE_OFFSET UNITYSDK_OFFSET(0x1D68BC80)
#define RPG_GAMECORE_FIVEDIMDOORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D68B970)
#define RPG_GAMECORE_FIVEDIMDOORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D68B920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDoorConfig_TypeDefinitionIndex = 18598;

	class FiveDimDoorConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsFiveDimDoor; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 RequireKeyNumber; // 0x14
		::Il2CppArray<::RPG::GameCore::LittleGameDynamicVar*>* BindLevelVarNames; // 0x18
		::System::Single OpenDelayDuration; // 0x20
		::System::Boolean SendEventOnInit; // 0x24
		::System::Byte _padding1[0x3];
		::RPG::GameCore::LittleGameEvent* KeyChangeEvent; // 0x28
		::RPG::GameCore::LittleGameEvent* KeyCollectEvent; // 0x30
		::RPG::GameCore::LittleGameEvent* DoorUnlockEvent; // 0x38
		::RPG::GameCore::LittleGameEvent* DoorOpenEvent; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDOORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimDoorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimDoorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDOORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimDoorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimDoorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDOORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::IEnumerable_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::UInt32>>* EHJGEOBLMEC()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::UInt32>>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDOORCONFIG_EHJGEOBLMEC_OFFSET))();
		}

		::System::Void FJMIIJCECKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDOORCONFIG_FJMIIJCECKE_OFFSET))(this);
		}

	};
}
