#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelStartSequeceConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_LEVELSTARTSEQUECECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A0B50)
#define RPG_GAMECORE_LEVELSTARTSEQUECECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7A09A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelStartSequeceConfig_TypeDefinitionIndex = 18300;

	class LevelStartSequeceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsLoop; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 Order; // 0x14
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSTARTSEQUECECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelStartSequeceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelStartSequeceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSTARTSEQUECECONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
