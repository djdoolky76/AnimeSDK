#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitRotatableRegionChange; }

#define RPG_GAMECORE_WAITROTATABLEREGIONCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA0A20)
#define RPG_GAMECORE_WAITROTATABLEREGIONCHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA0A30)
#define RPG_GAMECORE_WAITROTATABLEREGIONCHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA09E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRotatableRegionChange_TypeDefinitionIndex = 21251;

	class WaitRotatableRegionChange : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::System::Int32 RegionID; // 0x20
		::System::Boolean IsEnter; // 0x24
		::System::Byte _padding0[0x3];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROTATABLEREGIONCHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRotatableRegionChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRotatableRegionChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROTATABLEREGIONCHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRotatableRegionChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRotatableRegionChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROTATABLEREGIONCHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
