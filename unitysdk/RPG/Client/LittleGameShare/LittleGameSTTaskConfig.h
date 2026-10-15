#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client::LittleGameShare { class LittleGameSTTaskConfig; }

#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMESTTASKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2F4930)
#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMESTTASKCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2F4870)
#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMESTTASKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2F41E0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int LittleGameSTTaskConfig_TypeDefinitionIndex = 10356;

	class LittleGameSTTaskConfig : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMESTTASKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMESTTASKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMESTTASKCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
