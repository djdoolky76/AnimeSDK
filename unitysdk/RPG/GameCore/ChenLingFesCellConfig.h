#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesCellType.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesCellConfig; }

#define RPG_GAMECORE_CHENLINGFESCELLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D55FE80)
#define RPG_GAMECORE_CHENLINGFESCELLCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D55FE90)
#define RPG_GAMECORE_CHENLINGFESCELLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D55FE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesCellConfig_TypeDefinitionIndex = 18441;

	class ChenLingFesCellConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::GameCore::ChenLingFesCellType Type; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESCELLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingFesCellConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingFesCellConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESCELLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingFesCellConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingFesCellConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESCELLCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
