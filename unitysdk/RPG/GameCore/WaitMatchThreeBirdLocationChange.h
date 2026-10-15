#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitMatchThreeBirdLocationChange; }

#define RPG_GAMECORE_WAITMATCHTHREEBIRDLOCATIONCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6E0C0)
#define RPG_GAMECORE_WAITMATCHTHREEBIRDLOCATIONCHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC6E0D0)
#define RPG_GAMECORE_WAITMATCHTHREEBIRDLOCATIONCHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC6E080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitMatchThreeBirdLocationChange_TypeDefinitionIndex = 20982;

	class WaitMatchThreeBirdLocationChange : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::DynamicFloat* LocationID; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMATCHTHREEBIRDLOCATIONCHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitMatchThreeBirdLocationChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitMatchThreeBirdLocationChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMATCHTHREEBIRDLOCATIONCHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitMatchThreeBirdLocationChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitMatchThreeBirdLocationChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMATCHTHREEBIRDLOCATIONCHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
