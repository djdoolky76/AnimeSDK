#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class InitGridFightStatisticsBinding; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_INITGRIDFIGHTSTATISTICSBINDING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D75A7B0)
#define RPG_GAMECORE_INITGRIDFIGHTSTATISTICSBINDING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D75A7C0)
#define RPG_GAMECORE_INITGRIDFIGHTSTATISTICSBINDING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D75A780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InitGridFightStatisticsBinding_TypeDefinitionIndex = 22537;

	class InitGridFightStatisticsBinding : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTopDamagerRoleChanged; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnDynamicEquipmentTrigger; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITGRIDFIGHTSTATISTICSBINDING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::InitGridFightStatisticsBinding* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InitGridFightStatisticsBinding*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITGRIDFIGHTSTATISTICSBINDING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::InitGridFightStatisticsBinding* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InitGridFightStatisticsBinding*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITGRIDFIGHTSTATISTICSBINDING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
