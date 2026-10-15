#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RoguePropPageType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RoguePropOpenPage; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ROGUEPROPOPENPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2C430)
#define RPG_GAMECORE_ROGUEPROPOPENPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA2C440)
#define RPG_GAMECORE_ROGUEPROPOPENPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2C400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePropOpenPage_TypeDefinitionIndex = 22289;

	class RoguePropOpenPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::RoguePropPageType Type; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUIEnter; // 0x20
		::System::Boolean WaitForExit; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPROPOPENPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoguePropOpenPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoguePropOpenPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPROPOPENPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoguePropOpenPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoguePropOpenPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPROPOPENPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
