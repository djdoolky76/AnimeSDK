#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TeammateAttackFormationConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TEAMMATEATTACKFORMATIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7E740)
#define RPG_GAMECORE_TEAMMATEATTACKFORMATIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB7E5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeammateAttackFormationConfig_TypeDefinitionIndex = 17113;

	class TeammateAttackFormationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 FormationIndexA; // 0x10
		::System::Int32 FormationIndexB; // 0x14
		::System::String* FormationName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMMATEATTACKFORMATIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeammateAttackFormationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeammateAttackFormationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMMATEATTACKFORMATIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
