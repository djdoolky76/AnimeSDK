#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class StackRedStance; }

#define RPG_GAMECORE_STACKREDSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD5DC0)
#define RPG_GAMECORE_STACKREDSTANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD5E20)
#define RPG_GAMECORE_STACKREDSTANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD5D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackRedStance_TypeDefinitionIndex = 22632;

	class StackRedStance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* RedStanceRatio; // 0x18
		::RPG::GameCore::DynamicFloat* RedStanceValue; // 0x20
		::RPG::GameCore::DynamicFloat* StanceCount; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKREDSTANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackRedStance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackRedStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKREDSTANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackRedStance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackRedStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKREDSTANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
