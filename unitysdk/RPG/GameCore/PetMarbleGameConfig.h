#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PetMarbleGameConfig; }

#define RPG_GAMECORE_PETMARBLEGAMECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DB740)
#define RPG_GAMECORE_PETMARBLEGAMECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8DB500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetMarbleGameConfig_TypeDefinitionIndex = 18929;

	class PetMarbleGameConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single ChoosePetTime; // 0x10
		::System::Single ChoosePetFinishTime; // 0x14
		::System::Int32 SelectedPetCount; // 0x18
		::System::Single AIChoosePetFirstSelectDelay; // 0x1C
		::System::Single AIChoosePetSelectInterval; // 0x20
		::System::Single AIChoosePetReadyDelay; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETMARBLEGAMECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PetMarbleGameConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PetMarbleGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETMARBLEGAMECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
