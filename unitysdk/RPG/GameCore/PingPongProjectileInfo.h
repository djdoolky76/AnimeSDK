#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongProjectileInfo; }
namespace System { class String; }

#define RPG_GAMECORE_PINGPONGPROJECTILEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8EB170)
#define RPG_GAMECORE_PINGPONGPROJECTILEINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8EAE90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongProjectileInfo_TypeDefinitionIndex = 16986;

	class PingPongProjectileInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::Single Speed; // 0x18
		::System::Single Angle; // 0x1C
		::System::Single NormalizedPos; // 0x20
		::System::Boolean Piercing; // 0x24
		::System::Boolean Homing; // 0x25
		::System::Byte _padding0[0x2];
		::System::Single HomingRotSpeed; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGPROJECTILEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongProjectileInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongProjectileInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGPROJECTILEINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
