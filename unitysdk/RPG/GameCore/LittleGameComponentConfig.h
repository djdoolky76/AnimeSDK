#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameComponentConfig; }

#define RPG_GAMECORE_LITTLEGAMECOMPONENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7AF7F0)
#define RPG_GAMECORE_LITTLEGAMECOMPONENTCONFIG_LLOAOCDPDLP_OFFSET UNITYSDK_OFFSET(0x1D7B1D30)
#define RPG_GAMECORE_LITTLEGAMECOMPONENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7B1CD0)
#define RPG_GAMECORE_LITTLEGAMECOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7B1C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameComponentConfig_TypeDefinitionIndex = 18838;

	class LittleGameComponentConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECOMPONENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECOMPONENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Boolean LLOAOCDPDLP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECOMPONENTCONFIG_LLOAOCDPDLP_OFFSET))(this);
		}

	};
}
