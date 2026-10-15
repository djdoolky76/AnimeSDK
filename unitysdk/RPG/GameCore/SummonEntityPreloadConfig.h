#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SummonEntityPreloadConfig; }

#define RPG_GAMECORE_SUMMONENTITYPRELOADCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB39BD0)
#define RPG_GAMECORE_SUMMONENTITYPRELOADCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB39AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonEntityPreloadConfig_TypeDefinitionIndex = 16342;

	class SummonEntityPreloadConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::EntityType EntityType; // 0x10
		::System::UInt32 ConfigID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONENTITYPRELOADCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SummonEntityPreloadConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SummonEntityPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONENTITYPRELOADCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
