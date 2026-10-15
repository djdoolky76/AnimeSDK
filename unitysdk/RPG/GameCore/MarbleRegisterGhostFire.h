#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleRegisterGhostFire; }
namespace System { class String; }

#define RPG_GAMECORE_MARBLEREGISTERGHOSTFIRE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D817DC0)
#define RPG_GAMECORE_MARBLEREGISTERGHOSTFIRE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D817DD0)
#define RPG_GAMECORE_MARBLEREGISTERGHOSTFIRE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D817D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleRegisterGhostFire_TypeDefinitionIndex = 16855;

	class MarbleRegisterGhostFire : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Int32 GhostFireCount; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* GhostFireCountDynamic; // 0x18
		::System::Single GhostFireRadius; // 0x20
		::System::Byte _padding1[0x4];
		::System::String* GhostFireRadiusDynamic; // 0x28
		::System::UInt32 GhostFireSkill; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEREGISTERGHOSTFIRE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleRegisterGhostFire* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleRegisterGhostFire*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEREGISTERGHOSTFIRE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleRegisterGhostFire* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleRegisterGhostFire*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEREGISTERGHOSTFIRE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
