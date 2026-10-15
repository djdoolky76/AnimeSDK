#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElationLevelSetting; }

#define RPG_GAMECORE_ELATIONLEVELSETTING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D604EA0)
#define RPG_GAMECORE_ELATIONLEVELSETTING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D604D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElationLevelSetting_TypeDefinitionIndex = 17153;

	class ElationLevelSetting : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 SmallThreshold; // 0x10
		::System::Int32 LargeThreshold; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONLEVELSETTING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElationLevelSetting* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElationLevelSetting*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONLEVELSETTING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
