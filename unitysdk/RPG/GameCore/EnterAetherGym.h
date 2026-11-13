#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnterAetherGym; }

#define RPG_GAMECORE_ENTERAETHERGYM_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0ED370)
#define RPG_GAMECORE_ENTERAETHERGYM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F0ED380)
#define RPG_GAMECORE_ENTERAETHERGYM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F0ED340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnterAetherGym_TypeDefinitionIndex = 22063;

	class EnterAetherGym : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GymID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERAETHERGYM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnterAetherGym* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnterAetherGym*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERAETHERGYM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnterAetherGym* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnterAetherGym*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERAETHERGYM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
