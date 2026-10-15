#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitPlayerChangeModel; }

#define RPG_GAMECORE_WAITPLAYERCHANGEMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC70350)
#define RPG_GAMECORE_WAITPLAYERCHANGEMODEL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC70360)
#define RPG_GAMECORE_WAITPLAYERCHANGEMODEL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC70320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPlayerChangeModel_TypeDefinitionIndex = 20386;

	class WaitPlayerChangeModel : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Callback; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPLAYERCHANGEMODEL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitPlayerChangeModel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitPlayerChangeModel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPLAYERCHANGEMODEL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitPlayerChangeModel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitPlayerChangeModel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPLAYERCHANGEMODEL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
