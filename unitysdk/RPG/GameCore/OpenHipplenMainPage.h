#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OpenHipplenMainPage; }

#define RPG_GAMECORE_OPENHIPPLENMAINPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B3F00)
#define RPG_GAMECORE_OPENHIPPLENMAINPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8B3F10)
#define RPG_GAMECORE_OPENHIPPLENMAINPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8B3E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenHipplenMainPage_TypeDefinitionIndex = 21303;

	class OpenHipplenMainPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENHIPPLENMAINPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpenHipplenMainPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpenHipplenMainPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENHIPPLENMAINPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpenHipplenMainPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpenHipplenMainPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENHIPPLENMAINPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
