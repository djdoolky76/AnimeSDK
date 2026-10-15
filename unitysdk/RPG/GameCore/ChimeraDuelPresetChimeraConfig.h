#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelPresetChimeraConfig; }

#define RPG_GAMECORE_CHIMERADUELPRESETCHIMERACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D579A40)
#define RPG_GAMECORE_CHIMERADUELPRESETCHIMERACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5797D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelPresetChimeraConfig_TypeDefinitionIndex = 16026;

	class ChimeraDuelPresetChimeraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ChimeraID; // 0x10
		::System::Int32 ChimeraGainExp; // 0x14
		::System::Int32 ChimeraDeltaHp; // 0x18
		::System::Int32 ChimeraDeltaAtk; // 0x1C
		::Il2CppArray<::System::UInt32>* Equipments; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPRESETCHIMERACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelPresetChimeraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelPresetChimeraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPRESETCHIMERACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
