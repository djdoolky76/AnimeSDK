#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterEnergyBarCustomColor; }
namespace System { class String; }

#define RPG_GAMECORE_MONSTERENERGYBARCUSTOMCOLOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B1890)
#define RPG_GAMECORE_MONSTERENERGYBARCUSTOMCOLOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8B1710)

namespace RPG::GameCore
{
	class MonsterEnergyBarCustomColor : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ProgressColor; // 0x10
		::System::String* FillColor; // 0x18
		::System::String* ChangeEffColor; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERENERGYBARCUSTOMCOLOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterEnergyBarCustomColor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterEnergyBarCustomColor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERENERGYBARCUSTOMCOLOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
