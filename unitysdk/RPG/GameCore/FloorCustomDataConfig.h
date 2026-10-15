#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FloorCustomDataConfig; }
namespace RPG::GameCore { class FloorCustomValueConfig; }
namespace RPG::GameCore { class FloorSavedValueConfig; }

#define RPG_GAMECORE_FLOORCUSTOMDATACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E5690)
#define RPG_GAMECORE_FLOORCUSTOMDATACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E54D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorCustomDataConfig_TypeDefinitionIndex = 18287;

	class FloorCustomDataConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FloorCustomValueConfig*>* CustomValues; // 0x10
		::Il2CppArray<::RPG::GameCore::FloorSavedValueConfig*>* SavedValues; // 0x18
		::Il2CppArray<::RPG::GameCore::FloorCustomValueConfig*>* ConstValues; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMDATACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FloorCustomDataConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FloorCustomDataConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMDATACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
