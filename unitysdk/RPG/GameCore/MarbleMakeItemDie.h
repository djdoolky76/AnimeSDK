#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleMakeItemDie; }

#define RPG_GAMECORE_MARBLEMAKEITEMDIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA5AAA0)
#define RPG_GAMECORE_MARBLEMAKEITEMDIE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EA5AAB0)
#define RPG_GAMECORE_MARBLEMAKEITEMDIE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA5AA50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleMakeItemDie_TypeDefinitionIndex = 17039;

	class MarbleMakeItemDie : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::System::Int32 DisplayDamage; // 0x14
		::RPG::GameCore::MarbleTarget AttackerType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMAKEITEMDIE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleMakeItemDie* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleMakeItemDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMAKEITEMDIE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleMakeItemDie* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleMakeItemDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMAKEITEMDIE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
