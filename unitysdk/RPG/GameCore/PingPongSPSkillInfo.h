#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PingPongProjectileType.h"
#include "unitysdk/RPG/GameCore/PingPongSPSkillType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongSPSkillInfo; }
namespace System { class String; }

#define RPG_GAMECORE_PINGPONGSPSKILLINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8EB360)
#define RPG_GAMECORE_PINGPONGSPSKILLINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8EB1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongSPSkillInfo_TypeDefinitionIndex = 16982;

	class PingPongSPSkillInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PingPongSPSkillType SPSkillType; // 0x10
		::RPG::GameCore::PingPongProjectileType ProjectileType; // 0x14
		::System::String* BtnImagePath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGSPSKILLINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongSPSkillInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongSPSkillInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGSPSKILLINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
