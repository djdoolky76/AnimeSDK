#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelInitSequeceConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_LEVELINITSEQUECECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9F4DF0)
#define RPG_GAMECORE_LEVELINITSEQUECECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E9F4D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelInitSequeceConfig_TypeDefinitionIndex = 18461;

	class LevelInitSequeceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINITSEQUECECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelInitSequeceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelInitSequeceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINITSEQUECECONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
