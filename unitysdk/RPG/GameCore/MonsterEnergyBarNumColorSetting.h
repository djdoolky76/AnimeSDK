#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterEnergyBarNumColorSetting; }
namespace System { class String; }

#define RPG_GAMECORE_MONSTERENERGYBARNUMCOLORSETTING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D884010)
#define RPG_GAMECORE_MONSTERENERGYBARNUMCOLORSETTING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D883F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterEnergyBarNumColorSetting_TypeDefinitionIndex = 17151;

	class MonsterEnergyBarNumColorSetting : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Normal; // 0x10
		::System::String* Golden; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERENERGYBARNUMCOLORSETTING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterEnergyBarNumColorSetting* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterEnergyBarNumColorSetting*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERENERGYBARNUMCOLORSETTING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
