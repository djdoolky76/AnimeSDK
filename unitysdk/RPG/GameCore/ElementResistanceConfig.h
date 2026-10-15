#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElementResistanceConfig; }

#define RPG_GAMECORE_ELEMENTRESISTANCECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D633A40)
#define RPG_GAMECORE_ELEMENTRESISTANCECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6338F0)

namespace RPG::GameCore
{
	class ElementResistanceConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint Value; // 0x10
		::RPG::GameCore::AttackDamageType DamageType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELEMENTRESISTANCECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElementResistanceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElementResistanceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELEMENTRESISTANCECONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
