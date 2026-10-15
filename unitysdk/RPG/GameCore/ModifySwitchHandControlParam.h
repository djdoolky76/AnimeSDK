#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ModifySwitchHandControlParam; }

#define RPG_GAMECORE_MODIFYSWITCHHANDCONTROLPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D86D5A0)
#define RPG_GAMECORE_MODIFYSWITCHHANDCONTROLPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D86D5B0)
#define RPG_GAMECORE_MODIFYSWITCHHANDCONTROLPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D86D570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifySwitchHandControlParam_TypeDefinitionIndex = 20961;

	class ModifySwitchHandControlParam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single Force; // 0x18
		::System::Single Drag; // 0x1C
		::System::Single RigidbodyMoveSpeed; // 0x20
		::System::Single RigidbodyRotateSpeed; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSWITCHHANDCONTROLPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifySwitchHandControlParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifySwitchHandControlParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSWITCHHANDCONTROLPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifySwitchHandControlParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifySwitchHandControlParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSWITCHHANDCONTROLPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
