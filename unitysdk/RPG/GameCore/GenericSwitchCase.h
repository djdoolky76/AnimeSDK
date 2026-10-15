#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CaseContainerBase; }
namespace RPG::GameCore { class GenericSwitchCase; }
namespace RPG::GameCore { class SwitchRefBase; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_GENERICSWITCHCASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6EFED0)
#define RPG_GAMECORE_GENERICSWITCHCASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6EFEE0)
#define RPG_GAMECORE_GENERICSWITCHCASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6EFEA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GenericSwitchCase_TypeDefinitionIndex = 23770;

	class GenericSwitchCase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::SwitchRefBase* SwitchRef; // 0x18
		::Il2CppArray<::RPG::GameCore::CaseContainerBase*>* Cases; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Default; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GENERICSWITCHCASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GenericSwitchCase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GenericSwitchCase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GENERICSWITCHCASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GenericSwitchCase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GenericSwitchCase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GENERICSWITCHCASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
