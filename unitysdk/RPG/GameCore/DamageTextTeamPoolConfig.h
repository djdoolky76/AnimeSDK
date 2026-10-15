#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DamageTextTeamPoolConfig; }

#define RPG_GAMECORE_DAMAGETEXTTEAMPOOLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5F2840)
#define RPG_GAMECORE_DAMAGETEXTTEAMPOOLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5F2640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DamageTextTeamPoolConfig_TypeDefinitionIndex = 17144;

	class DamageTextTeamPoolConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::Int32>* All; // 0x10
		::Il2CppArray<::System::Int32>* WithEffect; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGETEXTTEAMPOOLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DamageTextTeamPoolConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DamageTextTeamPoolConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGETEXTTEAMPOOLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
