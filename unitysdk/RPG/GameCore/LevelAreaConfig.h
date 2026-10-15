#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelAreaConfig; }

#define RPG_GAMECORE_LEVELAREACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A54E0)
#define RPG_GAMECORE_LEVELAREACONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7A54A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAreaConfig_TypeDefinitionIndex = 18322;

	class LevelAreaConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelAreaConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelAreaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREACONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
