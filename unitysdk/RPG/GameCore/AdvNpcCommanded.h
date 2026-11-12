#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvNpcCommanded; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ADVNPCCOMMANDED_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B5310)
#define RPG_GAMECORE_ADVNPCCOMMANDED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E5B5320)
#define RPG_GAMECORE_ADVNPCCOMMANDED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E5B52E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcCommanded_TypeDefinitionIndex = 20329;

	class AdvNpcCommanded : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCommandToSearchProp; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCCOMMANDED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcCommanded* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcCommanded*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCCOMMANDED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcCommanded* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcCommanded*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCCOMMANDED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
