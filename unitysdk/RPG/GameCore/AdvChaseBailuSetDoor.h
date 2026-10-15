#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvChaseBailuSetDoor; }

#define RPG_GAMECORE_ADVCHASEBAILUSETDOOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D36C700)
#define RPG_GAMECORE_ADVCHASEBAILUSETDOOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D36C710)
#define RPG_GAMECORE_ADVCHASEBAILUSETDOOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D36C6D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvChaseBailuSetDoor_TypeDefinitionIndex = 22229;

	class AdvChaseBailuSetDoor : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 DoorIndex; // 0x18
		::System::Boolean Open; // 0x1C
		::System::Boolean Inverse; // 0x1D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHASEBAILUSETDOOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvChaseBailuSetDoor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvChaseBailuSetDoor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHASEBAILUSETDOOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvChaseBailuSetDoor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvChaseBailuSetDoor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHASEBAILUSETDOOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
