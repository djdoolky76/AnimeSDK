#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelCheckSequeceConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_LEVELCHECKSEQUECECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D779A30)
#define RPG_GAMECORE_LEVELCHECKSEQUECECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D779940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCheckSequeceConfig_TypeDefinitionIndex = 18301;

	class LevelCheckSequeceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHECKSEQUECECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelCheckSequeceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelCheckSequeceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHECKSEQUECECONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
