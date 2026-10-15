#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_TASKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB6D300)
#define RPG_GAMECORE_TASKCONFIG_GET_ISCLIENTONLY_OFFSET UNITYSDK_OFFSET(0x1DB78E90)
#define RPG_GAMECORE_TASKCONFIG_IACFALNNPHJ_OFFSET UNITYSDK_OFFSET(0x1DB78E80)
#define RPG_GAMECORE_TASKCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB78DC0)
#define RPG_GAMECORE_TASKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB78D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TaskConfig_TypeDefinitionIndex = 23738;

	class TaskConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean TaskEnabled; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TaskConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TaskConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Boolean IACFALNNPHJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONFIG_IACFALNNPHJ_OFFSET))(this);
		}

		::System::Boolean get_IsClientOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONFIG_GET_ISCLIENTONLY_OFFSET))(this);
		}

	};
}
