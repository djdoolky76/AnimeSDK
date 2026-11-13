#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BattleAvatarNihiluxCustomUIData; }
namespace RPG::Client { class NihiluxDirtyHPRatioMaskData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }

#define RPG_CLIENT_NIHILUXDIRTYHPRATIOMASKDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1AD8D6D0)
#define RPG_CLIENT_NIHILUXDIRTYHPRATIOMASKDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1AD8D770)
#define RPG_CLIENT_NIHILUXDIRTYHPRATIOMASKDATA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1AD8D660)
#define RPG_CLIENT_NIHILUXDIRTYHPRATIOMASKDATA_GET_RATIO_OFFSET UNITYSDK_OFFSET(0x1AD8D6B0)
#define RPG_CLIENT_NIHILUXDIRTYHPRATIOMASKDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0x1AD8D780)
#define RPG_CLIENT_NIHILUXDIRTYHPRATIOMASKDATA_SET_RATIO_OFFSET UNITYSDK_OFFSET(0x1AD8D6C0)
#define RPG_CLIENT_NIHILUXDIRTYHPRATIOMASKDATA__ENSURENIHILUXCUSTOMUIDATA_OFFSET UNITYSDK_OFFSET(0x1AD8D870)
#define RPG_CLIENT_NIHILUXDIRTYHPRATIOMASKDATA__REFRESHRATIO_OFFSET UNITYSDK_OFFSET(0x1AD8D7D0)

namespace RPG::Client
{
	inline static constexpr unsigned int NihiluxDirtyHPRatioMaskData_TypeDefinitionIndex = 73664;

	class NihiluxDirtyHPRatioMaskData : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelUIComponent* _LevelUIData; // 0x10
		::RPG::GameCore::GameEntity* _Entity; // 0x18
		::RPG::Client::BattleAvatarNihiluxCustomUIData* _NihiluxCustomUIData; // 0x20
		::System::Single _Ratio_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NIHILUXDIRTYHPRATIOMASKDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NIHILUXDIRTYHPRATIOMASKDATA_GET_ISVALID_OFFSET))(this);
		}

		::System::Single get_Ratio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NIHILUXDIRTYHPRATIOMASKDATA_GET_RATIO_OFFSET))(this);
		}

		::System::Void set_Ratio(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_NIHILUXDIRTYHPRATIOMASKDATA_SET_RATIO_OFFSET))(this, a1);
		}

		static ::RPG::Client::NihiluxDirtyHPRatioMaskData* Create(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::Client::NihiluxDirtyHPRatioMaskData*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NIHILUXDIRTYHPRATIOMASKDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Refresh(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NIHILUXDIRTYHPRATIOMASKDATA_REFRESH_OFFSET))(this, a1);
		}

		::System::Void _RefreshRatio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NIHILUXDIRTYHPRATIOMASKDATA__REFRESHRATIO_OFFSET))(this);
		}

		::System::Void _EnsureNihiluxCustomUIData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NIHILUXDIRTYHPRATIOMASKDATA__ENSURENIHILUXCUSTOMUIDATA_OFFSET))(this);
		}

	};
}
